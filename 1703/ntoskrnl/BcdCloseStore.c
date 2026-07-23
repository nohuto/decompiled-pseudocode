/*
 * XREFs of BcdCloseStore @ 0x140589B74
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14025FD34 (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     BiLoadSystemStore @ 0x1405893FC (BiLoadSystemStore.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x14014CEEC (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     BiCloseStore @ 0x14058951C (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x14058A2A0 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14058A854 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdCloseStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  NTSTATUS v5; // ebx
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  __int64 v8; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  v5 = v4;
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle) )
    {
      v6 = 0;
      if ( BiIsSynchFirmwareEntries((char)BcdStoreHandle) )
        v6 = 4;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v6 |= 2u;
    }
    else
    {
      v6 = 2;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v6);
    v7 = BiCloseStore((__int64)BcdStoreHandle, v6);
    LOBYTE(v8) = v3;
    v5 = v7;
    BiReleaseBcdSyncMutant(v8);
  }
  return v5;
}
