/*
 * XREFs of pIoQueryBusDescription @ 0x1405D2CF4
 * Callers:
 *     IoQueryDeviceDescription @ 0x1405D2BE0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1405D2CF4 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     wcsncmp @ 0x140160550 (wcsncmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14017DF00 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x14046F3C4 (IopOpenRegistryKey.c)
 *     IopGetRegistryKeyInformation @ 0x1405173D8 (IopGetRegistryKeyInformation.c)
 *     pIoQueryDeviceDescription @ 0x1405D2770 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1405D2CF4 (pIoQueryBusDescription.c)
 *     IopGetRegistryValues @ 0x1405D3064 (IopGetRegistryValues.c)
 */

NTSTATUS __fastcall pIoQueryBusDescription(unsigned int **a1, UNICODE_STRING *a2, void *a3, unsigned int *a4, char a5)
{
  NTSTATUS result; // eax
  unsigned int v7; // edx
  ULONG v8; // eax
  unsigned int v9; // ecx
  NTSTATUS RegistryValues; // ebx
  unsigned __int16 *PoolWithTag; // rdi
  ULONG v12; // edx
  unsigned int *v13; // rcx
  PVOID v14; // r8
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  __int64 v17; // r9
  unsigned int *v18; // rax
  NTSTATUS DeviceDescription; // eax
  ULONG Length; // [rsp+20h] [rbp-A1h]
  HANDLE Handle; // [rsp+60h] [rbp-61h] BYREF
  PVOID P; // [rsp+68h] [rbp-59h] BYREF
  unsigned int *v23; // [rsp+70h] [rbp-51h]
  ULONG v24; // [rsp+78h] [rbp-49h]
  HANDLE KeyHandle; // [rsp+80h] [rbp-41h]
  UNICODE_STRING Destination; // [rsp+90h] [rbp-31h] BYREF
  UNICODE_STRING Source; // [rsp+A0h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp-11h] BYREF
  UNICODE_STRING *v29; // [rsp+B8h] [rbp-9h]
  UNICODE_STRING v30; // [rsp+C0h] [rbp-1h] BYREF
  PVOID v31; // [rsp+D0h] [rbp+Fh] BYREF
  PVOID v32; // [rsp+D8h] [rbp+17h]
  PVOID v33; // [rsp+E0h] [rbp+1Fh]

  v29 = a2;
  v23 = a4;
  KeyHandle = a3;
  result = IopGetRegistryKeyInformation(a3, &P);
  if ( result >= 0 )
  {
    v7 = *((_DWORD *)P + 6);
    v8 = -1;
    v9 = v7 + 32;
    if ( v7 + 32 >= v7 )
      v8 = v7 + 32;
    RegistryValues = v9 < v7 ? 0xC0000095 : 0;
    v24 = v8;
    if ( v9 >= v7 )
    {
      PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v8, 0x424B6F49u);
      ExFreePoolWithTag(P, 0);
      if ( !PoolWithTag )
        return -1073741670;
      v12 = 0;
      LODWORD(P) = 0;
      do
      {
        v13 = a1[1];
        if ( v13 && *v13 == *v23 )
          break;
        RegistryValues = ZwEnumerateKey(KeyHandle, v12, KeyBasicInformation, PoolWithTag, v24, &ResultLength);
        if ( RegistryValues < 0 )
          break;
        if ( !a5
          || !wcsncmp(
                PoolWithTag + 8,
                L"MultifunctionAdapter",
                (unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1)
          || !wcsncmp(PoolWithTag + 8, L"EisaAdapter", (unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1)
          || !wcsncmp(PoolWithTag + 8, L"TcAdapter", (unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) )
        {
          Source.Buffer = PoolWithTag + 8;
          Source.Length = PoolWithTag[6];
          Source.MaximumLength = PoolWithTag[6];
          LOBYTE(Length) = 0;
          if ( IopOpenRegistryKey(&Handle, KeyHandle, &Source, 0x20019u, Length) >= 0 )
          {
            Destination = *v29;
            RtlAppendUnicodeToString(&Destination, L"\\");
            RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( a5 )
              goto LABEL_23;
            RegistryValues = IopGetRegistryValues(Handle);
            if ( RegistryValues >= 0 )
            {
              v14 = v32;
              if ( v32 )
              {
                if ( *((_DWORD *)v32 + 3) )
                {
                  if ( *(_DWORD *)((char *)v32 + *((unsigned int *)v32 + 2)) == **a1 )
                  {
                    v16 = v23;
                    ++*v23;
                    v17 = *v16;
                    v18 = a1[1];
                    if ( !v18 || *v18 == (_DWORD)v17 )
                    {
                      if ( a1[2] )
                      {
                        v30 = Destination;
                        DeviceDescription = pIoQueryDeviceDescription(
                                              a1,
                                              (__int128 *)&v30,
                                              (__int64)v14,
                                              v17,
                                              (__int64)&v31);
                      }
                      else
                      {
                        DeviceDescription = ((__int64 (__fastcall *)(unsigned int *, UNICODE_STRING *, _QWORD, __int64, PVOID *, _DWORD, _DWORD, _QWORD, _DWORD, _DWORD, _QWORD))a1[6])(
                                              a1[7],
                                              &Destination,
                                              **a1,
                                              v17,
                                              &v31,
                                              0,
                                              0,
                                              0LL,
                                              0,
                                              0,
                                              0LL);
                      }
                      v14 = v32;
                      RegistryValues = DeviceDescription;
                    }
                  }
                }
              }
              if ( v31 )
              {
                ExFreePoolWithTag(v31, 0);
                v14 = v32;
                v31 = 0LL;
              }
              if ( v14 )
              {
                ExFreePoolWithTag(v14, 0);
                v32 = 0LL;
              }
              if ( v33 )
              {
                ExFreePoolWithTag(v33, 0);
                v33 = 0LL;
              }
            }
            v15 = a1[1];
            if ( !v15 || *v15 != *v23 )
            {
LABEL_23:
              v30 = Destination;
              RegistryValues = pIoQueryBusDescription(
                                 (_DWORD)a1,
                                 (unsigned int)&v30,
                                 (_DWORD)Handle,
                                 (_DWORD)v23,
                                 a5 == 0);
              if ( RegistryValues == -2147483622 )
                RegistryValues = 0;
            }
            ZwClose(Handle);
            Handle = 0LL;
          }
        }
        v12 = (_DWORD)P + 1;
        LODWORD(P) = (_DWORD)P + 1;
      }
      while ( RegistryValues >= 0 );
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    return RegistryValues;
  }
  return result;
}
