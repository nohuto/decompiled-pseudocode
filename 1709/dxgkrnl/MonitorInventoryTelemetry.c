/*
 * XREFs of MonitorInventoryTelemetry @ 0x1C01FE7E4
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0026800 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C01FD9B8 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ.c)
 */

void __fastcall MonitorInventoryTelemetry(__int64 a1)
{
  __int64 v1; // rcx
  struct _FAST_MUTEX *v2; // rcx

  v1 = *(_QWORD *)(a1 + 2304);
  if ( v1 )
  {
    v2 = *(struct _FAST_MUTEX **)(v1 + 96);
    if ( v2 )
      MONITOR_MGR::_MonitorTelemetry(v2);
  }
}
