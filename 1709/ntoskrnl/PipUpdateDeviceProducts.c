/*
 * XREFs of PipUpdateDeviceProducts @ 0x140145D10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegCreateKey @ 0x140530B64 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCreateTree @ 0x140533240 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegEnumValue @ 0x14058469C (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405847D8 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegQueryValue @ 0x1405C45E0 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCloseKey @ 0x1405C4618 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1405C4630 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x1405C4668 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegDeleteValue @ 0x14077E370 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x14077E3A4 (_PnpCtxRegSetValue.c)
 */

void __fastcall PipUpdateDeviceProducts(PVOID P)
{
  unsigned int v1; // edi
  PVOID v2; // r14
  PVOID v3; // rbx
  void *v4; // r12
  PVOID v5; // r15
  unsigned __int8 CurrentIrql; // dl
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // r13d
  unsigned int i; // esi
  unsigned int v12; // esi
  int v13; // r14d
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // eax
  int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-49h] BYREF
  __int64 v21; // [rsp+50h] [rbp-41h] BYREF
  int v22; // [rsp+58h] [rbp-39h] BYREF
  __int64 v23; // [rsp+60h] [rbp-31h] BYREF
  PVOID v24; // [rsp+68h] [rbp-29h]
  __int64 v25; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v26; // [rsp+78h] [rbp-19h] BYREF
  int v27; // [rsp+7Ch] [rbp-15h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-11h] BYREF
  int v29; // [rsp+84h] [rbp-Dh] BYREF
  LARGE_INTEGER v30; // [rsp+88h] [rbp-9h] BYREF
  __int64 v31; // [rsp+90h] [rbp-1h] BYREF
  int v32; // [rsp+98h] [rbp+7h] BYREF
  int v33; // [rsp+9Ch] [rbp+Bh] BYREF
  int v34; // [rsp+A0h] [rbp+Fh] BYREF
  PVOID PoolWithTag; // [rsp+A8h] [rbp+17h]
  wchar_t Str1[8]; // [rsp+B0h] [rbp+1Fh] BYREF

  v1 = 0;
  v24 = P;
  v25 = 0LL;
  v2 = P;
  v21 = 0LL;
  v23 = 0LL;
  v31 = 0LL;
  v27 = 0;
  v3 = 0LL;
  v29 = 0;
  v26 = 0;
  v4 = 0LL;
  v28 = 0;
  v5 = 0LL;
  PoolWithTag = 0LL;
  if ( (unsigned int)PnpCtxRegOpenKey(
                       0,
                       -2147483646,
                       (unsigned int)L"System\\HardwareConfig\\Current\\ProductIds",
                       0,
                       131097,
                       (__int64)&v31) != -1073741772
    && !(unsigned int)PnpCtxRegCreateTree(
                        0,
                        -2147483646,
                        (unsigned int)L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Update\\TargetingInfo\\DynamicInstalled",
                        0,
                        131103,
                        0LL,
                        (__int64)&v25,
                        0LL) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = KeBootTimeBias;
    v30 = KeBootTime;
    __writecr8(CurrentIrql);
    v30.QuadPart -= v7;
    if ( !(unsigned int)PnpCtxRegQueryInfoKey(v7, v25, (unsigned int)&v26, (unsigned int)&v27, 0LL, 0LL) )
    {
      v9 = v26;
      if ( v26 )
      {
        v10 = v27 + 1;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v27 + 1), 0x6E697050u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_30:
          v2 = v24;
          goto LABEL_31;
        }
        for ( i = 0; i < v9; v1 = 0 )
        {
          v32 = v10;
          if ( v21 )
          {
            PnpCtxRegCloseKey();
            v21 = 0LL;
          }
          if ( (int)PnpCtxRegEnumKey(v8, v25, i, (_DWORD)v4, (__int64)&v32) < 0 )
            goto LABEL_16;
          if ( (int)PnpCtxRegOpenKey(0, v25, (_DWORD)v4, 0, 131103, (__int64)&v21) < 0 )
            goto LABEL_16;
          LODWORD(NumberOfBytes) = 14;
          if ( (int)PnpCtxRegQueryValue(v8, v21, L"Source", &v22, Str1, &NumberOfBytes) < 0 )
            goto LABEL_16;
          if ( v22 != 1 )
            goto LABEL_16;
          if ( (_DWORD)NumberOfBytes != 14 )
            goto LABEL_16;
          if ( wcsicmp(Str1, L"SMBIOS") )
            goto LABEL_16;
          LODWORD(NumberOfBytes) = 0;
          if ( (unsigned int)PnpCtxRegQueryValue(v8, v31, v4, 0LL, 0LL, &NumberOfBytes) != -1073741772 )
            goto LABEL_16;
          if ( v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          LODWORD(NumberOfBytes) = 0;
          v16 = PnpCtxRegQueryValue(v8, v21, L"Version", &v22, v3, &NumberOfBytes);
          if ( v16 == -1073741789 )
          {
            v17 = NumberOfBytes;
            v3 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E697050u);
            if ( !v3 )
              goto LABEL_59;
            v16 = PnpCtxRegQueryValue(v8, v21, L"Version", &v22, v3, &NumberOfBytes);
          }
          if ( v16 != -1073741772 )
          {
            v17 = NumberOfBytes;
            if ( (v16 < 0 || v22 != 1 || (unsigned int)NumberOfBytes < 2) && v3 )
            {
              ExFreePoolWithTag(v3, 0);
              v3 = 0LL;
            }
LABEL_59:
            PnpCtxRegSetValue(v8, v21, L"DeactivationTime", 3LL, &v30, 8);
            if ( v3 )
              PnpCtxRegSetValue(v18, v21, L"DeactivationVersion", 1LL, v3, v17);
            PnpCtxRegDeleteValue(v18, v21, L"Version");
          }
LABEL_16:
          ++i;
        }
      }
      if ( !(unsigned int)PnpCtxRegQueryInfoKey(v8, v31, 0, 0, (__int64)&v28, (__int64)&v29) )
      {
        v12 = v28;
        if ( v28 )
        {
          v13 = v29 + 1;
          v5 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v29 + 1), 0x6E697050u);
          if ( v5 )
          {
            if ( v12 )
            {
              do
              {
                v33 = v13;
                if ( v23 )
                {
                  PnpCtxRegCloseKey();
                  v23 = 0LL;
                }
                if ( (int)PnpCtxRegEnumValue(v14, v31, v1, (_DWORD)v5, (__int64)&v33, 0LL, 0LL, 0LL) >= 0
                  && (int)PnpCtxRegCreateKey(0, v25, (_DWORD)v5, v15, 131078, 0LL, (__int64)&v23, (__int64)&v34) >= 0 )
                {
                  if ( v34 == 1 )
                    PnpCtxRegSetValue(v14, v23, L"CreationTime", 3LL, &v30, 8);
                  LODWORD(NumberOfBytes) = 0;
                  if ( (unsigned int)PnpCtxRegQueryValue(v14, v23, L"Version", 0LL, 0LL, &NumberOfBytes) == -1073741772
                    && (int)PnpCtxRegSetValue(v14, v23, L"Version", 1LL, L"0.0.0.0", 16) >= 0 )
                  {
                    PnpCtxRegSetValue(v14, v23, L"ActivationTime", 3LL, &v30, 8);
                    PnpCtxRegSetValue(v19, v23, L"Source", 1LL, L"SMBIOS", 14);
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
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( v23 )
    PnpCtxRegCloseKey();
  if ( v31 )
    PnpCtxRegCloseKey();
  if ( v21 )
    PnpCtxRegCloseKey();
  if ( v25 )
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
