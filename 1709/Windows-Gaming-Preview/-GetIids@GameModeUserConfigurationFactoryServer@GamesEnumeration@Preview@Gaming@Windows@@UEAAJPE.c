/*
 * XREFs of ?GetIids@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180039BB0
 * Callers:
 *     ?GetIids@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180039B50 (-GetIids@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GetIids(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_6e50d97c_66ea_478e_a4a1_f57c0e8d00e7;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
