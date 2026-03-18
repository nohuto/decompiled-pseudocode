/*
 * XREFs of CmpInitializeTransactions @ 0x14083A650
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 *CmpInitializeTransactions()
{
  __int64 *result; // rax
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r10
  _QWORD *v4; // rdx
  const char *v5; // rax
  __int64 v6; // rax
  int v7; // r9d
  __int64 v8; // rax
  _BYTE v9[2]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+22h] [rbp-16h]

  CmpRmListLock.Event.Header.Size = 6;
  qword_140386B58 = (__int64)&CmpRmListHead;
  CmpRmListHead = (__int64)&CmpRmListHead;
  CmpRmListLock.Event.Header.WaitListHead.Blink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpRmListLock.Event.Header.WaitListHead.Flink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Blink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Flink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpLazyCommitWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpLazyCommitWorker;
  qword_140386E68 = (__int64)&CmpLazyCommitListHead;
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
  if ( !qword_140387E10 )
  {
    v1 = __rdtsc();
    v2 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v1) << 32) | (unsigned int)v1) >> 4)) ^ 0xFEDLL;
    if ( !v2 )
      v2 = 1LL;
    qword_140387E10 = v2;
    v3 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x54FLL;
    qword_140387E18 = v3;
    __sidt(v9);
    v4 = v10;
    v5 = (const char *)v10;
    if ( v10 < v10 + 106 )
    {
      do
      {
        _mm_prefetch(v5, 0);
        v5 += 64;
      }
      while ( v5 < (const char *)v10 + 848 );
    }
    v6 = 106LL;
    v7 = 848;
    do
    {
      v2 = __ROR8__(v2 - *v4++, v3);
      v7 -= 8;
      --v6;
    }
    while ( v6 );
    for ( ; v7; --v7 )
    {
      v8 = *(unsigned __int8 *)v4;
      v4 = (_QWORD *)((char *)v4 + 1);
      v2 = __ROR8__(v2 - v8, v3);
    }
    qword_140387E28 = v2;
    qword_140387E20 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  CmpLazyCommitTimer = 8LL;
  qword_140386ED8 = (__int64)CmpLazyCommitDpcRoutine;
  qword_140386E90 = (__int64)&qword_140386E88;
  qword_140386E88 = (__int64)&qword_140386E88;
  qword_140386BA8 = (__int64)&CmpDelayFreeRMListHead;
  CmpDelayFreeRMListHead = &CmpDelayFreeRMListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Blink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Flink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  CmpDelayFreeRMWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayFreeRMWorker;
  qword_140386C38 = (__int64)CmpDelayFreeRMDpcRoutine;
  CmpDelayFreeRMTimer = 8LL;
  qword_140386C70 = (__int64)&qword_140386C68;
  qword_140386C68 = (__int64)&qword_140386C68;
  result = &CmpLightTransactionList;
  qword_140386EE0 = 0LL;
  qword_140386EF8 = 0LL;
  qword_140386ED0 = 0LL;
  qword_140386E98 = 0LL;
  qword_140386EB8 = 0LL;
  CmpDelayFreeRMLock.Owner = 0LL;
  CmpDelayFreeRMLock.Contention = 0;
  CmpDelayFreeRMLock.Event.Header.SignalState = 0;
  CmpDelayFreeRMWorkItem.Parameter = 0LL;
  CmpDelayFreeRMWorkItem.List.Flink = 0LL;
  qword_140386C40 = 0LL;
  qword_140386C58 = 0LL;
  qword_140386C30 = 0LL;
  qword_140386C78 = 0LL;
  qword_140386C98 = 0LL;
  qword_140386E28 = (__int64)&CmpLightTransactionList;
  CmpLightTransactionList = (__int64)&CmpLightTransactionList;
  CmpLazyCommitDpc = 275;
  CmpDelayFreeRMLock.Count = 1;
  LOWORD(CmpDelayFreeRMLock.Event.Header.Lock) = 1;
  CmpDelayFreeRMLock.Event.Header.Size = 6;
  CmpDelayFreeRMDpc = 275;
  return result;
}
