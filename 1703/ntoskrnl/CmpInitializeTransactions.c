/*
 * XREFs of CmpInitializeTransactions @ 0x140823094
 * Callers:
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
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
  qword_14036ABB8 = (__int64)&CmpRmListHead;
  CmpRmListHead = (__int64)&CmpRmListHead;
  CmpRmListLock.Event.Header.WaitListHead.Blink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpRmListLock.Event.Header.WaitListHead.Flink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Blink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Flink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpLazyCommitWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpLazyCommitWorker;
  qword_14036AEC8 = (__int64)&CmpLazyCommitListHead;
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
  if ( !qword_14036BB90 )
  {
    v1 = __rdtsc();
    v2 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v1) << 32) | (unsigned int)v1) >> 4)) ^ 0xFEDLL;
    if ( !v2 )
      v2 = 1LL;
    qword_14036BB90 = v2;
    v3 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x54FLL;
    qword_14036BB98 = v3;
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
    qword_14036BBA8 = v2;
    qword_14036BBA0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  CmpLazyCommitTimer = 8LL;
  qword_14036AF38 = (__int64)CmpLazyCommitDpcRoutine;
  qword_14036AEF0 = (__int64)&qword_14036AEE8;
  qword_14036AEE8 = (__int64)&qword_14036AEE8;
  qword_14036AC08 = (__int64)&CmpDelayFreeRMListHead;
  CmpDelayFreeRMListHead = &CmpDelayFreeRMListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Blink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Flink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  qword_14036AC70 = (__int64)CmpDelayFreeRMWorker;
  qword_14036AC98 = (__int64)CmpDelayFreeRMDpcRoutine;
  CmpDelayFreeRMTimer = 8LL;
  qword_14036ACD0 = (__int64)&qword_14036ACC8;
  qword_14036ACC8 = (__int64)&qword_14036ACC8;
  result = &CmpLightTransactionList;
  qword_14036AF40 = 0LL;
  qword_14036AF58 = 0LL;
  qword_14036AF30 = 0LL;
  qword_14036AEF8 = 0LL;
  qword_14036AF18 = 0LL;
  CmpDelayFreeRMLock.Owner = 0LL;
  CmpDelayFreeRMLock.Contention = 0;
  CmpDelayFreeRMLock.Event.Header.SignalState = 0;
  qword_14036AC78 = 0LL;
  CmpDelayFreeRMWorkItem = 0LL;
  qword_14036ACA0 = 0LL;
  qword_14036ACB8 = 0LL;
  qword_14036AC90 = 0LL;
  qword_14036ACD8 = 0LL;
  qword_14036ACF8 = 0LL;
  qword_14036AE88 = (__int64)&CmpLightTransactionList;
  CmpLightTransactionList = (__int64)&CmpLightTransactionList;
  CmpLazyCommitDpc = 275;
  CmpDelayFreeRMLock.Count = 1;
  LOWORD(CmpDelayFreeRMLock.Event.Header.Lock) = 1;
  CmpDelayFreeRMLock.Event.Header.Size = 6;
  CmpDelayFreeRMDpc = 275;
  return result;
}
