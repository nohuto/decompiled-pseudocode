/*
 * XREFs of MonitorInventoryTelemetry @ 0x1C022E858
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0030480 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C022CB64 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ.c)
 */

void __fastcall MonitorInventoryTelemetry(__int64 a1)
{
  __int64 v1; // rcx
  struct _FAST_MUTEX *v2; // rcx

  v1 = *(_QWORD *)(a1 + 2456);
  if ( v1 )
  {
    v2 = *(struct _FAST_MUTEX **)(v1 + 96);
    if ( v2 )
      MONITOR_MGR::_MonitorTelemetry(v2);
  }
}
