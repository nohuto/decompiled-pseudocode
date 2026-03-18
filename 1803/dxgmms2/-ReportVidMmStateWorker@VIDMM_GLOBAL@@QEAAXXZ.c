/*
 * XREFs of ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A3324
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C006B704 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C007F2BC (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A31A8 (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A3250 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C00A93E0 (-ReportState@VIDMM_DMA_POOL@@QEAAXXZ.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C00AE134 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B409C (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  unsigned int i; // esi
  unsigned int v7; // esi
  struct _LIST_ENTRY *j; // rdi
  VIDMM_GLOBAL *k; // rdi
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 926);
  v4 = 0;
  for ( i = 0; i < v3; ++i )
  {
    VIDMM_SEGMENT::ReportSegment(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * i), a2, a3);
    v3 = *((_DWORD *)this + 926);
  }
  v7 = 0;
  if ( *((_DWORD *)this + 1748) )
  {
    do
    {
      if ( *((_QWORD *)this + v7 + 143) )
        VIDMM_DMA_POOL::ReportState(*((VIDMM_DMA_POOL **)this + v7 + 79));
      ++v7;
    }
    while ( v7 < *((_DWORD *)this + 1748) );
    v3 = *((_DWORD *)this + 926);
  }
  if ( v3 )
  {
    do
      VIDMM_SEGMENT::ReportSegmentState(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * v4++));
    while ( v4 < *((_DWORD *)this + 926) );
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 300LL) & 1) != 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v10,
      (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
    for ( j = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
          j != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
          j = j->Flink )
    {
      VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates((VIDMM_RECYCLE_HEAP_MGR *)&j[-100].Blink);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  }
  VIDMM_GLOBAL::ReportProcessStates(this);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v10, (VIDMM_GLOBAL *)((char *)this + 41544));
  for ( k = (VIDMM_GLOBAL *)*((_QWORD *)this + 5198); k != (VIDMM_GLOBAL *)((char *)this + 41584); k = *(VIDMM_GLOBAL **)k )
    VIDMM_GLOBAL::ReportProcessAdapterBudget(this, (struct _KTHREAD **)k - 3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  VIDMM_GLOBAL::ReportPagingProcessState(this);
}
