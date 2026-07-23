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

NTSTATUS __cdecl BcdCreateObject(
        HANDLE BcdStoreHandle,
        PGUID Identifier,
        PBCD_OBJECT_DESCRIPTION Description,
        PHANDLE BcdObjectHandle)
{
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
  NTSTATUS Object; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject(BcdStoreHandle, Identifier, Description, 0LL, BcdObjectHandle);
    if ( Object >= 0 )
    {
      if ( BiIsLinkedToFirmwareVariable((__int64)*BcdObjectHandle, 0LL) )
        BiSetFirmwareModified((__int64)BcdStoreHandle, 1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
