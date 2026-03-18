/*
 * XREFs of MiCreateSystemWsles @ 0x14006A794
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1404AF6B0 (MiCommitPageTablesForVad.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     MiComputeProcessUserVa @ 0x1404ED4D4 (MiComputeProcessUserVa.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
