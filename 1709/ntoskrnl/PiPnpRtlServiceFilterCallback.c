/*
 * XREFs of PiPnpRtlServiceFilterCallback @ 0x14051B940
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     _CmGetInstallerClassRegProp @ 0x14051D640 (_CmGetInstallerClassRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _CmIsDevicePresent @ 0x1405294BC (_CmIsDevicePresent.c)
 */

char __fastcall PiPnpRtlServiceFilterCallback(void *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // edi
  __int64 v7; // r12
  PVOID v8; // r14
  char v9; // r15
  PCUNICODE_STRING v10; // rax
  int DeviceRegProp; // edi
  int *v12; // rax
  int v13; // ecx
  _DWORD *v14; // r12
  unsigned int v15; // eax
  int InstallerClassRegProp; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  const WCHAR *i; // r14
  __int64 v21; // rax
  PVOID PoolWithTag; // rdi
  void *v23; // rcx
  __int64 (__fastcall *v24)(PVOID, __int64, _QWORD, _QWORD); // rax
  void *v25; // rcx
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-89h] BYREF
  char NumberOfBytes_4; // [rsp+44h] [rbp-85h] BYREF
  int v28; // [rsp+48h] [rbp-81h] BYREF
  int v29; // [rsp+4Ch] [rbp-7Dh]
  unsigned int v30; // [rsp+50h] [rbp-79h]
  unsigned int v31; // [rsp+54h] [rbp-75h]
  void *v32; // [rsp+58h] [rbp-71h]
  __int64 v33; // [rsp+60h] [rbp-69h]
  _DWORD v34[2]; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v35[2]; // [rsp+70h] [rbp-59h] BYREF
  _DWORD *v36; // [rsp+78h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v38[76]; // [rsp+90h] [rbp-39h] BYREF
  __int16 v39; // [rsp+DCh] [rbp+13h]

  v4 = 0;
  v30 = a3;
  v6 = a3;
  v7 = a2;
  v33 = a2;
  v8 = a1;
  v32 = a1;
  v9 = 0;
  NumberOfBytes_4 = 0;
  NumberOfBytes = 0;
  if ( !*(_BYTE *)(a4 + 8) || (int)CmIsDevicePresent(a1, a2, &NumberOfBytes_4) >= 0 && NumberOfBytes_4 )
  {
    v10 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v10->Length >= 2u && *v10->Buffer )
    {
      while ( 1 )
      {
        NumberOfBytes = *(_DWORD *)(a4 + 24);
        DeviceRegProp = CmGetDeviceRegProp(
                          (_DWORD)v8,
                          v7,
                          0,
                          5,
                          (__int64)&v28,
                          *(_QWORD *)(a4 + 16),
                          (__int64)&NumberOfBytes,
                          0);
        if ( !DeviceRegProp && NumberOfBytes < 2 )
          goto LABEL_64;
        if ( DeviceRegProp != -1073741789 )
          goto LABEL_8;
        if ( NumberOfBytes < 2 )
        {
LABEL_64:
          DeviceRegProp = -1073741811;
          goto LABEL_11;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x47706E50u);
        if ( !PoolWithTag )
          break;
        v23 = *(void **)(a4 + 16);
        if ( v23 )
          ExFreePoolWithTag(v23, 0);
        *(_DWORD *)(a4 + 24) = NumberOfBytes;
        *(_QWORD *)(a4 + 16) = PoolWithTag;
      }
      DeviceRegProp = -1073741670;
LABEL_8:
      if ( DeviceRegProp
        || (*(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0,
            RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) < 0)
        || !RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
      {
LABEL_11:
        v12 = v34;
        v34[0] = 1;
        v36 = v34;
        v34[1] = 2;
        v31 = 0;
        v35[0] = 18;
        v35[1] = 19;
        while ( 1 )
        {
          v13 = *v12;
          v29 = v13;
          if ( v13 == 2 )
          {
            NumberOfBytes = 78;
            DeviceRegProp = CmGetDeviceRegProp(
                              (_DWORD)v8,
                              v7,
                              0,
                              9,
                              (__int64)&v28,
                              (__int64)v38,
                              (__int64)&NumberOfBytes,
                              0);
            if ( DeviceRegProp < 0 || v28 != 1 || NumberOfBytes < 2 )
              return v9;
            v13 = v29;
            v39 = 0;
          }
          v14 = v35;
          do
          {
            while ( 1 )
            {
              v15 = *(_DWORD *)(a4 + 24);
              NumberOfBytes = v15;
              if ( v13 == 1 )
              {
                InstallerClassRegProp = CmGetDeviceRegProp(
                                          (_DWORD)v8,
                                          v33,
                                          0,
                                          *v14,
                                          (__int64)&v28,
                                          *(_QWORD *)(a4 + 16),
                                          (__int64)&NumberOfBytes,
                                          0);
              }
              else
              {
                if ( v13 != 2 )
                  goto LABEL_21;
                InstallerClassRegProp = CmGetInstallerClassRegProp(
                                          (_DWORD)v8,
                                          (unsigned int)v38,
                                          0,
                                          *v14,
                                          (__int64)&v28,
                                          *(_QWORD *)(a4 + 16),
                                          (__int64)&NumberOfBytes);
              }
              DeviceRegProp = InstallerClassRegProp;
              v15 = NumberOfBytes;
LABEL_21:
              if ( !DeviceRegProp && v15 < 2 )
              {
LABEL_66:
                DeviceRegProp = -1073741811;
                goto LABEL_24;
              }
              if ( DeviceRegProp != -1073741789 )
                break;
              if ( v15 < 2 )
                goto LABEL_66;
              v8 = ExAllocatePoolWithTag(PagedPool, v15, 0x47706E50u);
              if ( !v8 )
              {
                DeviceRegProp = -1073741670;
                break;
              }
              v25 = *(void **)(a4 + 16);
              if ( v25 )
                ExFreePoolWithTag(v25, 0);
              *(_DWORD *)(a4 + 24) = NumberOfBytes;
              v13 = v29;
              *(_QWORD *)(a4 + 16) = v8;
              LODWORD(v8) = (_DWORD)v32;
            }
            if ( DeviceRegProp >= 0 && v28 == 7 )
            {
              v18 = *(_DWORD *)(a4 + 24);
              if ( v18 > 2 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v18 >> 1) - 2) = 0;
              v19 = *(_DWORD *)(a4 + 24);
              if ( v19 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v19 >> 1) - 4) = 0;
              for ( i = *(const WCHAR **)(a4 + 16); *i; i += v21 + 1 )
              {
                if ( RtlInitUnicodeStringEx(&DestinationString, i) >= 0
                  && RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                {
                  v9 = 1;
                  break;
                }
                v21 = -1LL;
                do
                  ++v21;
                while ( i[v21] );
              }
              if ( v9 )
              {
                v8 = v32;
                v7 = v33;
                goto LABEL_52;
              }
            }
LABEL_24:
            v13 = v29;
            ++v4;
            LODWORD(v8) = (_DWORD)v32;
            ++v14;
          }
          while ( v4 < 2 );
          LODWORD(v7) = v33;
          v4 = 0;
          v12 = v36 + 1;
          ++v31;
          ++v36;
          if ( v31 >= 2 )
            return v9;
        }
      }
      v9 = 1;
LABEL_52:
      v6 = v30;
    }
    else
    {
      v9 = 1;
    }
    v24 = *(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(a4 + 32);
    if ( v24 )
      return v24(v8, v7, v6, *(_QWORD *)(a4 + 40));
  }
  return v9;
}
