/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00F3EA0
 * Callers:
 *     ??_E_AUTO@?1??DrvFunctionalizeDisplayConfig@@YAJPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@IIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00F3F30 (--_E_AUTO@-1--DrvFunctionalizeDisplayConfig@@YAJPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCON.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00F9EA4 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0057940 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(struct _D3DKMT_GETPATHSMODALITY **this)
{
  *this = (struct _D3DKMT_GETPATHSMODALITY *)&off_1C015FCD0;
  FreePathsModality(this[6]);
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
