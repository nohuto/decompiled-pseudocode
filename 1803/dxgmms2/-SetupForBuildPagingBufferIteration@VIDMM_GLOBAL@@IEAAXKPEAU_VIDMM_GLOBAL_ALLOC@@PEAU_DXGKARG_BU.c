/*
 * XREFs of ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C005EDF8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00619A0 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0061B30 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0061D04 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0061E6C (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0061F10 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C006221C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00627D8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C009EDF0 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00A1984 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00A4134 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00A467C (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 * Callees:
 *     ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0062A24 (-AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4)
{
  __int64 v4; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  void *v10; // rcx
  void *v11; // rdx
  _QWORD *v12; // rax

  v4 = (unsigned int)a2;
  if ( a3 && (**((_DWORD **)a3 + 63) & 0x10000000) != 0 )
  {
    a4->pDmaBuffer = 0LL;
    a4->pDmaBufferPrivateData = 0LL;
    a4->DmaSize = 0;
    a4->DmaBufferPrivateDataSize = 0;
    *((_QWORD *)this + (unsigned int)a2 + 335) = 0LL;
    *((_QWORD *)this + (unsigned int)a2 + 399) = 0LL;
  }
  else
  {
    v8 = *((_QWORD *)this + (unsigned int)a2 + 79);
    if ( (*(_DWORD *)(v8 + 32) & 4) == 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
      v12[7] = 0LL;
      v12[3] = 270LL;
      v12[4] = 29LL;
      v12[5] = v8;
      v12[6] = a3;
      WdLogEvent5_WdCriticalError(v12);
    }
    if ( a3 )
      VIDMM_GLOBAL::AddGlobalAllocReferenceToDmaBuffer(this, v4, a3);
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v4 + 143) + 56LL) + 368LL);
    *((_QWORD *)this + v4 + 335) = v9;
    v10 = (void *)(v9 + *((unsigned int *)this + v4 + 414));
    *((_QWORD *)this + v4 + 335) = v10;
    a4->pDmaBuffer = v10;
    v11 = (void *)(*((unsigned int *)this + v4 + 542) + *(_QWORD *)(*((_QWORD *)this + v4 + 143) + 128LL));
    *((_QWORD *)this + v4 + 399) = v11;
    a4->pDmaBufferPrivateData = v11;
    a4->DmaSize = *((_DWORD *)this + v4 + 29) - *((_DWORD *)this + v4 + 414);
    a4->DmaBufferPrivateDataSize = *((_DWORD *)this + v4 + 93) - *((_DWORD *)this + v4 + 542);
    a4->DmaBufferGpuVirtualAddress = *(_QWORD *)(*((_QWORD *)this + v4 + 143) + 96LL);
    a4->DmaBufferWriteOffset = *((_DWORD *)this + v4 + 414);
  }
}
