/*
 * XREFs of MiUpdateChargedWsles @ 0x14026BA14
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1404AF6B0 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x1404ED4D4 (MiComputeProcessUserVa.c)
 *     MiDeleteVadBitmap @ 0x140512E90 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 */

LONG *__fastcall MiUpdateChargedWsles(__int64 a1)
{
  LONG *result; // rax
  unsigned __int64 v2; // rdx

  result = MiGetSharedVm(a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)result + 7, v2);
  return result;
}
