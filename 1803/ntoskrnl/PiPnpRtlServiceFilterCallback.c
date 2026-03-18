/*
 * XREFs of PiPnpRtlServiceFilterCallback @ 0x1405F0D00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     _CmIsDevicePresent @ 0x140585F3C (_CmIsDevicePresent.c)
 *     _CmGetInstallerClassRegProp @ 0x1405CD588 (_CmGetInstallerClassRegProp.c)
 */

char __fastcall PiPnpRtlServiceFilterCallback(__int64 a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // edi
  __int64 v7; // r12
  __int64 v8; // r14
  char v9; // r15
  PCUNICODE_STRING v10; // rax
  PVOID i; // rdi
  int DeviceRegProp; // edi
  int *v13; // rax
  int v14; // ecx
  int *v15; // r12
  unsigned int v16; // eax
  int InstallerClassRegProp; // eax
  unsigned int v19; // eax
  const WCHAR *j; // r14
  __int64 v21; // rax
  void *v22; // rcx
  PVOID PoolWithTag; // r14
  void *v24; // rcx
  __int64 (__fastcall *v25)(__int64, __int64, _QWORD, _QWORD); // rax
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-89h] BYREF
  char NumberOfBytes_4; // [rsp+44h] [rbp-85h] BYREF
  int v28; // [rsp+48h] [rbp-81h] BYREF
  int v29; // [rsp+4Ch] [rbp-7Dh]
  unsigned int v30; // [rsp+50h] [rbp-79h]
  unsigned int v31; // [rsp+54h] [rbp-75h]
  __int64 v32; // [rsp+58h] [rbp-71h]
  const WCHAR *v33; // [rsp+60h] [rbp-69h]
  _DWORD v34[2]; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v35[2]; // [rsp+70h] [rbp-59h] BYREF
  _DWORD *v36; // [rsp+78h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v38[76]; // [rsp+90h] [rbp-39h] BYREF
  __int16 v39; // [rsp+DCh] [rbp+13h]

  v4 = 0;
  v30 = a3;
  v6 = a3;
  v7 = (__int64)a2;
  v33 = a2;
  v8 = a1;
  v32 = a1;
  v9 = 0;
  NumberOfBytes_4 = 0;
  NumberOfBytes = 0;
  if ( !*(_BYTE *)(a4 + 8) || CmIsDevicePresent(a1, a2, &NumberOfBytes_4) >= 0 && NumberOfBytes_4 )
  {
    v10 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v10->Length >= 2u && *v10->Buffer )
    {
      for ( i = *(PVOID *)(a4 + 16); ; *(_QWORD *)(a4 + 16) = i )
      {
        NumberOfBytes = *(_DWORD *)(a4 + 24);
        DeviceRegProp = CmGetDeviceRegProp(v8, v7, 0LL, 5, (__int64)&v28, (__int64)i, (__int64)&NumberOfBytes, 0);
        if ( !DeviceRegProp && NumberOfBytes < 2 )
          goto LABEL_65;
        if ( DeviceRegProp != -1073741789 )
          goto LABEL_9;
        if ( NumberOfBytes < 2 )
        {
LABEL_65:
          DeviceRegProp = -1073741811;
          goto LABEL_12;
        }
        i = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x47706E50u);
        if ( !i )
          break;
        v22 = *(void **)(a4 + 16);
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
        *(_DWORD *)(a4 + 24) = NumberOfBytes;
      }
      DeviceRegProp = -1073741670;
LABEL_9:
      if ( DeviceRegProp
        || (*(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0,
            RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) < 0)
        || !RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
      {
LABEL_12:
        v13 = v34;
        v34[0] = 1;
        v36 = v34;
        v34[1] = 2;
        v31 = 0;
        v35[0] = 18;
        v35[1] = 19;
        while ( 1 )
        {
          v14 = *v13;
          v29 = v14;
          if ( v14 == 2 )
          {
            NumberOfBytes = 78;
            DeviceRegProp = CmGetDeviceRegProp(v8, v7, 0LL, 9, (__int64)&v28, (__int64)v38, (__int64)&NumberOfBytes, 0);
            if ( DeviceRegProp < 0 || v28 != 1 || NumberOfBytes < 2 )
              return v9;
            v14 = v29;
            v39 = 0;
          }
          v15 = v35;
          do
          {
            while ( 1 )
            {
              v16 = *(_DWORD *)(a4 + 24);
              NumberOfBytes = v16;
              if ( v14 == 1 )
              {
                InstallerClassRegProp = CmGetDeviceRegProp(
                                          v8,
                                          (__int64)v33,
                                          0LL,
                                          *v15,
                                          (__int64)&v28,
                                          *(_QWORD *)(a4 + 16),
                                          (__int64)&NumberOfBytes,
                                          0);
              }
              else
              {
                if ( v14 != 2 )
                  goto LABEL_18;
                InstallerClassRegProp = CmGetInstallerClassRegProp(
                                          v8,
                                          (__int64)v38,
                                          0LL,
                                          *v15,
                                          (__int64)&v28,
                                          *(_QWORD *)(a4 + 16),
                                          (__int64)&NumberOfBytes);
              }
              DeviceRegProp = InstallerClassRegProp;
              v16 = NumberOfBytes;
LABEL_18:
              if ( !DeviceRegProp && v16 < 2 )
              {
LABEL_67:
                DeviceRegProp = -1073741811;
                goto LABEL_21;
              }
              if ( DeviceRegProp != -1073741789 )
                break;
              if ( v16 < 2 )
                goto LABEL_67;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x47706E50u);
              if ( !PoolWithTag )
              {
                DeviceRegProp = -1073741670;
                break;
              }
              v24 = *(void **)(a4 + 16);
              if ( v24 )
                ExFreePoolWithTag(v24, 0);
              *(_DWORD *)(a4 + 24) = NumberOfBytes;
              v14 = v29;
              *(_QWORD *)(a4 + 16) = PoolWithTag;
              v8 = v32;
            }
            if ( DeviceRegProp >= 0 && v28 == 7 )
            {
              v19 = *(_DWORD *)(a4 + 24);
              if ( v19 > 2 )
              {
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v19 >> 1) - 2) = 0;
                v19 = *(_DWORD *)(a4 + 24);
              }
              if ( v19 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v19 >> 1) - 4) = 0;
              for ( j = *(const WCHAR **)(a4 + 16); *j; j += v21 + 1 )
              {
                if ( RtlInitUnicodeStringEx(&DestinationString, j) >= 0
                  && RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                {
                  v9 = 1;
                  break;
                }
                v21 = -1LL;
                do
                  ++v21;
                while ( j[v21] );
              }
              if ( v9 )
              {
                v8 = v32;
                v7 = (__int64)v33;
                goto LABEL_58;
              }
            }
LABEL_21:
            v14 = v29;
            ++v4;
            v8 = v32;
            ++v15;
          }
          while ( v4 < 2 );
          v7 = (__int64)v33;
          v4 = 0;
          v13 = v36 + 1;
          ++v31;
          ++v36;
          if ( v31 >= 2 )
            return v9;
        }
      }
      v9 = 1;
LABEL_58:
      v6 = v30;
    }
    else
    {
      v9 = 1;
    }
    v25 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a4 + 32);
    if ( v25 )
      return v25(v8, v7, v6, *(_QWORD *)(a4 + 40));
  }
  return v9;
}
