/*
 * XREFs of KiInitSystem @ 0x14080C7A4
 * Callers:
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 * Callees:
 *     KiForceSymbolReferences @ 0x1408343F0 (KiForceSymbolReferences.c)
 */

__int64 (*KiInitSystem())()
{
  __int64 v0; // rcx
  _QWORD *v1; // rax
  __int64 (*result)(); // rax

  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  v0 = 1024LL;
  LODWORD(xmmword_1403F88B0) = 0;
  qword_140356678 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_140356698 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_140356688 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_140356A08 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_1403569F8 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = KiServiceTable;
  LODWORD(xmmword_1403F8890) = KiServiceLimit;
  *((_QWORD *)&xmmword_1403F8890 + 1) = KiArgumentTable;
  qword_140356B58 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_140356B60 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_140356A70 = (__int64)&qword_140356A68;
  qword_140356A68 = (__int64)&qword_140356A68;
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
  xmmword_1403E4550 = xmmword_1403F8890;
  xmmword_1403E4560 = xmmword_1403F88A0;
  xmmword_1403E4570 = xmmword_1403F88B0;
  KeServiceDescriptorTableFilter[0] = KeServiceDescriptorTable;
  xmmword_1403E4590[0] = xmmword_1403F8890;
  xmmword_1403E45A0 = xmmword_1403F88A0;
  xmmword_1403E45B0 = xmmword_1403F88B0;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_140356B78 = 0LL;
  qword_140356B50 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_140356A62 = 6;
  dword_140356A64 = 0;
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
  qword_140356AB8 = (__int64)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  LODWORD(KiSetVirtualHeteroClockIntervalRequestDpc) = 531;
  qword_140356AC0 = 0LL;
  qword_140356AD8 = 0LL;
  qword_140356AB0 = 0LL;
  return result;
}
