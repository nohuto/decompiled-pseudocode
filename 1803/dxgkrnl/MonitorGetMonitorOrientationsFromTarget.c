/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C00B7820
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00E1C30 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 MonitorGetMonitorOrientationsFromTarget(DXGADAPTER *a1, unsigned int a2, _DWORD *a3, ...)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  MONITOR_MGR *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct DXGMONITOR *v17; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, struct DXGMONITOR *);
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v7 = *((_QWORD *)a1 + 307);
  if ( !v7 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v12);
    v7 = *((_QWORD *)a1 + 307);
  }
  v8 = *(MONITOR_MGR **)(v7 + 96);
  if ( !v8 )
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v17 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v8, a2, 1u, (struct DXGMONITOR **)va);
  if ( (int)result >= 0 )
  {
    v11 = v17;
    if ( !v17 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v14);
      v16 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 296), 1u);
    if ( a3 )
      *a3 = *((_DWORD *)v11 + 113);
    ExReleaseResourceLite((PERESOURCE)((char *)v11 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
