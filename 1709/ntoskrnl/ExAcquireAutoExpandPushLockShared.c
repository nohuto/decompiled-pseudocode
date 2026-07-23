/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x140101100
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1406E69F4 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406E6E70 (NtMapUserPhysicalPagesScatter.c)
 *     MiCommitEnclavePages @ 0x1406E7A90 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1406E8318 (MiCreateHardwareEnclave.c)
 *     MiProtectEnclavePages @ 0x1406E8DE4 (MiProtectEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1406E9220 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rsi
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v7; // rcx
  int SessionId; // eax
  bool v9; // zf
  int v10; // eax
  ULONG_PTR v11; // rbx
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  signed __int64 *v16; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // si
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h]
  int v20; // [rsp+78h] [rbp+20h]

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
    if ( !CurrentThread->AbEntrySummary )
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
    }
    AbEntrySummary = CurrentThread->AbEntrySummary;
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    v19 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    v2 = (__int64)&CurrentThread->LockEntries[v7];
    if ( v2 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_1403899D0[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v2 + 40) = SessionId;
      *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_10:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v18);
      v9 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v9
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
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
    v13 = v10 & 0xFFFFFFF8;
    v14 = ((unsigned int)v13 >> 13) & 0x3FFFF;
    _BitScanReverse(&v15, v14);
    v20 = v15 - 2;
    v16 = (signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v15 - 2)
                                       + 8LL * (v14 ^ (1 << v15))
                                       + 8)
                           + 8 * ((v13 >> 4) & 0x1FF));
    if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v16, v2, BugCheckParameter2);
    v11 = (ULONG_PTR)v16;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, v2, BugCheckParameter2);
    v11 = BugCheckParameter2 | 1;
  }
  if ( !v4 )
    v11 |= 2uLL;
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return v11;
}
