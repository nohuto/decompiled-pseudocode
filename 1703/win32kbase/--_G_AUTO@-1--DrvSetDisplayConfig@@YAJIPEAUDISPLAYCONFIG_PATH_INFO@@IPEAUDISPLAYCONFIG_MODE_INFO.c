/*
 * XREFs of ??_G_AUTO@?1??DrvSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IIPEAXEPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAU_MDEV@@PEAPEAU5@PEAKPEAW4_DXGK_DIAG_SDC_STAGE@@PEAE8PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00F3F70
 * Callers:
 *     <none>
 * Callees:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00578E4 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 */

AUTO_TGO *__fastcall `DrvSetDisplayConfig'::`2'::_AUTO::`scalar deleting destructor'(AUTO_TGO *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(a1);
  if ( (a2 & 1) != 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v6);
  }
  return a1;
}
