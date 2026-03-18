/*
 * XREFs of ?_ReleaseAdditionalTiming@DXGMONITOR@@QEAAJPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E6510
 * Callers:
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E5640 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_ReleaseAdditionalTiming(
        DXGMONITOR *this,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_DWORD *)this + 112);
  if ( v6 )
  {
    *((_DWORD *)this + 112) = v6 - 1;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(this, a2);
    WdLogEvent5_WdError(v7);
  }
  return 0LL;
}
