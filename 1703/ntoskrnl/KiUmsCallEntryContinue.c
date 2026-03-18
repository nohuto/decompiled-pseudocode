/*
 * XREFs of KiUmsCallEntryContinue @ 0x140192740
 * Callers:
 *     <none>
 * Callees:
 *     KiSwapToUmsThreadContinue @ 0x140207E40 (KiSwapToUmsThreadContinue.c)
 */

__int64 KiUmsCallEntryContinue()
{
  _enable();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  return KiSwapToUmsThreadContinue();
}
