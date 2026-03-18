/*
 * XREFs of MonitorSetUsageClass @ 0x1C022F470
 * Callers:
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0164AAC (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C658 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0235898 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02359A0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetUsageClass(DXGADAPTER *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct _FAST_MUTEX *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct DXGMONITOR *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // esi
  int TtmDevice; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  struct DXGMONITOR *v25; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)a1 + 307);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v12);
    v11 = *((_QWORD *)a1 + 307);
  }
  v13 = *(struct _FAST_MUTEX **)(v11 + 96);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v25 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v13, v4, 1, &v25);
  if ( (_DWORD)result == -1073741275 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v16 + 24) = v4;
    *(_QWORD *)(v16 + 32) = a1;
    WdLogEvent5_WdError(v16);
    return 3221225664LL;
  }
  if ( (int)result >= 0 )
  {
    v17 = v25;
    if ( !v25 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v18);
    }
    if ( *((_DWORD *)v17 + 108) != 1 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = *((_DWORD *)v17 + 145);
    if ( a3 != v20 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v17 + 296), 1u);
      *((_DWORD *)v17 + 145) = a3;
      if ( a3 )
      {
        DXGMONITOR::_DestroyTtmDevice(v17);
      }
      else
      {
        TtmDevice = DXGMONITOR::_CreateTtmDevice(v17);
        v23 = TtmDevice;
        if ( TtmDevice < 0 )
        {
          *((_DWORD *)v17 + 145) = v20;
          v24 = WdLogNewEntry5_WdError(v22);
          *(_QWORD *)(v24 + 24) = v23;
          WdLogEvent5_WdError(v24);
          ExReleaseResourceLite((PERESOURCE)((char *)v17 + 296));
          KeLeaveCriticalRegion();
          return (unsigned int)v23;
        }
      }
      MONITOR_MGR::_IssueMonitorEvent(v13, v4, 10, (a3 != 0) + 1LL, *((_DWORD *)v17 + 108), a4);
      ExReleaseResourceLite((PERESOURCE)((char *)v17 + 296));
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
  return result;
}
