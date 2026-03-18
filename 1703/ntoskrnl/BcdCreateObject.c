/*
 * XREFs of BcdCreateObject @ 0x1407348DC
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14025FD34 (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x1406D5770 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x140736118 (BiBindEfiBootManager.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     BiSetFirmwareModified @ 0x140265E08 (BiSetFirmwareModified.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14058BE10 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x140734C70 (BiCreateObject.c)
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
