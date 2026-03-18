/*
 * XREFs of MonitorGetNativeFlags @ 0x1C022E328
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0215AC0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C0046F7C (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNativeFlags(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        bool *a4,
        unsigned __int8 *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx
  struct DXGMONITOR *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int MonitorNativeFlags; // eax
  struct _ERESOURCE *v21; // rcx
  unsigned int v22; // ebx
  struct DXGMONITOR *v23; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v10 = *((_QWORD *)a1 + 307);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v11);
    v10 = *((_QWORD *)a1 + 307);
  }
  v12 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v23 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v12, a2, 0, &v23);
  if ( (int)result >= 0 )
  {
    v16 = v23;
    if ( !v23 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v17);
      v19 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v19);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
    MonitorNativeFlags = DXGMONITOR::_GetMonitorNativeFlags(v16, a3, a4, (bool *)a5);
    v21 = (struct _ERESOURCE *)((char *)v16 + 296);
    v22 = MonitorNativeFlags;
    ExReleaseResourceLite(v21);
    KeLeaveCriticalRegion();
    return v22;
  }
  return result;
}
