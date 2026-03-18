/*
 * XREFs of ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D844
 * Callers:
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0055A58 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C006EF50 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006F3E8 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0071098 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0002D80 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyRange(VIDMM_RECYCLE_HEAP_MGR *this, struct _SLIST_ENTRY *a2, __int64 a3)
{
  __int64 v5; // rax
  VIDMM_RECYCLE_BLOCK *v6; // rcx
  __int64 v8; // rbx

  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0p((__int64)this, &EventRecycleRangeDestroy, a3, a2);
  v5 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  WdLogEvent5_WdEvent(v5);
  v6 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)&a2[4].Next + 1);
  if ( (*(_QWORD *)v6)-- == 1LL )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v6);
  v8 = *((_QWORD *)this + 164);
  ++*(_DWORD *)(v8 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v8) >= *(_WORD *)(v8 + 16) )
  {
    ++*(_DWORD *)(v8 + 32);
    (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v8 + 56))(a2, v8);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v8, a2);
  }
}
