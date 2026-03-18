/*
 * XREFs of BcdOpenStore @ 0x140589990
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14025FD34 (WheaPersistOfflinedPage.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 * Callees:
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 */

__int64 __fastcall BcdOpenStore(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  int v5; // eax

  v4 = BiAcquireBcdSyncMutant(0LL);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdOpenStore: Failed to acquire BCD sync Mutant. Store: %wsFlags: 0x%x Status: %x", L"NULL");
  }
  else
  {
    BiLogMessage(2LL, L"Opening store. Flags: 0x%x");
    v5 = BiOpenSystemStore(a3, 2LL);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to open system store. Status: %x", (unsigned int)v5);
    BiReleaseBcdSyncMutant(0LL);
  }
  return (unsigned int)v4;
}
