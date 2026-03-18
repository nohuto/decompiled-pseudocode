/*
 * XREFs of MonitorGetNativeFlags @ 0x1C01222D4
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C010FBDC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C001216C (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNativeFlags(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        bool *a4,
        unsigned __int8 *a5)
{
  __int64 v9; // rcx
  struct _FAST_MUTEX *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  struct DXGMONITOR *v13; // rbx
  unsigned int MonitorNativeFlags; // eax
  struct _ERESOURCE *v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 288) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v17);
  }
  v10 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 288) + 96LL);
  if ( !v10 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v22 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v10, a2, 0, (ULONG **)&v22);
  if ( (int)result >= 0 )
  {
    v13 = v22;
    if ( !v22 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v19);
      v21 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v21);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 280), 1u);
    MonitorNativeFlags = DXGMONITOR::_GetMonitorNativeFlags(v13, a3, a4, (bool *)a5);
    v15 = (struct _ERESOURCE *)((char *)v13 + 280);
    v16 = MonitorNativeFlags;
    ExReleaseResourceLite(v15);
    KeLeaveCriticalRegion();
    return v16;
  }
  return result;
}
