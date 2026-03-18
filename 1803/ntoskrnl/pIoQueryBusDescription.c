/*
 * XREFs of pIoQueryBusDescription @ 0x14060FD74
 * Callers:
 *     IoQueryDeviceDescription @ 0x14060FC60 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcsncmp @ 0x14018A6F0 (wcsncmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1401A7B00 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryKeyInformation @ 0x1405D953C (IopGetRegistryKeyInformation.c)
 *     IopOpenRegistryKey @ 0x1405F6BA8 (IopOpenRegistryKey.c)
 *     pIoQueryDeviceDescription @ 0x14060F7F0 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 *     IopGetRegistryValues @ 0x1406100E8 (IopGetRegistryValues.c)
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
  unsigned int v16; // r9d
  unsigned int *v17; // rax
  NTSTATUS DeviceDescription; // eax
  ULONG Length; // [rsp+20h] [rbp-A1h]
  HANDLE Handle; // [rsp+60h] [rbp-61h] BYREF
  PVOID P; // [rsp+68h] [rbp-59h] BYREF
  unsigned int *v22; // [rsp+70h] [rbp-51h]
  ULONG v23; // [rsp+78h] [rbp-49h]
  HANDLE KeyHandle; // [rsp+80h] [rbp-41h]
  UNICODE_STRING Destination; // [rsp+90h] [rbp-31h] BYREF
  UNICODE_STRING Source; // [rsp+A0h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp-11h] BYREF
  UNICODE_STRING *v28; // [rsp+B8h] [rbp-9h]
  UNICODE_STRING v29; // [rsp+C0h] [rbp-1h] BYREF
  PVOID v30; // [rsp+D0h] [rbp+Fh] BYREF
  PVOID v31; // [rsp+D8h] [rbp+17h]
  PVOID v32; // [rsp+E0h] [rbp+1Fh]

  v28 = a2;
  v22 = a4;
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
    v23 = v8;
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
        if ( v13 && *v13 == *v22 )
          break;
        RegistryValues = ZwEnumerateKey(KeyHandle, v12, KeyBasicInformation, PoolWithTag, v23, &ResultLength);
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
            Destination = *v28;
            RtlAppendUnicodeToString(&Destination, L"\\");
            RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( a5 )
              goto LABEL_23;
            RegistryValues = IopGetRegistryValues(Handle);
            if ( RegistryValues >= 0 )
            {
              v14 = v31;
              if ( v31 )
              {
                if ( *((_DWORD *)v31 + 3) )
                {
                  if ( *(_DWORD *)((char *)v31 + *((unsigned int *)v31 + 2)) == **a1 )
                  {
                    v16 = *v22 + 1;
                    *v22 = v16;
                    v17 = a1[1];
                    if ( !v17 || *v17 == v16 )
                    {
                      if ( a1[2] )
                      {
                        v29 = Destination;
                        DeviceDescription = pIoQueryDeviceDescription(
                                              a1,
                                              (__int128 *)&v29,
                                              (__int64)v14,
                                              v16,
                                              (__int64)&v30);
                      }
                      else
                      {
                        DeviceDescription = ((__int64 (__fastcall *)(unsigned int *, UNICODE_STRING *, _QWORD))a1[6])(
                                              a1[7],
                                              &Destination,
                                              **a1);
                      }
                      v14 = v31;
                      RegistryValues = DeviceDescription;
                    }
                  }
                }
              }
              if ( v30 )
              {
                ExFreePoolWithTag(v30, 0);
                v14 = v31;
                v30 = 0LL;
              }
              if ( v14 )
              {
                ExFreePoolWithTag(v14, 0);
                v31 = 0LL;
              }
              if ( v32 )
              {
                ExFreePoolWithTag(v32, 0);
                v32 = 0LL;
              }
            }
            v15 = a1[1];
            if ( !v15 || *v15 != *v22 )
            {
LABEL_23:
              v29 = Destination;
              RegistryValues = pIoQueryBusDescription(
                                 (_DWORD)a1,
                                 (unsigned int)&v29,
                                 (_DWORD)Handle,
                                 (_DWORD)v22,
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
