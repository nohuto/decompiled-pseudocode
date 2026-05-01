/*
 * XREFs of ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000DE10
 * Callers:
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000E7D0 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x1800021B8 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180002274 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180006840 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007450 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x1800101AC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180010A48 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@QEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z @ 0x180031770 (-RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z.c)
 *     ?HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x180032028 (-HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180032910 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180032930 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?RmpSystemQueryActivityHostPeakPrivateCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180041190 (-RmpSystemQueryActivityHostPeakPrivateCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(
        ExecutionModel::ResourceManager *this,
        wchar_t **a2,
        unsigned __int64 *a3)
{
  int ResourceSetInfo; // eax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  wchar_t *v9; // r9
  __int64 v10; // r15
  const wchar_t *v12; // r9
  wchar_t *v13; // r12
  LSTATUS v14; // eax
  void *v15; // r12
  __int64 v16; // r8
  int v17; // eax
  const wchar_t *v18; // rdx
  __int64 v19; // r8
  LSTATUS v20; // eax
  __int64 Amount; // rax
  double v22; // xmm3_8
  double v23; // xmm1_8
  double v24; // xmm0_8
  double v25; // xmm1_8
  unsigned __int64 v26; // rcx
  double v27; // xmm0_8
  LSTATUS v28; // eax
  DWORD cbData; // [rsp+50h] [rbp-B0h] BYREF
  DWORD Type; // [rsp+54h] [rbp-ACh] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  void *Block; // [rsp+60h] [rbp-A0h] BYREF
  BYTE Data[8]; // [rsp+68h] [rbp-98h] BYREF
  HKEY phkResult; // [rsp+70h] [rbp-90h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+78h] [rbp-88h] BYREF
  _WORD v36[8]; // [rsp+88h] [rbp-78h] BYREF
  struct _RM_ACTIVITY_HOST *v37; // [rsp+98h] [rbp-68h]
  BYTE v38[8]; // [rsp+A0h] [rbp-60h] BYREF
  BYTE v39[8]; // [rsp+A8h] [rbp-58h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v41[8]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Destination[232]; // [rsp+D0h] [rbp-30h] BYREF

  lpSubKey[0] = v36;
  lpSubKey[1] = v36;
  lpValueName[0] = v41;
  lpValueName[1] = v41;
  v36[0] = 0;
  v41[0] = 0;
  hKey = 0LL;
  phkResult = 0LL;
  if ( a3 )
    *a3 = 0LL;
  Block = 0LL;
  ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(
                      (ExecutionModel::ResourceSet *)a2,
                      (struct ExecutionModel::_ResourceSetInfo **)&Block);
  v7 = Block;
  v8 = ResourceSetInfo;
  if ( ResourceSetInfo >= 0 )
  {
    v9 = a2[4];
    v10 = *(int *)Block;
    if ( !v9
      || !*v9
      || (*((_DWORD *)Block + 95) & 0x40000) == 0
      || !*((_QWORD *)Block + 15)
      || !(unsigned __int8)ExecutionModel::ResourceSetType::HasMemoryUsageHistory((unsigned int)v10)
      || wcsnlen(v12, 0xE7uLL) == 231
      || !ExecutionModel::_ResourceSetInfo::GetAmount(v7, 1LL) )
    {
      v8 = 0;
      goto LABEL_8;
    }
    v13 = a2[180];
    v37 = (struct _RM_ACTIVITY_HOST *)v13;
    if ( !v13 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    if ( (unsigned int)RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)v13, 2) > 1 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
            (__int64)lpSubKey,
            *((_WORD **)this + 2)) )
    {
      v8 = -2147024882;
      goto LABEL_8;
    }
    if ( phkResult )
      RegCloseKey(phkResult);
    phkResult = 0LL;
    v14 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, 0LL);
    if ( v14 )
    {
      if ( v14 > 0 )
        v8 = (unsigned __int16)v14 | 0x80070000;
      else
        v8 = v14;
      goto LABEL_8;
    }
    cbData = 4;
    if ( !RegQueryValueExW(phkResult, L"EstimationEnabled", 0LL, &Type, Data, &cbData) && Type == 4 && cbData == 4 )
    {
      if ( *(_DWORD *)Data == 1 )
      {
LABEL_43:
        v15 = (void *)*((_QWORD *)v13 + 152);
        if ( (int)RmpSystemQueryActivityHostPeakPrivateCommit(v37, (unsigned __int64 *)&Block) >= 0 && v15 <= Block )
          v15 = Block;
        if ( (int)RmpActivityHostQueryCommit(v37, 0LL, 0LL, (unsigned __int64 *)&Block) >= 0 && v15 <= Block )
          v15 = Block;
        if ( (unsigned __int64)v15 > v7[9] )
          v15 = (void *)v7[9];
        if ( !v15 )
        {
          v8 = 0;
          goto LABEL_8;
        }
        RmpGetEstimationKeyFromPsmKey(a2[4], Destination);
        if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                 lpSubKey,
                                 L"\\",
                                 1LL) )
        {
          v8 = -2147024882;
          goto LABEL_8;
        }
        v16 = -1LL;
        do
          ++v16;
        while ( Destination[v16] );
        if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                 lpSubKey,
                                 Destination,
                                 v16) )
        {
          v8 = -2147024882;
          goto LABEL_8;
        }
        if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                 lpSubKey,
                                 L"\\",
                                 1LL) )
        {
          v8 = -2147024882;
          goto LABEL_8;
        }
        v17 = *((_DWORD *)a2 + 34);
        if ( v17 )
        {
          if ( v17 == 2 )
          {
            v19 = 5LL;
            v18 = L"Mixed";
            goto LABEL_77;
          }
          if ( v17 == 4 )
          {
            v19 = 4LL;
            v18 = L"Pure";
            goto LABEL_77;
          }
          if ( v17 != 8 )
            __fastfail(0xC000000D);
          v18 = L"System";
        }
        else
        {
          if ( (unsigned int)v10 > 0x38 )
          {
            v8 = 0;
            goto LABEL_8;
          }
          if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                   lpSubKey,
                                   (&ExecutionModel::ResourceSetTypeName)[v10]) )
          {
            v8 = -2147024882;
            goto LABEL_8;
          }
          if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                   lpSubKey,
                                   L"\\",
                                   1LL) )
          {
            v8 = -2147024882;
            goto LABEL_8;
          }
          v18 = L"Legacy";
        }
        v19 = 6LL;
LABEL_77:
        if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                                lpSubKey,
                                v18,
                                v19) )
        {
          if ( hKey )
            RegCloseKey(hKey);
          hKey = 0LL;
          v20 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
          if ( v20 )
          {
            if ( v20 > 0 )
              v8 = (unsigned __int16)v20 | 0x80070000;
            else
              v8 = v20;
            goto LABEL_8;
          }
          if ( (unsigned int)(v10 - 5) <= 4 )
          {
            if ( (unsigned int)v10 > 0x38 )
            {
              v8 = 0;
              goto LABEL_8;
            }
            if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                    (__int64)lpValueName,
                    (_WORD *)(&ExecutionModel::ResourceSetTypeName)[v10]) )
              goto LABEL_89;
            goto LABEL_91;
          }
          if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                 (__int64)lpValueName,
                 L"Generic",
                 7uLL) )
          {
LABEL_91:
            cbData = 8;
            if ( !RegQueryValueExW(hKey, lpValueName[0], 0LL, &Type, v38, &cbData) && Type == 11 && cbData == 8 )
            {
              Amount = *(_QWORD *)v38;
            }
            else
            {
              Amount = ExecutionModel::_ResourceSetInfo::GetAmount(v7, 1LL);
              *(_QWORD *)v38 = Amount;
            }
            v22 = *((double *)this + 9);
            v23 = (double)(int)v15;
            if ( (__int64)v15 < 0 )
              v23 = v23 + 1.844674407370955e19;
            v24 = (1.0 - v22) * v23;
            v25 = (double)(int)Amount;
            if ( Amount < 0 )
              v25 = v25 + 1.844674407370955e19;
            v26 = 0LL;
            v27 = v24 + v25 * v22;
            if ( v27 >= 9.223372036854776e18 )
            {
              v27 = v27 - 9.223372036854776e18;
              if ( v27 < 9.223372036854776e18 )
                v26 = 0x8000000000000000uLL;
            }
            *(_QWORD *)v39 = (v26 + 4095 + (unsigned int)(int)v27) & 0xFFFFFFFFFFFFF000uLL;
            v28 = RegSetValueExW(hKey, lpValueName[0], 0, 0xBu, v39, 8u);
            if ( v28 )
            {
              if ( v28 > 0 )
                v8 = (unsigned __int16)v28 | 0x80070000;
              else
                v8 = v28;
            }
            else if ( a3 )
            {
              *a3 = *(_QWORD *)v39;
            }
            goto LABEL_8;
          }
        }
LABEL_89:
        v8 = -2147024882;
        goto LABEL_8;
      }
      if ( !*(_DWORD *)Data )
      {
        v8 = 0;
        goto LABEL_8;
      }
    }
    *(_DWORD *)Data = 1;
    goto LABEL_43;
  }
LABEL_8:
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  if ( v7 )
    operator delete(v7);
  if ( lpValueName[0] != v41 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v36 )
    operator delete((void *)lpSubKey[0]);
  return v8;
}
