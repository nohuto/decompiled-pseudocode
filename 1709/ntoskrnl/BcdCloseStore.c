/*
 * XREFs of BcdCloseStore @ 0x1405AE528
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402898F4 (WheaPersistOfflinedPage.c)
 *     PoInitHiberServices @ 0x1405AD774 (PoInitHiberServices.c)
 *     BiLoadSystemStore @ 0x1405ADDCC (BiLoadSystemStore.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 *     SepSecureBootCorrectBcd @ 0x14072FA34 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140134AD0 (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x140134BA0 (BiIsSynchFirmwareEntries.c)
 *     BiCloseStore @ 0x1405ADEEC (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x1405AE824 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x1405AE8A0 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x1405AFE48 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdCloseStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  NTSTATUS v10; // r8d

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v10;
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle) )
    {
      v5 = 0;
      if ( BiIsSynchFirmwareEntries((char)BcdStoreHandle) )
        v5 = 4;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v5 |= 2u;
    }
    else
    {
      v5 = 2;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v5);
    v6 = BiCloseStore((__int64)BcdStoreHandle, v5);
    LOBYTE(v7) = v3;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
}
