/*
 * XREFs of ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1800C6F18
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800C6E38 (-Startup@@YAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ @ 0x1800C6FF0 (-InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ.c)
 *     ?RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z @ 0x1800C750C (-RegReadDWORD@@YA_NPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 CCommonRegistryData::InitializeFromRegistry(void)
{
  int v0; // eax
  bool v1; // al
  unsigned int v2; // ecx
  unsigned int v4; // [rsp+40h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+48h] [rbp+18h] BYREF

  hKey = 0LL;
  v0 = CCommonRegistryData::InitializeDWMKeysFromRegistry();
  if ( v0 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v0, 0xF8u);
  }
  else if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Avalon.Graphics", 0, 1u, &hKey) )
  {
    v4 = 0;
    RegReadDWORD(hKey, L"UseD3DDebugLayer", &v4);
    v4 = 0;
    v1 = RegReadDWORD(hKey, L"Force10Level9", &v4);
    v2 = CCommonRegistryData::m_fForce10Level9;
    if ( v1 )
      v2 = v4;
    v4 = 0;
    CCommonRegistryData::m_fForce10Level9 = v2;
    if ( RegReadDWORD(hKey, L"Force10OnWDDM1_0", &v4) )
      CCommonRegistryData::m_fForce10OnWDDM1_0 = v4;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
