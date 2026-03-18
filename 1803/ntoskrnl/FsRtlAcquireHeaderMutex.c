/*
 * XREFs of FsRtlAcquireHeaderMutex @ 0x140103650
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x14007C42C (FsRtlpWaitForIoAtEof.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

volatile signed __int32 *__fastcall FsRtlAcquireHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v5; // rsi
  __int64 v6; // rax
  char v7; // cl
  int v8; // eax
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // di
  volatile signed __int32 *result; // rax
  unsigned __int8 AbOrphanedEntrySummary; // bl
  int v13; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v14; // [rsp+58h] [rbp+10h]
  int v15; // [rsp+60h] [rbp+18h]

  v14 = a2;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v2 + 48);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v6 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_17;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v6) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
    CurrentThread->AbEntrySummary = v6;
  }
  v7 = v6;
  _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
  v15 = v6;
  CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
  v3 = (__int64)&CurrentThread->LockEntries[v6];
  if ( !v3 )
  {
LABEL_17:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_7;
  }
  LOBYTE(v8) = MmIsSessionAddress(v5);
  if ( v8 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v3 + 40) = SessionId;
  *(_QWORD *)(v3 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v5, &v13);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, v3);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  result = v14;
  if ( v14 )
  {
    result = v14;
    _InterlockedIncrement(v14);
  }
  return result;
}
