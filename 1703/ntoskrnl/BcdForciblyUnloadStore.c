/*
 * XREFs of BcdForciblyUnloadStore @ 0x14057B770
 * Callers:
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     BiCleanupLoadedStores @ 0x14058A710 (BiCleanupLoadedStores.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x14014CEEC (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x14057B738 (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x14057B97C (BiUnloadHiveByHandle.c)
 *     BiIsSystemStore @ 0x14058A854 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdForciblyUnloadStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  NTSTATUS v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = 0;
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle) && BiIsSynchFirmwareEntries((char)BcdStoreHandle) )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v5 = BiExportStoreAlterationsToFirmware((__int64)BcdStoreHandle);
    }
    v6 = BiUnloadHiveByHandle(BcdStoreHandle);
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v5);
    else
      v5 = v6;
    LOBYTE(v7) = v3;
    BiReleaseBcdSyncMutant(v7);
  }
  else
  {
    BiLogMessage(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
  }
  return v5;
}
