/*
 * XREFs of ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094F98
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094EC4 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C009A0FC (-ReportState@VIDMM_DMA_POOL@@QEAAXXZ.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C009EB88 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3188 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A31FC (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00A53F4 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  unsigned int j; // esi
  struct _LIST_ENTRY *k; // rdi
  VIDMM_GLOBAL *m; // rdi
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 926); ++i )
    VIDMM_SEGMENT::ReportSegment(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * i));
  for ( j = 0; j < *((_DWORD *)this + 1604); ++j )
  {
    if ( *((_QWORD *)this + j + 143) )
      VIDMM_DMA_POOL::ReportState(*((VIDMM_DMA_POOL **)this + j + 79));
  }
  if ( *((_DWORD *)this + 926) )
  {
    do
      VIDMM_SEGMENT::ReportSegmentState(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * v1++));
    while ( v1 < *((_DWORD *)this + 926) );
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 300LL) & 1) != 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v7,
      (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
    for ( k = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
          k != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
          k = k->Flink )
    {
      VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates((VIDMM_RECYCLE_HEAP_MGR *)&k[-91].Blink);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  }
  VIDMM_GLOBAL::ReportProcessStates((struct _KTHREAD **)this);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v7, (struct _KTHREAD **)this + 5121);
  for ( m = (VIDMM_GLOBAL *)*((_QWORD *)this + 5126); m != (VIDMM_GLOBAL *)((char *)this + 41008); m = *(VIDMM_GLOBAL **)m )
    VIDMM_GLOBAL::ReportProcessAdapterBudget(this, (VIDMM_GLOBAL *)((char *)m - 24));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  VIDMM_GLOBAL::ReportPagingProcessState(this);
}
