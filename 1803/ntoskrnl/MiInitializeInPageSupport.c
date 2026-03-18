/*
 * XREFs of MiInitializeInPageSupport @ 0x140127F00
 * Callers:
 *     MiGetInPageSupportBlock @ 0x140057704 (MiGetInPageSupportBlock.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140257EB0 (MiPfIssueCoalescedSupport.c)
 *     MiGetReadyInPageBlock @ 0x14074D190 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

char __fastcall MiInitializeInPageSupport(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // ecx
  unsigned int PagePriorityThread; // ecx
  char v7; // dl
  $005F0E83B22994B61E86C72E0CE43C71 *v8; // rax
  struct _KTHREAD *v9; // rdi
  unsigned __int8 AbEntrySummary; // cl
  __int64 v11; // rax
  __int64 v12; // rsi
  int SessionId; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v17; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)(BugCheckParameter2 + 32) = 0;
  *(_BYTE *)(BugCheckParameter2 + 34) = 6;
  *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  v2 = a2;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 40;
  *(_QWORD *)(BugCheckParameter2 + 40) = BugCheckParameter2 + 40;
  *(_WORD *)(BugCheckParameter2 + 56) = 0;
  *(_BYTE *)(BugCheckParameter2 + 58) = 6;
  *(_DWORD *)(BugCheckParameter2 + 60) = 0;
  *(_QWORD *)(BugCheckParameter2 + 72) = BugCheckParameter2 + 64;
  *(_QWORD *)(BugCheckParameter2 + 64) = BugCheckParameter2 + 64;
  *(_DWORD *)(BugCheckParameter2 + 188) = 0;
  if ( (a2 & 1) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 189) = 32;
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
    PagePriorityThread = (Queue >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( PagePriorityThread > 5 )
  {
    LOBYTE(PagePriorityThread) = 5;
    v7 = 5;
  }
  else
  {
    *(_BYTE *)(BugCheckParameter2 + 191) |= 4u;
    if ( PagePriorityThread )
      v7 = PagePriorityThread - 1;
    else
      v7 = 0;
  }
  LOBYTE(v8) = *(_BYTE *)(BugCheckParameter2 + 190) & 0x88;
  *(_QWORD *)(BugCheckParameter2 + 208) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 190) = PagePriorityThread & 7 | (unsigned __int8)v8 | (16 * (v7 & 7));
  if ( (v2 & 2) != 0 )
  {
    v17 = 0;
    v9 = KeGetCurrentThread();
    --v9->SpecialApcDisable;
    if ( ++v9->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v9, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    AbEntrySummary = v9->AbEntrySummary;
    if ( !AbEntrySummary )
    {
      if ( !v9->AbOrphanedEntrySummary )
      {
        v12 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v9, BugCheckParameter2);
        goto LABEL_26;
      }
      AbOrphanedEntrySummary = v9->AbOrphanedEntrySummary;
      v9->AbOrphanedEntrySummary = 0;
      AbEntrySummary = AbOrphanedEntrySummary | v9->AbEntrySummary;
      v9->AbEntrySummary = AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v11, AbEntrySummary);
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v11);
    v12 = (__int64)&v9->LockEntries[v11];
    if ( v12 )
    {
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v12 + 40) = SessionId;
      *(_QWORD *)(v12 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_15;
    }
LABEL_26:
    _interlockedbittestandset((volatile signed __int32 *)&v9->116 + 1, 0x10u);
LABEL_15:
    --v9->AbAllocationRegionCount;
    LOBYTE(v8) = KiAbThreadRemoveBoosts((ULONG_PTR)v9, BugCheckParameter2, (__int64)&v17);
    if ( v9->SpecialApcDisable++ == -1 )
    {
      v8 = &v9->152;
      if ( ($005F0E83B22994B61E86C72E0CE43C71 *)v8->ApcState.ApcListHead[0].Flink != v8 )
        LOBYTE(v8) = KiCheckForKernelApcDelivery();
    }
    *(_QWORD *)(BugCheckParameter2 + 208) = v12;
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
  }
  *(_QWORD *)(BugCheckParameter2 + 256) = 0LL;
  return (char)v8;
}
