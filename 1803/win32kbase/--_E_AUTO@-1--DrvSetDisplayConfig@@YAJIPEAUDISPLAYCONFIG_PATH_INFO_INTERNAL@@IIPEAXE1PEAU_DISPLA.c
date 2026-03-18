/*
 * XREFs of ??_E_AUTO@?1??DrvSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIPEAXE1PEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAU_MDEV@@PEAPEAU4@PEAKPEAW4_DXGK_DIAG_SDC_STAGE@@PEAE7PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00CBA50
 * Callers:
 *     <none>
 * Callees:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C004B2C8 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 */

AUTO_TGO *__fastcall `DrvSetDisplayConfig'::`2'::_AUTO::`vector deleting destructor'(AUTO_TGO *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(a1);
  if ( (a2 & 1) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v8);
  }
  return a1;
}
