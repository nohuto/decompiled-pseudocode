/*
 * XREFs of _TlgCreateSz @ 0x1401F8C50
 * Callers:
 *     MiLogWsEmptyControl @ 0x14007E9D4 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14007F7C0 (MiLogTrimWs.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400B1DBC (MmNotifyProcessInSwapTrigger.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14020B310 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14020B504 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14020B5F4 (MiLogResetPagesCommitRelease.c)
 *     PnpCompareInterruptInformation @ 0x140583F04 (PnpCompareInterruptInformation.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     MiLogCreateImageFileMapFailure @ 0x1406B5128 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406B58F4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1408039CC (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = File;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}
