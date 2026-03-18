/*
 * XREFs of BcdCreateObject @ 0x140778B64
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402898F4 (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x14070B380 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14077A55C (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1401349DC (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x140134AD0 (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x1405AFE48 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1405B025C (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x140778F1C (BiCreateObject.c)
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
