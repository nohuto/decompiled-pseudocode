/*
 * XREFs of ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18001E048
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180001B28 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180001BF0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z @ 0x18004E900 (-RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z.c)
 *     ?HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x18004EE2C (-HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18004F7E4 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetMemoryRequirementEstimateFromRegistry(
        char ***this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        wchar_t *a3,
        int a4,
        unsigned __int64 *a5)
{
  __int64 v7; // r14
  unsigned int v9; // ebx
  __int64 v11; // r8
  __int64 v12; // r8
  const wchar_t *v13; // rdx
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  DWORD Type; // [rsp+40h] [rbp-C0h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v19[8]; // [rsp+58h] [rbp-A8h] BYREF
  LPCWSTR lpValueName[2]; // [rsp+68h] [rbp-98h] BYREF
  _WORD v21[8]; // [rsp+78h] [rbp-88h] BYREF
  BYTE Data[8]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Destination[232]; // [rsp+90h] [rbp-70h] BYREF

  lpSubKey[0] = v19;
  lpSubKey[1] = v19;
  lpValueName[0] = v21;
  *a5 = 0LL;
  v7 = *(int *)a2;
  lpValueName[1] = v21;
  v9 = 0;
  v19[0] = 0;
  v21[0] = 0;
  hKey = 0LL;
  if ( a3
    && *a3
    && (*((_DWORD *)a2 + 93) & 0x40000) != 0
    && *((_QWORD *)a2 + 14)
    && (unsigned __int8)ExecutionModel::ResourceSetType::HasMemoryUsageHistory((unsigned int)v7)
    && wcsnlen(a3, 0xE7uLL) != 231 )
  {
    RmpGetEstimationKeyFromPsmKey(a3, Destination);
    if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
            lpSubKey,
            this[2]) )
      goto LABEL_24;
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             L"\\",
                             1LL) )
      goto LABEL_24;
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
      goto LABEL_24;
    }
    switch ( a4 )
    {
      case 2:
        v12 = 5LL;
        v13 = L"Mixed";
        break;
      case 4:
        v12 = 4LL;
        v13 = L"Pure";
        break;
      case 8:
        v12 = 6LL;
        v13 = L"System";
        break;
      default:
        __fastfail(0x8000FFFF);
    }
    if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
                             lpSubKey,
                             v13,
                             v12) )
      goto LABEL_24;
    hKey = 0LL;
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, lpSubKey[0], &hKey) )
      goto LABEL_4;
    if ( !((unsigned int)(v7 - 5) > 4
         ? utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
             lpValueName,
             (char **)L"Generic",
             7uLL)
         : utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
             lpValueName,
             (char **)(&ExecutionModel::ResourceSetTypeName)[v7])) )
      goto LABEL_24;
    cbData = 8;
    if ( RegQueryValueExW(hKey, lpValueName[0], 0LL, &Type, Data, &cbData) )
      goto LABEL_4;
    if ( Type != 11 || cbData != 8 )
    {
LABEL_24:
      v9 = -2147418113;
      goto LABEL_4;
    }
    *a5 = *(_QWORD *)Data;
  }
LABEL_4:
  if ( hKey )
    RegCloseKey(hKey);
  if ( lpValueName[0] != v21 )
    operator delete((void *)lpValueName[0]);
  if ( lpSubKey[0] != v19 )
    operator delete((void *)lpSubKey[0]);
  return v9;
}
