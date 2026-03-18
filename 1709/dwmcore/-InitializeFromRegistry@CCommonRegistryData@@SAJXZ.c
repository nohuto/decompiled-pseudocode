/*
 * XREFs of ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x18018E3D0
 * Callers:
 *     ?Startup@@YAJXZ @ 0x18018E4E8 (-Startup@@YAJXZ.c)
 * Callees:
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x18018DE24 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ.c)
 *     ?RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z @ 0x18018E490 (-RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 CCommonRegistryData::InitializeFromRegistry(void)
{
  bool v0; // al
  unsigned int v1; // ecx
  bool v2; // al
  unsigned int v3; // ecx
  unsigned int v5; // [rsp+40h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+48h] [rbp+18h] BYREF

  hKey = 0LL;
  CCommonRegistryData::InitializeDWMKeysFromRegistry();
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 1u, &hKey) )
  {
    v5 = 0;
    RegReadDWORD(hKey, L"UseD3DDebugLayer", &v5);
    v5 = 0;
    v0 = RegReadDWORD(hKey, L"Force10Level9", &v5);
    v1 = CCommonRegistryData::m_fForce10Level9;
    if ( v0 )
      v1 = v5;
    v5 = 0;
    CCommonRegistryData::m_fForce10Level9 = v1;
    v2 = RegReadDWORD(hKey, L"Force10OnWDDM1_0", &v5);
    v3 = CCommonRegistryData::m_fForce10OnWDDM1_0;
    if ( v2 )
      v3 = v5;
    CCommonRegistryData::m_fForce10OnWDDM1_0 = v3;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
