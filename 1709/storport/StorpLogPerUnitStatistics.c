/*
 * XREFs of StorpLogPerUnitStatistics @ 0x1C00043A8
 * Callers:
 *     StorpLogStatistics @ 0x1C0004218 (StorpLogStatistics.c)
 * Callees:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0003E1C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C0004484 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     RaidUnitDeviceHealthTelemetrySupported @ 0x1C0004668 (RaidUnitDeviceHealthTelemetrySupported.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C00046C0 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0004A04 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitAcquireRemoveLock @ 0x1C00058A4 (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendUnitQos @ 0x1C0046890 (StorpTelemetrySendUnitQos.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, char a2)
{
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v5; // rsi

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData();
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorData(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 2624) == 1 )
    StorpTelemetrySendUnitQos(a1);
  if ( (a2 & 8) != 0 )
    StorpTelemetrySendAdaptiveIdleCounters(a1);
  if ( a2 < 0 )
  {
    if ( (unsigned __int8)RaidUnitDeviceHealthTelemetrySupported(a1) )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      v5 = WorkItem;
      if ( WorkItem )
      {
        if ( (int)RaUnitAcquireRemoveLock(a1, WorkItem, 0LL) < 0 )
          IoFreeWorkItem(v5);
        else
          IoQueueWorkItem(v5, (PIO_WORKITEM_ROUTINE)StorpDeviceHealthWorkItemRoutine, NormalWorkQueue, v5);
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    StorpTelemetrySendUnitPauseRequestCounters(a1);
  if ( (a2 & 0x30) != 0 )
    *(_DWORD *)(a1 + 1856) = 0;
}
