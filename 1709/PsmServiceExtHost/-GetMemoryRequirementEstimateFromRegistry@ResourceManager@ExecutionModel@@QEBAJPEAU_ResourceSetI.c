/*
 * XREFs of ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18000F7C8
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x1800021B8 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180002274 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z @ 0x18000F8C0 (-ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z @ 0x180031770 (-RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180032910 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180032930 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        wchar_t *a3,
        int a4,
        unsigned __int64 *a5)
{
  __int64 v6; // rsi
  unsigned int v9; // ebx
  __int64 v11; // r8
  const wchar_t *v12; // rdx
  __int64 v13; // r8
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v18[8]; // [rsp+50h] [rbp-B0h] BYREF
  DWORD Type; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+68h] [rbp-98h] BYREF
  _WORD v21[8]; // [rsp+78h] [rbp-88h] BYREF
  BYTE Data[8]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Destination[232]; // [rsp+90h] [rbp-70h] BYREF

  lpSubKey[0] = v18;
  v18[0] = 0;
  lpSubKey[1] = v18;
  *a5 = 0LL;
  v6 = *(int *)a2;
  lpValueName[0] = v21;
  v21[0] = 0;
  lpValueName[1] = v21;
  v9 = 0;
  hKey = 0LL;
  if ( ExecutionModel::ResourceManager::ResourceSetUsesEstimation(this, a2, a3) )
  {
    RmpGetEstimationKeyFromPsmKey(a3, Destination);
    if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
            (__int64)lpSubKey,
            *((_WORD **)this + 2)) )
      goto LABEL_31;
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\",
                             1LL) )
      goto LABEL_31;
    v11 = -1LL;
    do
      ++v11;
    while ( Destination[v11] );
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             Destination,
                             v11)
      || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\",
                             1LL) )
    {
      goto LABEL_31;
    }
    if ( a4 )
    {
      switch ( a4 )
      {
        case 2:
          v13 = 5LL;
          v12 = L"Mixed";
          break;
        case 4:
          v13 = 4LL;
          v12 = L"Pure";
          break;
        case 8:
          v12 = L"System";
LABEL_22:
          v13 = 6LL;
          break;
        default:
          __fastfail(0x8000FFFF);
      }
      if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                              lpSubKey,
                              v12,
                              v13) )
      {
        hKey = 0LL;
        if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, lpSubKey[0], &hKey) )
          goto LABEL_2;
        if ( (unsigned int)(v6 - 5) > 4
           ? utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
               (__int64)lpValueName,
               L"Generic",
               7uLL)
           : utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
               (__int64)lpValueName,
               (_WORD *)(&ExecutionModel::ResourceSetTypeName)[v6]) )
        {
          cbData = 8;
          if ( RegQueryValueExW(hKey, lpValueName[0], 0LL, &Type, Data, &cbData) )
            goto LABEL_2;
          if ( Type == 11 && cbData == 8 )
          {
            *a5 = *(_QWORD *)Data;
            goto LABEL_2;
          }
        }
      }
LABEL_31:
      v9 = -2147418113;
      goto LABEL_2;
    }
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             (&ExecutionModel::ResourceSetTypeName)[v6])
      || !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\",
                             1LL) )
    {
      goto LABEL_31;
    }
    v12 = L"Legacy";
    goto LABEL_22;
  }
LABEL_2:
  if ( hKey )
    RegCloseKey(hKey);
  if ( lpValueName[0] != v21 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v18 )
    operator delete((void *)lpSubKey[0]);
  return v9;
}
