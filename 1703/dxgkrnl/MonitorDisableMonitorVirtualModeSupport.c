/*
 * XREFs of MonitorDisableMonitorVirtualModeSupport @ 0x1C01E3850
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172854 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C01E6F78 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSupport(
        DXGADAPTER ***a1,
        unsigned int a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edi
  __int64 v22; // rax
  struct DXGMONITOR *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  struct DXGMONITOR *v30; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a1[285] )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = (struct _FAST_MUTEX *)a1[285][12];
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, v8);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v30 = 0LL;
  LOBYTE(v10) = 1;
  result = MONITOR_MGR::_GetMonitorInstance(v14, (unsigned int)v4, v10, (ULONG **)&v30);
  v21 = result;
  if ( (_DWORD)result == -1073741275 )
  {
    v22 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v22 + 24) = v4;
    *(_QWORD *)(v22 + 32) = a1;
    WdLogEvent5_WdError(v22);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v23 = v30;
    if ( !v30 || *((_DWORD *)v30 + 94) != 1 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v24);
    }
    if ( !v23 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v25);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v23 + 240), 1u);
    if ( (*((_DWORD *)v23 + 6) & 2) != 0 )
    {
      v28 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v28 + 24) = v4;
      *(_QWORD *)(v28 + 32) = a1;
      WdLogEvent5_WdError(v28);
      v21 = -1073741790;
    }
    else
    {
      v29 = *((_DWORD *)v23 + 6) & 0x80;
      if ( v29 && !a3 || !v29 && a3 )
      {
        v21 = DXGMONITOR::_DisableVirtualModeSupport(v23, a3);
        if ( v21 >= 0 )
          ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(a1[285], 0LL, a4);
      }
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v23 + 240));
    KeLeaveCriticalRegion();
    return (unsigned int)v21;
  }
  return result;
}
