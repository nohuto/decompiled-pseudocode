/*
 * XREFs of ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C006D300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmRangeCurationThread(VIDMM_RECYCLE_HEAP_MGR *this, __int64 a2, __int64 a3)
{
  _InterlockedExchange((volatile __int32 *)this + 347, 0);
  VIDMM_RECYCLE_HEAP_MGR::CurationThread(this, a2, a3);
}
