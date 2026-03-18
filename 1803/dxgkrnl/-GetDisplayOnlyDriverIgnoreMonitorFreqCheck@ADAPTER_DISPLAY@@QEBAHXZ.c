/*
 * XREFs of ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0046BF8
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C0015A70 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(DXGADAPTER **this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( *((_QWORD *)this[2] + 308) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 5995LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 64) || !DXGADAPTER::SupportHWVSync(this[2]) )
    return 1;
  return v1;
}
