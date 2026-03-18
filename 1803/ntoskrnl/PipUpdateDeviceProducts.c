/*
 * XREFs of PipUpdateDeviceProducts @ 0x140179180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x140586F54 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x1405D3598 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegEnumValue @ 0x1405D7F64 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405D7FB4 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegQueryValue @ 0x140634274 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCloseKey @ 0x1406342AC (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1406342C4 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x140634300 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1407E6D8C (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x1407E6DC0 (_PnpCtxRegSetValue.c)
 */

void __fastcall PipUpdateDeviceProducts(PVOID P)
{
  unsigned int v1; // edi
  PVOID v2; // r14
  PVOID v3; // rbx
  void *v4; // r15
  PVOID v5; // r12
  unsigned __int8 CurrentIrql; // dl
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // r13d
  unsigned int i; // esi
  unsigned int v12; // esi
  int v13; // r14d
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rcx
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-59h] BYREF
  __int64 v20; // [rsp+50h] [rbp-51h] BYREF
  int v21; // [rsp+58h] [rbp-49h] BYREF
  __int64 v22; // [rsp+60h] [rbp-41h] BYREF
  PVOID v23; // [rsp+68h] [rbp-39h]
  __int64 v24; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v25; // [rsp+78h] [rbp-29h] BYREF
  int v26; // [rsp+7Ch] [rbp-25h] BYREF
  unsigned int v27; // [rsp+80h] [rbp-21h] BYREF
  int v28; // [rsp+84h] [rbp-1Dh] BYREF
  LARGE_INTEGER v29; // [rsp+88h] [rbp-19h] BYREF
  __int64 v30; // [rsp+90h] [rbp-11h] BYREF
  int v31; // [rsp+98h] [rbp-9h] BYREF
  int v32; // [rsp+9Ch] [rbp-5h] BYREF
  int v33; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+7h] BYREF
  PVOID PoolWithTag; // [rsp+B0h] [rbp+Fh]
  wchar_t Str1[8]; // [rsp+B8h] [rbp+17h] BYREF

  v1 = 0;
  v23 = P;
  v2 = P;
  v24 = 0LL;
  v3 = 0LL;
  v20 = 0LL;
  v34 = 0LL;
  v22 = 0LL;
  v4 = 0LL;
  v30 = 0LL;
  v5 = 0LL;
  v26 = 0;
  v28 = 0;
  v25 = 0;
  v27 = 0;
  PoolWithTag = 0LL;
  if ( (int)PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 15LL, &v34) >= 0
    && (unsigned int)PnpCtxRegOpenKey(0, v34, (unsigned int)L"Current\\ProductIds", 0, 131097, (__int64)&v30) != -1073741772
    && !(unsigned int)PnpCtxRegCreateTree(
                        0,
                        -2147483646,
                        (unsigned int)L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Update\\TargetingInfo\\DynamicInstalled",
                        0,
                        131103,
                        0LL,
                        (__int64)&v24,
                        0LL) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = KeBootTimeBias;
    v29 = KeBootTime;
    __writecr8(CurrentIrql);
    v29.QuadPart -= v7;
    if ( !(unsigned int)PnpCtxRegQueryInfoKey(v7, v24, (unsigned int)&v25, (unsigned int)&v26, 0LL, 0LL, 0LL) )
    {
      v9 = v25;
      if ( v25 )
      {
        v10 = v26 + 1;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v26 + 1), 0x6E697050u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_31:
          v2 = v23;
          goto LABEL_32;
        }
        for ( i = 0; i < v9; v1 = 0 )
        {
          v31 = v10;
          if ( v20 )
          {
            PnpCtxRegCloseKey();
            v20 = 0LL;
          }
          if ( (int)PnpCtxRegEnumKey(v8, v24, i, (_DWORD)v4, (__int64)&v31) < 0 )
            goto LABEL_17;
          if ( (int)PnpCtxRegOpenKey(0, v24, (_DWORD)v4, 0, 131103, (__int64)&v20) < 0 )
            goto LABEL_17;
          LODWORD(NumberOfBytes) = 14;
          if ( (int)PnpCtxRegQueryValue(v8, v20, L"Source", &v21, Str1, &NumberOfBytes) < 0 )
            goto LABEL_17;
          if ( v21 != 1 )
            goto LABEL_17;
          if ( (_DWORD)NumberOfBytes != 14 )
            goto LABEL_17;
          if ( wcsicmp(Str1, L"SMBIOS") )
            goto LABEL_17;
          LODWORD(NumberOfBytes) = 0;
          if ( (unsigned int)PnpCtxRegQueryValue(v8, v30, v4, 0LL, 0LL, &NumberOfBytes) != -1073741772 )
            goto LABEL_17;
          if ( v3 )
            ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          LODWORD(NumberOfBytes) = 0;
          v15 = PnpCtxRegQueryValue(v8, v20, L"Version", &v21, 0LL, &NumberOfBytes);
          if ( v15 == -1073741789 )
          {
            v16 = NumberOfBytes;
            v3 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E697050u);
            if ( !v3 )
              goto LABEL_60;
            v15 = PnpCtxRegQueryValue(v8, v20, L"Version", &v21, v3, &NumberOfBytes);
          }
          if ( v15 != -1073741772 )
          {
            v16 = NumberOfBytes;
            if ( (v15 < 0 || v21 != 1 || (unsigned int)NumberOfBytes < 2) && v3 )
            {
              ExFreePoolWithTag(v3, 0);
              v3 = 0LL;
            }
LABEL_60:
            PnpCtxRegSetValue(v8, v20, L"DeactivationTime", 3LL, &v29, 8);
            if ( v3 )
              PnpCtxRegSetValue(v17, v20, L"DeactivationVersion", 1LL, v3, v16);
            PnpCtxRegDeleteValue(v17, v20, L"Version");
          }
LABEL_17:
          ++i;
        }
      }
      if ( !(unsigned int)PnpCtxRegQueryInfoKey(v8, v30, 0, 0, (__int64)&v27, (__int64)&v28, 0LL) )
      {
        v12 = v27;
        if ( v27 )
        {
          v13 = v28 + 1;
          v5 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v28 + 1), 0x6E697050u);
          if ( v5 )
          {
            if ( v12 )
            {
              do
              {
                v32 = v13;
                if ( v22 )
                {
                  PnpCtxRegCloseKey();
                  v22 = 0LL;
                }
                if ( (int)PnpCtxRegEnumValue(v14, v30, v1, (_DWORD)v5, (__int64)&v32, 0LL, 0LL, 0LL) >= 0
                  && (int)PnpCtxRegCreateKey(0, v24, (_DWORD)v5, 0, 131078, 0LL, (__int64)&v22, (__int64)&v33) >= 0 )
                {
                  if ( v33 == 1 )
                    PnpCtxRegSetValue(v14, v22, L"CreationTime", 3LL, &v29, 8);
                  LODWORD(NumberOfBytes) = 0;
                  if ( (unsigned int)PnpCtxRegQueryValue(v14, v22, L"Version", 0LL, 0LL, &NumberOfBytes) == -1073741772
                    && (int)PnpCtxRegSetValue(v14, v22, L"Version", 1LL, L"0.0.0.0", 16) >= 0 )
                  {
                    PnpCtxRegSetValue(v14, v22, L"ActivationTime", 3LL, &v29, 8);
                    PnpCtxRegSetValue(v18, v22, L"Source", 1LL, L"SMBIOS", 14);
                  }
                }
                ++v1;
              }
              while ( v1 < v12 );
              v4 = PoolWithTag;
            }
          }
        }
      }
      goto LABEL_31;
    }
  }
LABEL_32:
  if ( v22 )
    PnpCtxRegCloseKey();
  if ( v30 )
    PnpCtxRegCloseKey();
  if ( v20 )
    PnpCtxRegCloseKey();
  if ( v24 )
    PnpCtxRegCloseKey();
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
