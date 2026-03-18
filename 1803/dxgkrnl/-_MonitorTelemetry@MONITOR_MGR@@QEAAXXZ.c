/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C022CB64
 * Callers:
 *     MonitorInventoryTelemetry @ 0x1C022E858 (MonitorInventoryTelemetry.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(struct _FAST_MUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  struct _FAST_MUTEX *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  ULONG *p_Contention; // r14
  MONITOR_MGR *v8; // rax
  char *v9; // rdi
  char *v10; // rsi
  __int64 v11; // rax
  char *v12; // rax
  __int64 v13; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this->Owner + 2)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 11087LL;
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
  v8 = *(MONITOR_MGR **)&this[2].Contention;
  if ( v8 != (MONITOR_MGR *)&this[2].Contention )
  {
    v9 = (char *)v8 - 16;
    if ( !v8 )
      v9 = 0LL;
    while ( v9 )
    {
      v10 = v9;
      if ( *((_DWORD *)v9 + 108) != 1 && *((_QWORD *)v9 + 55) )
        v10 = (char *)*((_QWORD *)v9 + 55);
      if ( !v10 )
      {
        v11 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v11);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v10 + 296), 1u);
      DXGMONITOR::_MonitorTelemetry(v10, 2LL);
      v12 = (char *)*((_QWORD *)v9 + 2);
      if ( v12 == (char *)p_Contention )
      {
        v9 = 0LL;
      }
      else
      {
        v9 = v12 - 16;
        if ( !v12 )
          v9 = 0LL;
      }
      ExReleaseResourceLite((PERESOURCE)(v10 + 296));
      KeLeaveCriticalRegion();
    }
  }
  if ( !v4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v13);
  }
  KeReleaseGuardedMutex(v4);
}
