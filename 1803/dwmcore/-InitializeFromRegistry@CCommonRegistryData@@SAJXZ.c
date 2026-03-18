/*
 * XREFs of ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1800CE85C
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800CE7C4 (-Startup@@YAJXZ.c)
 * Callees:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1800CE8B8 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     ?RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z @ 0x1801C5AD4 (-RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 CCommonRegistryData::InitializeFromRegistry(void)
{
  bool v1; // al
  unsigned int v2; // ecx
  bool v3; // al
  unsigned int v4; // ecx
  unsigned int v5; // [rsp+40h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+48h] [rbp+18h] BYREF

  hKey = 0LL;
  CCommonRegistryData::InitializeDWMKeysFromRegistry();
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 1u, &hKey) )
  {
    v5 = 0;
    RegReadDWORD(hKey, L"UseD3DDebugLayer", &v5);
    v5 = 0;
    v1 = RegReadDWORD(hKey, L"Force10Level9", &v5);
    v2 = CCommonRegistryData::m_fForce10Level9;
    if ( v1 )
      v2 = v5;
    v5 = 0;
    CCommonRegistryData::m_fForce10Level9 = v2;
    v3 = RegReadDWORD(hKey, L"Force10OnWDDM1_0", &v5);
    v4 = CCommonRegistryData::m_fForce10OnWDDM1_0;
    if ( v3 )
      v4 = v5;
    CCommonRegistryData::m_fForce10OnWDDM1_0 = v4;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
