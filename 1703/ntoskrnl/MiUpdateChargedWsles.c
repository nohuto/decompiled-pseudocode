/*
 * XREFs of MiUpdateChargedWsles @ 0x14020E2AC
 * Callers:
 *     MiDeleteVadBitmap @ 0x140499A8C (MiDeleteVadBitmap.c)
 *     MiComputeProcessUserVa @ 0x14049E434 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 */

LONG *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  LONG *result; // rax
  unsigned __int64 v2; // rdx

  result = MiGetSharedVm(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)result + 6, v2);
  return result;
}
