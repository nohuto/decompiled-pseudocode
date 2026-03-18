/*
 * XREFs of FlushLookUpTableBucket @ 0x140030D44
 * Callers:
 *     LookUpTableFlushPartial @ 0x14044C674 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1405CAEC8 (LookUpTableFlushComplete.c)
 * Callees:
 *     FlattenEventEntryTree @ 0x140030E58 (FlattenEventEntryTree.c)
 *     AcquireAggregateSessionLockForFlush @ 0x140030EA8 (AcquireAggregateSessionLockForFlush.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     FlushEventEntryList @ 0x14044C6F0 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned __int8 v5; // al
  const EVENT_DESCRIPTOR *v6; // rbp
  unsigned __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // esi

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v5 = AcquireAggregateSessionLockForFlush();
  v6 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v7 = v5;
  v8 = FlattenEventEntryTree(v6);
  *(_DWORD *)(a1 + 256) -= v8;
  v9 = v8;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 336));
  __writecr8(v7);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 328), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 328);
  KeAbPostRelease(a1 + 328);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 32LL), v6);
  return v9;
}
