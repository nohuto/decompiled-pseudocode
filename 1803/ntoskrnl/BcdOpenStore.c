/*
 * XREFs of BcdOpenStore @ 0x1406077C0
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402BEE64 (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140624CC8 (PoInitHiberServices.c)
 * Callees:
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140609030 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1406091E0 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdOpenStore(UNICODE_STRING *BcdFilePath, BCD_OPEN_FLAGS BcdOpenFlags, PHANDLE BcdStoreHandle)
{
  char v3; // di
  __int32 v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  NTSTATUS v10; // ebx
  NTSTATUS v12; // r10d

  v3 = BcdOpenFlags & 1;
  LOBYTE(BcdFilePath) = BcdOpenFlags & 1;
  v6 = BcdOpenFlags & 2;
  v7 = BiAcquireBcdSyncMutant(BcdFilePath);
  if ( v7 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BcdOpenStore: Failed to acquire BCD sync Mutant. Store: %wsFlags: 0x%x Status: %x",
      L"NULL",
      (unsigned int)BcdOpenFlags,
      v7);
    return v12;
  }
  else
  {
    BiLogMessage(2LL, L"Opening store. Flags: 0x%x", (unsigned int)BcdOpenFlags);
    if ( v3 )
    {
      v10 = -1073741811;
    }
    else
    {
      if ( v6 )
        BiLogMessage(v8, L"Store will be synchronized with firmware.");
      v9 = BiOpenSystemStore(BcdStoreHandle, v6 == 0 ? 2 : 0);
      v10 = v9;
      if ( v9 < 0 )
        BiLogMessage(4LL, L"Failed to open system store. Status: %x", (unsigned int)v9);
    }
    LOBYTE(v8) = v3;
    BiReleaseBcdSyncMutant(v8);
    return v10;
  }
}
