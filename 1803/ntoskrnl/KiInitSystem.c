/*
 * XREFs of KiInitSystem @ 0x1408BC154
 * Callers:
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 * Callees:
 *     KiForceSymbolReferences @ 0x1408DFFA0 (KiForceSymbolReferences.c)
 */

__int64 (*KiInitSystem())()
{
  __int64 v0; // rcx
  _QWORD *v1; // rax
  __int64 (*result)(); // rax

  if ( KiForceSymbolReferencesTrigger )
    KiForceSymbolReferences();
  v0 = 1024LL;
  LODWORD(xmmword_1404648B0) = 0;
  qword_1403B48B8 = (__int64)&KeBugCheckCallbackListHead;
  KeBugCheckCallbackListHead = (__int64)&KeBugCheckCallbackListHead;
  qword_1403B48E8 = (__int64)&KeBugCheckReasonCallbackListHead;
  KeBugCheckReasonCallbackListHead = &KeBugCheckReasonCallbackListHead;
  qword_1403B48C8 = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  KeBugCheckAddRemovePagesCallbackListHead = (__int64)&KeBugCheckAddRemovePagesCallbackListHead;
  qword_1403B48D8 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  qword_1403B4728 = (__int64)&KiProfileListHead;
  KiProfileListHead = (__int64)&KiProfileListHead;
  qword_1403B4738 = (__int64)&KiProfileSourceListHead;
  KiProfileSourceListHead = (__int64)&KiProfileSourceListHead;
  KiSwapEvent.Header.WaitListHead.Blink = &KiSwapEvent.Header.WaitListHead;
  KiSwapEvent.Header.WaitListHead.Flink = &KiSwapEvent.Header.WaitListHead;
  *(_QWORD *)&KeServiceDescriptorTable = KiServiceTable;
  LODWORD(xmmword_140464890) = KiServiceLimit;
  *((_QWORD *)&xmmword_140464890 + 1) = KiArgumentTable;
  qword_1403B4878 = (__int64)KiBalanceSetManagerDeferredRoutine;
  qword_1403B4880 = (__int64)&KiBalanceSetManagerPeriodicEvent;
  qword_1403B4790 = (__int64)&qword_1403B4788;
  qword_1403B4788 = (__int64)&qword_1403B4788;
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
  xmmword_14044C8D0 = xmmword_140464890;
  xmmword_14044C8E0 = xmmword_1404648A0;
  xmmword_14044C8F0 = xmmword_1404648B0;
  KeServiceDescriptorTableFilter[0] = KeServiceDescriptorTable;
  xmmword_14044C910 = xmmword_140464890;
  xmmword_14044C920 = xmmword_1404648A0;
  xmmword_14044C930 = xmmword_1404648B0;
  LODWORD(KiBalanceSetManagerPeriodicDpc) = 275;
  qword_1403B4898 = 0LL;
  qword_1403B4870 = 0LL;
  KiBalanceSetManagerPeriodicEvent = 1;
  byte_1403B4782 = 6;
  dword_1403B4784 = 0;
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
  qword_1403B47B8 = (__int64)KiSetVirtualHeteroClockIntervalRequestDpcRoutine;
  KiDynamicProcessorLock.Owner = 0LL;
  KiDynamicProcessorLock.Contention = 0;
  LOWORD(KiDynamicProcessorLock.Event.Header.Lock) = 1;
  KiDynamicProcessorLock.Event.Header.Size = 6;
  KiDynamicProcessorLock.Event.Header.SignalState = 0;
  LODWORD(KiSetVirtualHeteroClockIntervalRequestDpc) = 531;
  qword_1403B47C0 = 0LL;
  qword_1403B47D8 = 0LL;
  qword_1403B47B0 = 0LL;
  return result;
}
