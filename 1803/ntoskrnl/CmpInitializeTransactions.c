/*
 * XREFs of CmpInitializeTransactions @ 0x1408C66D4
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 *CmpInitializeTransactions()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r8
  __int64 v2; // r10
  _QWORD *v3; // rdx
  const char *v4; // rax
  __int64 v5; // rax
  int v6; // r9d
  __int64 *result; // rax
  __int64 v8; // rax
  _BYTE v9[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+22h] [rbp-16h]

  CmpRmListLock.Event.Header.Size = 6;
  qword_1403CA128 = (__int64)&CmpRmListHead;
  CmpRmListHead = (__int64)&CmpRmListHead;
  CmpRmListLock.Event.Header.WaitListHead.Blink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpRmListLock.Event.Header.WaitListHead.Flink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Blink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Flink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpLazyCommitWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpLazyCommitWorker;
  qword_1403CA3A8 = (__int64)&CmpLazyCommitListHead;
  CmpLazyCommitListHead = (__int64)&CmpLazyCommitListHead;
  CmpRmListLock.Count = 1;
  CmpRmListLock.Owner = 0LL;
  CmpRmListLock.Contention = 0;
  LOWORD(CmpRmListLock.Event.Header.Lock) = 1;
  CmpRmListLock.Event.Header.SignalState = 0;
  CmpTransactionListLock.Count = 1;
  CmpTransactionListLock.Owner = 0LL;
  CmpTransactionListLock.Contention = 0;
  LOWORD(CmpTransactionListLock.Event.Header.Lock) = 1;
  CmpTransactionListLock.Event.Header.Size = 6;
  CmpTransactionListLock.Event.Header.SignalState = 0;
  CmpTransactionInitializingEvent = 0LL;
  CmpLazyCommitWorkItem.Parameter = 0LL;
  CmpLazyCommitWorkItem.List.Flink = 0LL;
  if ( !qword_1403CB000 )
  {
    v0 = __rdtsc();
    v1 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4)) ^ 0xFEDLL;
    if ( !v1 )
      v1 = 1LL;
    qword_1403CB000 = v1;
    v2 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x54FLL;
    qword_1403CB008 = v2;
    __sidt(v9);
    v3 = (_QWORD *)v10;
    if ( v10 < v10 + 848 )
    {
      v4 = (const char *)v10;
      do
      {
        _mm_prefetch(v4, 0);
        v4 += 64;
      }
      while ( (unsigned __int64)v4 < v10 + 848 );
    }
    v5 = 106LL;
    v6 = 848;
    do
    {
      v1 = __ROR8__(v1 - *v3++, v2);
      v6 -= 8;
      --v5;
    }
    while ( v5 );
    for ( ; v6; --v6 )
    {
      v8 = *(unsigned __int8 *)v3;
      v3 = (_QWORD *)((char *)v3 + 1);
      v1 = __ROR8__(v1 - v8, v2);
    }
    qword_1403CB018 = v1;
    qword_1403CB010 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  CmpLazyCommitTimer = 8LL;
  qword_1403CA418 = (__int64)CmpLazyCommitDpcRoutine;
  qword_1403CA3D0 = (__int64)&qword_1403CA3C8;
  qword_1403CA3C8 = (__int64)&qword_1403CA3C8;
  qword_1403CA188 = (__int64)&CmpDelayFreeRMListHead;
  CmpDelayFreeRMListHead = &CmpDelayFreeRMListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Blink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Flink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  CmpDelayFreeRMWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayFreeRMWorker;
  qword_1403CA218 = (__int64)CmpDelayFreeRMDpcRoutine;
  CmpDelayFreeRMTimer = 8LL;
  qword_1403CA250 = (__int64)&qword_1403CA248;
  qword_1403CA248 = (__int64)&qword_1403CA248;
  result = &CmpLightTransactionList;
  qword_1403CA420 = 0LL;
  qword_1403CA438 = 0LL;
  qword_1403CA410 = 0LL;
  qword_1403CA3D8 = 0LL;
  qword_1403CA3F8 = 0LL;
  CmpDelayFreeRMLock.Owner = 0LL;
  CmpDelayFreeRMLock.Contention = 0;
  CmpDelayFreeRMLock.Event.Header.SignalState = 0;
  CmpDelayFreeRMWorkItem.Parameter = 0LL;
  CmpDelayFreeRMWorkItem.List.Flink = 0LL;
  qword_1403CA220 = 0LL;
  qword_1403CA238 = 0LL;
  qword_1403CA210 = 0LL;
  qword_1403CA258 = 0LL;
  qword_1403CA278 = 0LL;
  qword_1403CA368 = (__int64)&CmpLightTransactionList;
  CmpLightTransactionList = (__int64)&CmpLightTransactionList;
  CmpLazyCommitDpc = 275;
  CmpDelayFreeRMLock.Count = 1;
  LOWORD(CmpDelayFreeRMLock.Event.Header.Lock) = 1;
  CmpDelayFreeRMLock.Event.Header.Size = 6;
  CmpDelayFreeRMDpc = 275;
  return result;
}
