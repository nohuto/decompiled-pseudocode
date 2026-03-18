/*
 * XREFs of ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009CE18
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C0066DF4 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C007C420 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009CC94 (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009CD44 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C00A2514 (-ReportState@VIDMM_DMA_POOL@@QEAAXXZ.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C00A6C48 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AB7E4 (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int i; // esi
  unsigned int j; // esi
  struct _LIST_ENTRY *k; // rdi
  VIDMM_GLOBAL *m; // rdi
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 926); ++i )
    VIDMM_SEGMENT::ReportSegment(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * i), a2, a3);
  for ( j = 0; j < *((_DWORD *)this + 1604); ++j )
  {
    if ( *((_QWORD *)this + j + 143) )
      VIDMM_DMA_POOL::ReportState(*((VIDMM_DMA_POOL **)this + j + 79));
  }
  if ( *((_DWORD *)this + 926) )
  {
    do
      VIDMM_SEGMENT::ReportSegmentState(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * v3++));
    while ( v3 < *((_DWORD *)this + 926) );
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 300LL) & 1) != 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v9,
      (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
    for ( k = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
          k != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
          k = k->Flink )
    {
      VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates((VIDMM_RECYCLE_HEAP_MGR *)&k[-91].Blink);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  }
  VIDMM_GLOBAL::ReportProcessStates((struct _KTHREAD **)this);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v9, (struct _KTHREAD **)this + 5121);
  for ( m = (VIDMM_GLOBAL *)*((_QWORD *)this + 5126); m != (VIDMM_GLOBAL *)((char *)this + 41008); m = *(VIDMM_GLOBAL **)m )
    VIDMM_GLOBAL::ReportProcessAdapterBudget(this, (struct _KTHREAD **)m - 3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  VIDMM_GLOBAL::ReportPagingProcessState(this);
}
