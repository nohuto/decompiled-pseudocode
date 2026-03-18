/*
 * XREFs of MiInitializeInPageSupport @ 0x14002AA00
 * Callers:
 *     MiGetInPageSupportBlock @ 0x14002A960 (MiGetInPageSupportBlock.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x14021BD28 (MiPfIssueCoalescedSupport.c)
 *     MiGetReadyInPageBlock @ 0x1406E2624 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 */

char __fastcall MiInitializeInPageSupport(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // edx
  unsigned int v7; // edx
  char v8; // cl
  $B476B70DB57F76B110DA5B9238C3E934 *v9; // rax
  struct _KTHREAD *v10; // rsi
  unsigned int AbEntrySummary; // ecx
  __int64 v12; // rax
  int SessionId; // eax
  int v15; // eax
  unsigned __int8 AbOrphanedEntrySummary; // di
  int v18; // [rsp+48h] [rbp+10h] BYREF

  *(_WORD *)(BugCheckParameter2 + 32) = 0;
  *(_BYTE *)(BugCheckParameter2 + 34) = 6;
  v2 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 40;
  *(_QWORD *)(BugCheckParameter2 + 40) = BugCheckParameter2 + 40;
  *(_WORD *)(BugCheckParameter2 + 56) = 0;
  *(_BYTE *)(BugCheckParameter2 + 58) = 6;
  *(_DWORD *)(BugCheckParameter2 + 60) = 0;
  *(_QWORD *)(BugCheckParameter2 + 72) = BugCheckParameter2 + 64;
  *(_QWORD *)(BugCheckParameter2 + 64) = BugCheckParameter2 + 64;
  *(_DWORD *)(BugCheckParameter2 + 188) = 0;
  if ( (a2 & 1) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 189) |= 0x20u;
  *(_DWORD *)(BugCheckParameter2 + 176) = 1;
  *(_QWORD *)(BugCheckParameter2 + 248) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 200) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
  *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  *(_QWORD *)(BugCheckParameter2 + 160) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(BugCheckParameter2 + 152) = CurrentThread;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v7 = (Queue >> 9) & 7;
  }
  else
  {
    v7 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v15 = 2;
      if ( v7 < 2 )
        v15 = v7;
      v7 = v15;
    }
  }
  if ( v7 > 5 )
  {
    LOBYTE(v7) = 5;
    v8 = 5;
  }
  else
  {
    *(_BYTE *)(BugCheckParameter2 + 191) |= 4u;
    if ( v7 )
      v8 = v7 - 1;
    else
      v8 = 0;
  }
  LOBYTE(v9) = *(_BYTE *)(BugCheckParameter2 + 190) & 0x88;
  *(_QWORD *)(BugCheckParameter2 + 208) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 190) = v7 & 7 | (unsigned __int8)v9 | (16 * (v8 & 7));
  if ( (a2 & 2) != 0 )
  {
    v18 = 0;
    v10 = KeGetCurrentThread();
    --v10->SpecialApcDisable;
    if ( ++v10->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v10, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    if ( !v10->AbEntrySummary )
    {
      if ( !v10->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v10, BugCheckParameter2);
        goto LABEL_29;
      }
      AbOrphanedEntrySummary = v10->AbOrphanedEntrySummary;
      v10->AbOrphanedEntrySummary = 0;
      v10->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v10->AbEntrySummary;
    _BitScanForward((unsigned int *)&v12, AbEntrySummary);
    v10->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    v2 = (__int64)&v10->LockEntries[v12];
    if ( v2 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_1403899D0[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(v10->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v2 + 40) = SessionId;
      *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_16:
      --v10->AbAllocationRegionCount;
      LOBYTE(v9) = KiAbThreadRemoveBoosts(v10, BugCheckParameter2, &v18);
      if ( v10->SpecialApcDisable++ == -1 )
      {
        v9 = &v10->152;
        if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v9->ApcState.ApcListHead[0].Flink != v9 )
          LOBYTE(v9) = KiCheckForKernelApcDelivery();
      }
      *(_QWORD *)(BugCheckParameter2 + 208) = v2;
      if ( v2 )
        *(_BYTE *)(v2 + 26) |= 1u;
      return (char)v9;
    }
LABEL_29:
    _interlockedbittestandset((volatile signed __int32 *)&v10->116 + 1, 0x10u);
    goto LABEL_16;
  }
  return (char)v9;
}
