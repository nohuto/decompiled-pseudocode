/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C0099B24
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00E6BB0 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 MonitorGetMonitorOrientationsFromTarget(DXGADAPTER *a1, unsigned int a2, _DWORD *a3, ...)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  MONITOR_MGR *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGMONITOR *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  struct DXGMONITOR *v25; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, struct DXGMONITOR *);
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 285) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v17);
  }
  v10 = *(MONITOR_MGR **)(*((_QWORD *)a1 + 285) + 96LL);
  if ( !v10 )
  {
    v18 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v25 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v10, a2, 1u, (struct DXGMONITOR **)va);
  if ( (int)result >= 0 )
  {
    v16 = v25;
    if ( !v25 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      WdLogEvent5_WdAssertion(v19);
      v24 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 240), 1u);
    if ( a3 )
      *a3 = *((_DWORD *)v16 + 99);
    ExReleaseResourceLite((PERESOURCE)((char *)v16 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
