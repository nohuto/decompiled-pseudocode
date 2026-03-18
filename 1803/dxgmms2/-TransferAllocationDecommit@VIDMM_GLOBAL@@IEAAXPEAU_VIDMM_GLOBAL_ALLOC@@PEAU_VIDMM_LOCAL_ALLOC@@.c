/*
 * XREFs of ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00A3C54
 * Callers:
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00634E8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::TransferAllocationDecommit(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        struct _VIDMM_LOCAL_ALLOC *a4)
{
  if ( a3 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 32LL) + 352LL),
      -*((_QWORD *)a2 + 1));
  if ( a4 )
  {
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 32LL) + 352LL),
      *((_QWORD *)a2 + 1));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 32LL) + 344LL));
  }
}
