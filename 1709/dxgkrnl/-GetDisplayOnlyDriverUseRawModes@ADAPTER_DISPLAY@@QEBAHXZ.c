/*
 * XREFs of ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0007BAC
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00D5738 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(ADAPTER_DISPLAY *this)
{
  __int64 v3; // rax

  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2312LL) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 5568LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return *((unsigned int *)this + 63);
}
