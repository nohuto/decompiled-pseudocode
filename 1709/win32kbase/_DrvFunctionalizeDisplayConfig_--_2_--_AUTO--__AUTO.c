/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00F511C
 * Callers:
 *     ??_G_AUTO@?1??DrvFunctionalizeDisplayConfig@@YAJPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00F51B0 (--_G_AUTO@-1--DrvFunctionalizeDisplayConfig@@YAJPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IPEAW4.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00FA088 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C001B1C8 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0066F38 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(struct D3DKMT_GETPATHSMODALITY **this)
{
  *this = (struct D3DKMT_GETPATHSMODALITY *)&off_1C015EFE0;
  FreePathsModality(this[6]);
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
