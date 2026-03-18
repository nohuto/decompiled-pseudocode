/*
 * XREFs of MonitorGetNativeFlags @ 0x1C0105B7C
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C0010310 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNativeFlags(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        bool *a4,
        unsigned __int8 *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _FAST_MUTEX *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGMONITOR *v19; // rbx
  unsigned int MonitorNativeFlags; // eax
  struct _ERESOURCE *v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct DXGMONITOR *v31; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 285) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v23);
  }
  v13 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 285) + 96LL);
  if ( !v13 )
  {
    v24 = WdLogNewEntry5_WdError(0LL, v9);
    *(_QWORD *)(v24 + 24) = a1;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  v31 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v13, a2, 0LL, (ULONG **)&v31);
  if ( (int)result >= 0 )
  {
    v19 = v31;
    if ( !v31 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v25);
      v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      WdLogEvent5_WdAssertion(v30);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 240), 1u);
    MonitorNativeFlags = DXGMONITOR::_GetMonitorNativeFlags(v19, a3, a4, (bool *)a5);
    v21 = (struct _ERESOURCE *)((char *)v19 + 240);
    v22 = MonitorNativeFlags;
    ExReleaseResourceLite(v21);
    KeLeaveCriticalRegion();
    return v22;
  }
  return result;
}
