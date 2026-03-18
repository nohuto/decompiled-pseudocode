/*
 * XREFs of ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C0072CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C006817C (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 */

void __fastcall VidMmRangeCurationThread(volatile __int32 *a1, __int64 a2, __int64 a3)
{
  _InterlockedExchange(a1 + 347, 0);
  VIDMM_RECYCLE_HEAP_MGR::CurationThread((VIDMM_RECYCLE_HEAP_MGR *)a1, a2, a3);
}
