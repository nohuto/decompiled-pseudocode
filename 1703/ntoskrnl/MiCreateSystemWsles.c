/*
 * XREFs of MiCreateSystemWsles @ 0x14014358C
 * Callers:
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     MiComputeProcessUserVa @ 0x14049E434 (MiComputeProcessUserVa.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
