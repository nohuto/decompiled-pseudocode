/*
 * XREFs of KiInitSystem @ 0x140832A0C
 * Callers:
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 * Callees:
 *     KiForceSymbolReferences @ 0x14086B5B8 (KiForceSymbolReferences.c)
 */

__int64 (*KiInitSystem())()
{
  __int64 v0; // rcx
  _QWORD *v1; // rax
  __int64 (*result)(); // rax

  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  v0 = 1024LL;
  LODWORD(xmmword_1404198B0) = 0;
  qword_140371698 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_140371198 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_140371188 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_1403714E8 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_140371528 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = KiServiceTable;
  LODWORD(xmmword_140419890) = KiServiceLimit;
  *((_QWORD *)&xmmword_140419890 + 1) = KiArgumentTable;
  qword_140371658 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_140371660 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_140371570 = (__int64)&qword_140371568;
  qword_140371568 = (__int64)&qword_140371568;
  KiStackProtectNotifyEvent.Header.WaitListHead.Blink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  KiStackProtectNotifyEvent.Header.WaitListHead.Flink = &KiStackProtectNotifyEvent.Header.WaitListHead;
  v1 = &KiAbTreeArray;
  KeBugCheckCallbackLock = 0LL;
  LOWORD(KiSwapEvent.Header.Lock) = 1;
  KiSwapEvent.Header.Size = 6;
  KiSwapEvent.Header.SignalState = 0;
  KiProcessInSwapListHead = 0LL;
  KiProcessOutSwapListHead = 0LL;
  KiStackInSwapListHead = 0LL;
  KeServiceDescriptorTableShadow = KeServiceDescriptorTable;
  xmmword_140401710 = xmmword_140419890;
  xmmword_140401720 = xmmword_1404198A0;
  xmmword_140401730 = xmmword_1404198B0;
  KeServiceDescriptorTableFilter[0] = KeServiceDescriptorTable;
  xmmword_140401750 = xmmword_140419890;
  xmmword_140401760 = xmmword_1404198A0;
  xmmword_140401770 = xmmword_1404198B0;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_140371678 = 0LL;
  qword_140371650 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_140371562 = 6;
  dword_140371564 = 0;
  LOWORD(KiStackProtectNotifyEvent.Header.Lock) = 0;
  KiStackProtectNotifyEvent.Header.Size = 6;
  KiStackProtectNotifyEvent.Header.SignalState = 0;
  do
  {
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
    v1 += 8;
    --v0;
  }
  while ( v0 );
  KiDynamicProcessorLock.Count = 1;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Blink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  KiDynamicProcessorLock.Event.Header.WaitListHead.Flink = &KiDynamicProcessorLock.Event.Header.WaitListHead;
  result = KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  qword_1403715B8 = (__int64)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  LODWORD(KiSetVirtualHeteroClockIntervalRequestDpc) = 531;
  qword_1403715C0 = 0LL;
  qword_1403715D8 = 0LL;
  qword_1403715B0 = 0LL;
  return result;
}
