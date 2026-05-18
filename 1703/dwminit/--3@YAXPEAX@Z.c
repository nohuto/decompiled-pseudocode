/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180003EE0
 * Callers:
 *     ??_GCDwmInitTelemetryAggregator@@UEAAPEAXI@Z @ 0x1800014A0 (--_GCDwmInitTelemetryAggregator@@UEAAPEAXI@Z.c)
 *     ??_E?$CAggregateValuesBase@W4DwmInitTelemetryAggregateType@@I@@UEAAPEAXI@Z @ 0x1800014F0 (--_E-$CAggregateValuesBase@W4DwmInitTelemetryAggregateType@@I@@UEAAPEAXI@Z.c)
 *     ??1?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAA@XZ @ 0x180003598 (--1-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A.c)
 *     ??_G?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAPEAXI@Z @ 0x1800038D0 (--_G-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0.c)
 *     ??_E?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAPEAXI@Z @ 0x180003900 (--_E-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$.c)
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x180004510 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x180004C70 (--_ECPortClient@@UEAAPEAXI@Z.c)
 *     ??1CDwmInitEventManager@DwmInitAsimov@@QEAA@XZ @ 0x180005748 (--1CDwmInitEventManager@DwmInitAsimov@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXXZ @ 0x180005C28 (-RemoveAll@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@.c)
 *     ?InitHashTable@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAA_NI_N@Z @ 0x180005CCC (-InitHashTable@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventMana.c)
 *     ?Rehash@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@QEAAXI@Z @ 0x180005D4C (-Rehash@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4D.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete(void *a1)
{
  WPF::ProcessHeapImpl::Free(a1);
}
