/*
 * XREFs of FlushLookUpTableBucket @ 0x140084338
 * Callers:
 *     LookUpTableFlushComplete @ 0x14052D76C (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x14052D964 (LookUpTableFlushPartial.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     FlattenEventEntryTree @ 0x140084488 (FlattenEventEntryTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     FlushEventEntryList @ 0x14052D9E0 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int64 *v4; // rdi
  KIRQL v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  const EVENT_DESCRIPTOR *v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  char v14; // cl

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v4 = (unsigned __int64 *)(a1 + 272);
  v5 = 0;
  v6 = KeAbPreAcquire(a1 + 272, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( !*(_BYTE *)(a1 + 373) )
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v8 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v9 = FlattenEventEntryTree(v8);
  *(_DWORD *)(a1 + 256) -= v9;
  v13 = v9;
  if ( !*(_BYTE *)(a1 + 373) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 280));
    __writecr8(v5);
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4, v10, v11, v12);
  KeAbPostRelease((ULONG_PTR)v4);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v8);
  return v13;
}
