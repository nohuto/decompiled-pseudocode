/*
 * XREFs of BcdCloseObject @ 0x14058B28C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14025FD34 (WheaPersistOfflinedPage.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x14057B828 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x140589704 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x1405899F4 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406D5770 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140734E74 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140735EE8 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140736118 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1407363F8 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14073655C (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x140736E78 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140737628 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140738988 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
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
