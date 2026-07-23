/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140111DC0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x140112130 (MmIsSessionAddress.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rbp
  __int64 v4; // rdi
  unsigned int AbEntrySummary; // ecx
  __int64 v6; // rax
  int SessionId; // eax
  __int64 result; // rax
  unsigned __int8 AbOrphanedEntrySummary; // di
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  v10 = 0;
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  if ( !v3->AbEntrySummary )
  {
    if ( !v3->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v3, BugCheckParameter2);
      goto LABEL_17;
    }
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    v3->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v3->AbEntrySummary;
  _BitScanForward((unsigned int *)&v6, AbEntrySummary);
  v11 = v6;
  v3->AbEntrySummary = AbEntrySummary & ~(1 << v6);
  v4 = (__int64)&v3->LockEntries[v6];
  if ( !v4 )
  {
LABEL_17:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0xFu);
    goto LABEL_7;
  }
  if ( (unsigned int)MmIsSessionAddress(BugCheckParameter2) )
    SessionId = MmGetSessionIdEx(v3->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v4 + 40) = SessionId;
  *(_QWORD *)(v4 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v3->Header.Lock, BugCheckParameter2, &v10);
  result = KiLeaveGuardedRegionUnsafe((__int64)v3);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter2, 0) )
    result = ExpAcquireFastMutexContended(BugCheckParameter2, (PRTL_BALANCED_NODE)v4);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  *(_QWORD *)(BugCheckParameter2 + 8) = v3;
  return result;
}
