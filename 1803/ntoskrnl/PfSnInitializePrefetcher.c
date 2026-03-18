/*
 * XREFs of PfSnInitializePrefetcher @ 0x1408C05BC
 * Callers:
 *     PfInitializeSuperfetch @ 0x1408C032C (PfInitializeSuperfetch.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140645588 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x1406455CC (PfpCreateEvent.c)
 */

__int64 PfSnInitializePrefetcher()
{
  _QWORD *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  stru_1403CD868.Count = 1;
  qword_1403CD850 = 0LL;
  qword_1403CD848 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  stru_1403CD868.Owner = 0LL;
  qword_1403CD860 = &qword_1403CD858;
  qword_1403CD858 = &qword_1403CD858;
  stru_1403CD868.Event.Header.WaitListHead.Blink = &stru_1403CD868.Event.Header.WaitListHead;
  stru_1403CD868.Event.Header.WaitListHead.Flink = &stru_1403CD868.Event.Header.WaitListHead;
  stru_1403CD868.Contention = 0;
  LOWORD(stru_1403CD868.Event.Header.Lock) = 1;
  stru_1403CD868.Event.Header.Size = 6;
  stru_1403CD868.Event.Header.SignalState = 0;
  dword_1403CD8A4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_1403CD8A8);
  PfSnPrefetchCacheCtxInitialize(qword_1403CD8B8);
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
