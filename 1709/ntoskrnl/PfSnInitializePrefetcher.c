/*
 * XREFs of PfSnInitializePrefetcher @ 0x14084F17C
 * Callers:
 *     PfInitializeSuperfetch @ 0x14084EEE8 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1405DCDC8 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x1405DCE0C (PfpCreateEvent.c)
 */

__int64 PfSnInitializePrefetcher()
{
  _QWORD *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  Mutex.Count = 1;
  qword_140389D10 = 0LL;
  qword_140389D08 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  Mutex.Owner = 0LL;
  qword_140389D20 = &qword_140389D18;
  qword_140389D18 = &qword_140389D18;
  Mutex.Event.Header.WaitListHead.Blink = &Mutex.Event.Header.WaitListHead;
  Mutex.Event.Header.WaitListHead.Flink = &Mutex.Event.Header.WaitListHead;
  Mutex.Contention = 0;
  LOWORD(Mutex.Event.Header.Lock) = 1;
  Mutex.Event.Header.Size = 6;
  Mutex.Event.Header.SignalState = 0;
  dword_140389D64 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140389D68);
  PfSnPrefetchCacheCtxInitialize(qword_140389D78);
  RegHandle = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x66506343u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    *(_BYTE *)PoolWithTag = 8;
    PoolWithTag[2] = PoolWithTag + 1;
    PoolWithTag[1] = PoolWithTag + 1;
    PoolWithTag[3] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[11] = PfSnTracingStateDpcRoutine;
    *((_DWORD *)PoolWithTag + 16) = 275;
    PoolWithTag[12] = PoolWithTag;
    PoolWithTag[15] = 0LL;
    PoolWithTag[10] = 0LL;
    PoolWithTag[18] = PfSnTracingStateExWorkerRoutine;
    PoolWithTag[19] = PoolWithTag;
    PoolWithTag[16] = 0LL;
    KiSetTimerEx((__int64)PoolWithTag, -6000000000LL, 0, 0, (__int64)(PoolWithTag + 8));
  }
  return 0LL;
}
