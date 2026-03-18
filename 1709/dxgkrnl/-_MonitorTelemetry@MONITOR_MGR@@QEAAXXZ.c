/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C01FD9B8
 * Callers:
 *     MonitorInventoryTelemetry @ 0x1C01FE7E4 (MonitorInventoryTelemetry.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010C874 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(struct _FAST_MUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct _FAST_MUTEX *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  ULONG *p_Contention; // r14
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this->Owner + 2)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 11034LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v8 = *(_QWORD *)&this[2].Contention;
  if ( (ULONG *)v8 != p_Contention )
  {
    while ( v8 )
    {
      v9 = v8;
      if ( *(_DWORD *)(v8 + 416) != 1 && *(_QWORD *)(v8 + 424) )
        v9 = *(_QWORD *)(v8 + 424);
      if ( !v9 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v10);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v9 + 280), 1u);
      DXGMONITOR::_MonitorTelemetry(v9, 2);
      v8 = *(_QWORD *)v8;
      if ( (ULONG *)v8 == p_Contention )
        v8 = 0LL;
      ExReleaseResourceLite((PERESOURCE)(v9 + 280));
      KeLeaveCriticalRegion();
    }
  }
  if ( !v4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v11);
  }
  KeReleaseGuardedMutex(v4);
}
