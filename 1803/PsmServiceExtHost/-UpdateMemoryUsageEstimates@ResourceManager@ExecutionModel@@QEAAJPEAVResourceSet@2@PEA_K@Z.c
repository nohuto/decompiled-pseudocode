/*
 * XREFs of ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18004F56C (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180001B28 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180001BF0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x1800138F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z @ 0x18001E144 (-ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x18001F654 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DCD4 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z @ 0x18004E900 (-RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18004F7E4 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?RmpSystemQueryActivityHostPeakPrivateCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180061A50 (-RmpSystemQueryActivityHostPeakPrivateCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(
        char ***this,
        const unsigned __int16 **a2,
        unsigned __int64 *a3)
{
  int ResourceSetInfo; // eax
  ExecutionModel::ResourceManager *v7; // rcx
  _QWORD *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r13
  unsigned __int16 *v12; // r14
  LSTATUS v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  const wchar_t *v20; // rdx
  LSTATUS v21; // eax
  char v22; // al
  __int64 v23; // rax
  double v24; // xmm1_8
  double v25; // xmm0_8
  double v26; // xmm1_8
  unsigned __int64 v27; // rcx
  double v28; // xmm0_8
  LSTATUS v29; // eax
  DWORD cbData; // [rsp+50h] [rbp-B0h] BYREF
  DWORD Type; // [rsp+54h] [rbp-ACh] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  BYTE Data[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+78h] [rbp-88h] BYREF
  _WORD v37[8]; // [rsp+88h] [rbp-78h] BYREF
  void *Block; // [rsp+98h] [rbp-68h] BYREF
  BYTE v39[8]; // [rsp+A0h] [rbp-60h] BYREF
  BYTE v40[8]; // [rsp+A8h] [rbp-58h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v42[8]; // [rsp+C0h] [rbp-40h] BYREF
  char ***v43; // [rsp+D0h] [rbp-30h]
  wchar_t Destination[232]; // [rsp+E0h] [rbp-20h] BYREF

  v43 = this;
  v37[0] = 0;
  lpSubKey[0] = v37;
  lpSubKey[1] = v37;
  lpValueName[0] = v42;
  lpValueName[1] = v42;
  v42[0] = 0;
  phkResult = 0LL;
  hKey = 0LL;
  if ( a3 )
    *a3 = 0LL;
  Block = 0LL;
  ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                      (ExecutionModel::ResourceSet *)a2,
                      (struct ExecutionModel::_ResourceSetInfo **)&Block);
  v8 = Block;
  v9 = ResourceSetInfo;
  if ( ResourceSetInfo >= 0 )
  {
    v10 = *(int *)Block;
    if ( !ExecutionModel::ResourceManager::ResourceSetUsesEstimation(
            v7,
            (const struct ExecutionModel::_ResourceSetInfo *)Block,
            a2[4]) )
      goto LABEL_5;
    if ( !v8[14] )
      goto LABEL_5;
    v12 = (unsigned __int16 *)a2[180];
    if ( RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)v12, 2u) > 1 )
      goto LABEL_5;
    if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
            lpSubKey,
            this[2]) )
      goto LABEL_25;
    if ( hKey )
      RegCloseKey(hKey);
    hKey = 0LL;
    v13 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
    if ( v13 )
    {
      if ( v13 > 0 )
        v9 = (unsigned __int16)v13 | 0x80070000;
      else
        v9 = v13;
      goto LABEL_6;
    }
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"EstimationEnabled", 0LL, &Type, Data, &cbData) && Type == 4 && cbData == 4 )
    {
      v14 = *(_DWORD *)Data;
      if ( *(_DWORD *)Data == 1 )
      {
LABEL_34:
        if ( v14 )
        {
          v15 = *((_QWORD *)v12 + 170);
          if ( (int)RmpSystemQueryActivityHostPeakPrivateCommit((struct _RM_ACTIVITY_HOST *)v12, &v34) >= 0
            && v15 <= v34 )
          {
            v15 = v34;
          }
          if ( (int)RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)v12, 0LL, 0LL, &v34) >= 0 && v15 <= v34 )
            v15 = v34;
          v16 = v8[8];
          if ( v15 <= v16 )
            v16 = v15;
          if ( v16 )
          {
            RmpGetEstimationKeyFromPsmKey((wchar_t *)a2[4], Destination);
            if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                     lpSubKey,
                                     L"\\",
                                     1LL) )
              goto LABEL_25;
            v17 = -1LL;
            do
              ++v17;
            while ( Destination[v17] );
            if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                     lpSubKey,
                                     Destination,
                                     v17)
              || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                     lpSubKey,
                                     L"\\",
                                     1LL) )
            {
              goto LABEL_25;
            }
            v18 = *((_DWORD *)a2 + 34);
            switch ( v18 )
            {
              case 2:
                v19 = 5LL;
                v20 = L"Mixed";
                break;
              case 4:
                v19 = 4LL;
                v20 = L"Pure";
                break;
              case 8:
                v19 = 6LL;
                v20 = L"System";
                break;
              default:
                __fastfail(0xC000000D);
            }
            if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                     lpSubKey,
                                     v20,
                                     v19) )
              goto LABEL_25;
            if ( phkResult )
              RegCloseKey(phkResult);
            phkResult = 0LL;
            v21 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, 0LL);
            if ( v21 )
            {
              if ( v21 > 0 )
                v9 = (unsigned __int16)v21 | 0x80070000;
              else
                v9 = v21;
              goto LABEL_6;
            }
            if ( (unsigned int)(v10 - 5) > 4 )
            {
              v22 = utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                      lpValueName,
                      (char **)L"Generic",
                      7uLL);
LABEL_67:
              if ( v22 )
              {
                cbData = 8;
                if ( !RegQueryValueExW(phkResult, lpValueName[0], 0LL, &Type, v39, &cbData) && Type == 11 && cbData == 8 )
                {
                  v23 = *(_QWORD *)v39;
                }
                else
                {
                  v23 = v8[14];
                  *(_QWORD *)v39 = v23;
                }
                v24 = (double)(int)v16;
                if ( v16 < 0 )
                  v24 = v24 + 1.844674407370955e19;
                v25 = (1.0 - *((double *)v43 + 3)) * v24;
                v26 = (double)(int)v23;
                if ( v23 < 0 )
                  v26 = v26 + 1.844674407370955e19;
                v27 = 0LL;
                v28 = v25 + v26 * *((double *)v43 + 3);
                if ( v28 >= 9.223372036854776e18 )
                {
                  v28 = v28 - 9.223372036854776e18;
                  if ( v28 < 9.223372036854776e18 )
                    v27 = 0x8000000000000000uLL;
                }
                *(_QWORD *)v40 = (v27 + 4095 + (unsigned int)(int)v28) & 0xFFFFFFFFFFFFF000uLL;
                v29 = RegSetValueExW(phkResult, lpValueName[0], 0, 0xBu, v40, 8u);
                if ( v29 )
                {
                  if ( v29 > 0 )
                    v9 = (unsigned __int16)v29 | 0x80070000;
                  else
                    v9 = v29;
                }
                else if ( a3 )
                {
                  *a3 = *(_QWORD *)v40;
                }
                goto LABEL_6;
              }
LABEL_25:
              v9 = -2147024882;
              goto LABEL_6;
            }
            if ( (unsigned int)v10 <= 0x38 )
            {
              v22 = utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                      lpValueName,
                      (char **)(&ExecutionModel::ResourceSetTypeName)[v10]);
              goto LABEL_67;
            }
          }
        }
LABEL_5:
        v9 = 0;
        goto LABEL_6;
      }
      if ( !*(_DWORD *)Data )
        goto LABEL_5;
    }
    v14 = 1;
    *(_DWORD *)Data = 1;
    goto LABEL_34;
  }
LABEL_6:
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( v8 )
    operator delete(v8);
  if ( lpValueName[0] != v42 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v37 )
    operator delete((void *)lpSubKey[0]);
  return v9;
}
