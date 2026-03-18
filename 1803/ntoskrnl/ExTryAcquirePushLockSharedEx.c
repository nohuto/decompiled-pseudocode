/*
 * XREFs of ExTryAcquirePushLockSharedEx @ 0x1400A2630
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400A27C0 (ExfTryAcquirePushLockShared.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

char __fastcall ExTryAcquirePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  _KLOCK_ENTRY *v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rax
  char v6; // cl
  int SessionId; // eax
  bool v8; // zf
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v11 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      goto LABEL_25;
    LOBYTE(v5) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v5 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_6:
        if ( v2 )
        {
          if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
            && byte_1403CCF90[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
          KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v11);
          v8 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v8
            && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          goto LABEL_14;
        }
LABEL_25:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
        goto LABEL_11;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v5) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
      CurrentThread->AbEntrySummary = v5;
    }
    v6 = v5;
    _BitScanForward((unsigned int *)&v5, (unsigned __int8)v5);
    v12 = v5;
    CurrentThread->AbEntrySummary = v6 & ~(1 << v5);
    v2 = &CurrentThread->LockEntries[v5];
    goto LABEL_6;
  }
LABEL_14:
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockShared(BugCheckParameter2) )
  {
    if ( v2 )
      v2->AcquiredByte |= 1u;
    return 1;
  }
  else
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2, v2);
    return 0;
  }
}
