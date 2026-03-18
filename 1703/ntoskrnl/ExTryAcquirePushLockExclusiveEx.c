/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x14011CE80
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14025328C (EtwTraceAutoBoostEntryExhaustion.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  _KLOCK_ENTRY *v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // ecx
  __int64 v6; // rax
  int SessionId; // eax
  __int64 v8; // rcx
  __int16 v9; // ax
  unsigned __int8 AbOrphanedEntrySummary; // di
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v12 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      goto LABEL_24;
    if ( !CurrentThread->AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_6:
        if ( v2 )
        {
          if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
            && byte_14036D700[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
          }
          else
          {
            SessionId = -1;
          }
          v2->LockState.SessionId = SessionId;
          v2->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
LABEL_11:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, BugCheckParameter2, &v12);
          v9 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v9;
          if ( !v9
            && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v8);
          }
          goto LABEL_14;
        }
LABEL_24:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
        goto LABEL_11;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v6, AbEntrySummary);
    v13 = v6;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    v2 = &CurrentThread->LockEntries[v6];
    goto LABEL_6;
  }
LABEL_14:
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2, v2);
    return 0;
  }
  else
  {
    if ( v2 )
      v2->AcquiredByte |= 1u;
    return 1;
  }
}
