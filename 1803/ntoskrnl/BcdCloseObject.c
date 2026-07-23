/*
 * XREFs of BcdCloseObject @ 0x140608500
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402BEE64 (WheaPersistOfflinedPage.c)
 *     PopBcdSetPendingResume @ 0x1405ECAD4 (PopBcdSetPendingResume.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     PopBcdClearPendingResume @ 0x1406064FC (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140606DDC (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14076E950 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1407939B4 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1407E1D7C (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1407E2D14 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1407E2F44 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1407E32B0 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1407E3440 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1407E3DA8 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x1407E4690 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1407E58FC (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1407E5BDC (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1401643C4 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140609030 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1406091E0 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCloseObject(HANDLE BcdObjectHandle)
{
  __int64 v2; // rcx
  char v3; // di
  NTSTATUS result; // eax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdObjectHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    BiCloseKey(BcdObjectHandle);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}
