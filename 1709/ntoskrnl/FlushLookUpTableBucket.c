/*
 * XREFs of FlushLookUpTableBucket @ 0x1400B4A48
 * Callers:
 *     LookUpTableFlushComplete @ 0x1404F06DC (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1404F08D4 (LookUpTableFlushPartial.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     FlattenEventEntryTree @ 0x1400B4BA8 (FlattenEventEntryTree.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     FlushEventEntryList @ 0x1404F0950 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int64 *v4; // rdi
  KIRQL v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  const EVENT_DESCRIPTOR *v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // ebp
  char v11; // r8

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v4 = (unsigned __int64 *)(a1 + 272);
  v5 = 0;
  v6 = KeAbPreAcquire(a1 + 272, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (__int16 *)v4);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( !*(_BYTE *)(a1 + 373) )
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v8 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v9 = FlattenEventEntryTree(v8);
  *(_DWORD *)(a1 + 256) -= v9;
  v10 = v9;
  if ( !*(_BYTE *)(a1 + 373) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 280));
    __writecr8(v5);
  }
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v8);
  return v10;
}
