/*
 * XREFs of MonitorDisableMonitorVirtualModeSupport @ 0x1C022DB18
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00B81F0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0156EAC (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z @ 0x1C02359E0 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSupport(
        DXGADAPTER ***a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  DXGADAPTER **v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // rax
  DXGMONITOR *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  DXGMONITOR *v23; // rcx
  bool v24; // zf
  DXGMONITOR *v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = a1[307];
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v11);
    v10 = a1[307];
  }
  v12 = (struct _FAST_MUTEX *)v10[12];
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v25 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v12, v4, 1, &v25);
  v16 = result;
  if ( (_DWORD)result == -1073741275 )
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = v4;
    *(_QWORD *)(v17 + 32) = a1;
    WdLogEvent5_WdError(v17);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v18 = v25;
    if ( !v25 || *((_DWORD *)v25 + 108) != 1 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( !v18 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 296), 1u);
    if ( (*((_DWORD *)v18 + 10) & 2) != 0 )
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = v4;
      *(_QWORD *)(v22 + 32) = a1;
      WdLogEvent5_WdError(v22);
      v16 = -1073741790;
    }
    else if ( DXGMONITOR::_IsVirtualModeSuportDisabled(v18) && (v24 = a3 == 0, !a3)
           || !DXGMONITOR::_IsVirtualModeSuportDisabled(v23) && (v24 = a3 == 0, a3) )
    {
      v16 = DXGMONITOR::_DisableVirtualModeSupport(v18, !v24);
      if ( v16 >= 0 )
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(a1[307], 0LL, a4);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v18 + 296));
    KeLeaveCriticalRegion();
    return (unsigned int)v16;
  }
  return result;
}
