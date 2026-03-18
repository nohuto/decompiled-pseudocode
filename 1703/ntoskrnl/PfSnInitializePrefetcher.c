/*
 * XREFs of PfSnInitializePrefetcher @ 0x14081DD1C
 * Callers:
 *     PfInitializeSuperfetch @ 0x14081DA88 (PfInitializeSuperfetch.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1405C8E28 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x1405C8E6C (PfpCreateEvent.c)
 */

__int64 PfSnInitializePrefetcher()
{
  _QWORD *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  Mutex.Count = 1;
  qword_14036DFD0 = 0LL;
  qword_14036DFC8 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  Mutex.Owner = 0LL;
  qword_14036DFE0 = &qword_14036DFD8;
  qword_14036DFD8 = &qword_14036DFD8;
  Mutex.Event.Header.WaitListHead.Blink = &Mutex.Event.Header.WaitListHead;
  Mutex.Event.Header.WaitListHead.Flink = &Mutex.Event.Header.WaitListHead;
  Mutex.Contention = 0;
  LOWORD(Mutex.Event.Header.Lock) = 1;
  Mutex.Event.Header.Size = 6;
  Mutex.Event.Header.SignalState = 0;
  dword_14036E024 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_14036E028);
  PfSnPrefetchCacheCtxInitialize(qword_14036E038);
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
