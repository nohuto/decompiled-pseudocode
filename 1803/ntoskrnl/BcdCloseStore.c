/*
 * XREFs of BcdCloseStore @ 0x140606F5C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402BEE64 (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     BiLoadSystemStore @ 0x14060637C (BiLoadSystemStore.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x1407939B4 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1401643C4 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x140164480 (BiIsSynchFirmwareEntries.c)
 *     BiCloseStore @ 0x14060649C (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x140607744 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x140607D00 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140609030 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1406091E0 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdCloseStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  NTSTATUS v11; // r8d

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v11;
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle, v5, (unsigned int)v4) )
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
    v9 = v7;
    BiReleaseBcdSyncMutant(v8);
    return v9;
  }
}
