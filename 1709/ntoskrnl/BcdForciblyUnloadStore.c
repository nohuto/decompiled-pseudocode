/*
 * XREFs of BcdForciblyUnloadStore @ 0x140778AAC
 * Callers:
 *     BiCleanupLoadedStores @ 0x1405ADCF8 (BiCleanupLoadedStores.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140134AD0 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x140134BA0 (BiIsSynchFirmwareEntries.c)
 *     BiIsSystemStore @ 0x1405AE8A0 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x1405AFE48 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140779704 (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x1407798B0 (BiUnloadHiveByHandle.c)
 */

NTSTATUS __cdecl BcdForciblyUnloadStore(HANDLE BcdStoreHandle)
{
  char IsOfflineHandle; // si
  NTSTATUS v3; // eax
  NTSTATUS v4; // r8d
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  NTSTATUS v8; // eax

  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 >= 0 )
  {
    v6 = 0;
    if ( BiIsSystemStore((__int64)BcdStoreHandle) && BiIsSynchFirmwareEntries((char)BcdStoreHandle) )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v6 = BiExportStoreAlterationsToFirmware(BcdStoreHandle);
    }
    LOBYTE(v7) = 1;
    v8 = BiUnloadHiveByHandle(BcdStoreHandle, v7);
    if ( v6 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v6);
    else
      v6 = v8;
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v6;
  }
  else
  {
    BiLogMessage(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
