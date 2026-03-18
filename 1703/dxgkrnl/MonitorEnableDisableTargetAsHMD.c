/*
 * XREFs of MonitorEnableDisableTargetAsHMD @ 0x1C01E3B54
 * Callers:
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017A5F4 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C01E6F38 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorEnableDisableTargetAsHMD(DXGADAPTER *a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  struct _FAST_MUTEX *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  struct DXGMONITOR *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGMONITOR *v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !*((_QWORD *)a1 + 285) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 285) + 96LL);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  v25 = 0LL;
  LOBYTE(v11) = 1;
  result = MONITOR_MGR::_GetMonitorInstance(v15, (unsigned int)v4, v11, (ULONG **)&v25);
  if ( (_DWORD)result == -1073741275 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v21 + 24) = v4;
    *(_QWORD *)(v21 + 32) = a1;
    WdLogEvent5_WdError(v21);
    return 3221225664LL;
  }
  if ( (int)result >= 0 )
  {
    v22 = v25;
    if ( !v25 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v23);
    }
    if ( *((_DWORD *)v22 + 94) != 1 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v24);
    }
    if ( a3 )
    {
      if ( *((_BYTE *)v22 + 524) )
        return 0LL;
    }
    else if ( !*((_BYTE *)v22 + 524) )
    {
      return 0LL;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v22 + 240), 1u);
    *((_BYTE *)v22 + 524) = a3;
    DXGMONITOR::_DestroyTtmDevice(v22);
    MONITOR_MGR::_IssueMonitorEvent(
      v15,
      (unsigned int)v4,
      10LL,
      (const GUID *)((a3 != 0) + 1LL),
      *((_DWORD *)v22 + 94),
      a4);
    ExReleaseResourceLite((PERESOURCE)((char *)v22 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
