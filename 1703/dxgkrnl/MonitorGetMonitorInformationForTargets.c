/*
 * XREFs of MonitorGetMonitorInformationForTargets @ 0x1C009F304
 * Callers:
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C009F210 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00E9A70 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 */

__int64 __fastcall MonitorGetMonitorInformationForTargets(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  __int64 v5; // rax
  MONITOR_MGR *v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a1 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 2280);
  if ( v5 )
  {
    v6 = *(MONITOR_MGR **)(v5 + 96);
    if ( v6 )
      return MONITOR_MGR::_GetMonitorInformationForTargets(
               v6,
               (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))&CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback,
               a3,
               a4);
    v9 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v9 + 24) = a1;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v8 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v8 + 24) = a1;
  WdLogEvent5_WdError(v8);
  return 3221226021LL;
}
