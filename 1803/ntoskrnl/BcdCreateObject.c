/*
 * XREFs of BcdCreateObject @ 0x1407E17D0
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402BEE64 (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x14076E950 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1407E2F44 (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1401642D0 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x1401643C4 (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140609030 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1406091E0 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140609238 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x1407E1B88 (BiCreateObject.c)
 */

NTSTATUS __fastcall BcdCreateObject(__int64 a1, int a2, int a3, __int64 *a4)
{
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
  int Object; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0, (__int64)a4);
    if ( Object >= 0 )
    {
      if ( BiIsLinkedToFirmwareVariable(*a4, 0LL) )
        BiSetFirmwareModified(a1, 1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
