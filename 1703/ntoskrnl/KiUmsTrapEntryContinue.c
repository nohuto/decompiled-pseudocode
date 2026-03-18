/*
 * XREFs of KiUmsTrapEntryContinue @ 0x140192580
 * Callers:
 *     <none>
 * Callees:
 *     KiSwapToUmsThreadContinue @ 0x140207E40 (KiSwapToUmsThreadContinue.c)
 */

__int64 __fastcall KiUmsTrapEntryContinue()
{
  __int64 v0; // rbp

  _enable();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  KiSwapToUmsThreadContinue();
  return *(_QWORD *)(v0 - 120);
}
