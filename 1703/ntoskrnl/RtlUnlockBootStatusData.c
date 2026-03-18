/*
 * XREFs of RtlUnlockBootStatusData @ 0x140585EE0
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 *     PoClearTransitionMarker @ 0x1405B8BC8 (PoClearTransitionMarker.c)
 *     PopRecordPhysicalPowerButton @ 0x1406C547C (PopRecordPhysicalPowerButton.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwFsControlFile @ 0x14017E660 (ZwFsControlFile.c)
 *     ZwFlushBuffersFile @ 0x14017E8A0 (ZwFlushBuffersFile.c)
 */

NTSTATUS __stdcall RtlUnlockBootStatusData(HANDLE FileHandle)
{
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 v4; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &v4, 2u, 0LL, 0);
  ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
  return ZwClose(FileHandle);
}
