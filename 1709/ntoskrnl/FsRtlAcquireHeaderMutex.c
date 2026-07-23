/*
 * XREFs of FsRtlAcquireHeaderMutex @ 0x140083FE0
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140100900 (FsRtlpWaitForIoAtEof.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 */

volatile signed __int32 *__fastcall FsRtlAcquireHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v5; // rsi
  unsigned int AbEntrySummary; // ecx
  __int64 v7; // rax
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *result; // rax
  unsigned __int8 AbOrphanedEntrySummary; // di
  int v12; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v13; // [rsp+58h] [rbp+10h]
  int v14; // [rsp+60h] [rbp+18h]

  v13 = a2;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v2 + 48);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_17;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  v14 = v7;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v3 = (__int64)&CurrentThread->LockEntries[v7];
  if ( !v3 )
  {
LABEL_17:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_7;
  }
  if ( MmIsSessionAddress(v5) )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v3 + 40) = SessionId;
  *(_QWORD *)(v3 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v5, &v12);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, (PRTL_BALANCED_NODE)v3);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  result = v13;
  if ( v13 )
  {
    result = v13;
    _InterlockedIncrement(v13);
  }
  return result;
}
