/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C01E3068
 * Callers:
 *     MonitorInventoryTelemetry @ 0x1C01E3DC0 (MonitorInventoryTelemetry.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010963C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(struct _FAST_MUTEX *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  struct _FAST_MUTEX *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG *p_Contention; // r14
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this->Owner + 2)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = 10455LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = this + 3;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    WdLogEvent5_WdAssertion(v8);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v14 = *(_QWORD *)&this[2].Contention;
  if ( (ULONG *)v14 != p_Contention )
  {
    while ( v14 )
    {
      v15 = v14;
      if ( *(_DWORD *)(v14 + 376) != 1 && *(_QWORD *)(v14 + 384) )
        v15 = *(_QWORD *)(v14 + 384);
      if ( !v15 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
        WdLogEvent5_WdAssertion(v16);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v15 + 240), 1u);
      DXGMONITOR::_MonitorTelemetry(v15, 2);
      v14 = *(_QWORD *)v14;
      if ( (ULONG *)v14 == p_Contention )
        v14 = 0LL;
      ExReleaseResourceLite((PERESOURCE)(v15 + 240));
      KeLeaveCriticalRegion();
    }
  }
  if ( !v7 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v17);
  }
  KeReleaseGuardedMutex(v7);
}
