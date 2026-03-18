/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x14007BE70
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140750614 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140750968 (NtMapUserPhysicalPagesScatter.c)
 *     MiCommitEnclavePages @ 0x1407514F0 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiProtectEnclavePages @ 0x140752874 (MiProtectEnclavePages.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rsi
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v7; // rcx
  int SessionId; // eax
  bool v9; // zf
  int v10; // eax
  ULONG_PTR v11; // rbx
  unsigned __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned __int64 *v16; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // si
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h]
  unsigned int v20; // [rsp+78h] [rbp+20h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v18 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( !AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        goto LABEL_28;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      AbEntrySummary = CurrentThread->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    v19 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    v2 = (__int64)&CurrentThread->LockEntries[v7];
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
      *(_DWORD *)(v2 + 40) = SessionId;
      *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v18);
      v9 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v9
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_13;
    }
LABEL_28:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_10;
  }
LABEL_13:
  v10 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v10 & 1) != 0 )
  {
    v13 = ((unsigned __int64)(v10 & 0xFFFFFFF8) >> 4) & 0x1FF;
    v14 = ((v10 & 0xFFFFFFF8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v15, v14);
    v20 = v15;
    v16 = (unsigned __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v15 - 2)
                                         + 8LL * (v14 ^ (1 << v15))
                                         + 8)
                             + 8 * v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v16, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v16, v2, BugCheckParameter2);
    v11 = (ULONG_PTR)v16;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v2, BugCheckParameter2);
    v11 = BugCheckParameter2 | 1;
  }
  if ( !v4 )
    v11 |= 2uLL;
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return v11;
}
