/*
 * XREFs of StorpLogPerUnitStatistics @ 0x1C000314C
 * Callers:
 *     StorpLogStatistics @ 0x1C0002FDC (StorpLogStatistics.c)
 * Callees:
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C0003248 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C000342C (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0003E70 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C00041F0 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0005080 (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendUnitQos @ 0x1C00458C4 (StorpTelemetrySendUnitQos.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, char a2)
{
  __int64 v4; // rcx
  _BYTE *v5; // rax
  int v6; // eax
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v8; // rsi

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData();
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorData(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 2576) == 1 )
    StorpTelemetrySendUnitQos(a1);
  if ( (a2 & 8) != 0 )
    StorpTelemetrySendAdaptiveIdleCounters(a1);
  if ( a2 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( !*(_BYTE *)(v4 + 5452) )
    {
      v5 = *(_BYTE **)(a1 + 96);
      if ( v5 )
      {
        if ( (*v5 & 0x1F) == 0 )
        {
          v6 = *(_DWORD *)(v4 + 4356);
          if ( v6 == 8 || v6 == 11 || v6 == 3 || v6 == 17 )
          {
            WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
            v8 = WorkItem;
            if ( WorkItem )
            {
              if ( (int)RaUnitAcquireRemoveLock(a1, WorkItem, 0LL) < 0 )
                IoFreeWorkItem(v8);
              else
                IoQueueWorkItem(v8, (PIO_WORKITEM_ROUTINE)StorpDeviceHealthWorkItemRoutine, NormalWorkQueue, v8);
            }
          }
        }
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    StorpTelemetrySendUnitPauseRequestCounters(a1);
  if ( (a2 & 0x30) != 0 )
    *(_DWORD *)(a1 + 1824) = 0;
}
