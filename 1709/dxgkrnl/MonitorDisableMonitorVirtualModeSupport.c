/*
 * XREFs of MonitorDisableMonitorVirtualModeSupport @ 0x1C01FE1A0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176394 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C02018A4 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSupport(
        DXGADAPTER ***a1,
        unsigned int a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rax
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a1[288] )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (struct _FAST_MUTEX *)a1[288][12];
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v22 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v11, v4, 1, (ULONG **)&v22);
  v15 = result;
  if ( (_DWORD)result == -1073741275 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v4;
    *(_QWORD *)(v16 + 32) = a1;
    WdLogEvent5_WdError(v16);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v17 = v22;
    if ( !v22 || *((_DWORD *)v22 + 104) != 1 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v18);
    }
    if ( !v17 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v19);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 280), 1u);
    if ( (*((_DWORD *)v17 + 6) & 2) != 0 )
    {
      v21 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v21 + 24) = v4;
      *(_QWORD *)(v21 + 32) = a1;
      WdLogEvent5_WdError(v21);
      v15 = -1073741790;
    }
    else if ( (unsigned __int8)DXGMONITOR::_IsVirtualModeSuportDisabled(v17) && !a3
           || !(unsigned __int8)DXGMONITOR::_IsVirtualModeSuportDisabled(v17) && a3 )
    {
      v15 = DXGMONITOR::_DisableVirtualModeSupport(v17, a3);
      if ( v15 >= 0 )
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(a1[288], 0LL, a4);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v17 + 280));
    KeLeaveCriticalRegion();
    return (unsigned int)v15;
  }
  return result;
}
