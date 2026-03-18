/*
 * XREFs of PopWriteBsdPowerTransition @ 0x140576A8C
 * Callers:
 *     PopClearUserShutdownMarkerWorker @ 0x14017D2E0 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14017D320 (PopSetUserShutdownMarkerWorker.c)
 *     PopSetSleepMarker @ 0x140576A30 (PopSetSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140576F84 (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140576FB8 (PopClearSleepMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x1406C53BC (PopClearConnectedStandbyMarker.c)
 *     PopSetCleanShutdownMarker @ 0x1406C5648 (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1406C567C (PopSetConnectedStandbyMarker.c)
 *     PopSetSystemShutdownMarker @ 0x1406C5700 (PopSetSystemShutdownMarker.c)
 *     PdcPoRecordButton @ 0x1406CB310 (PdcPoRecordButton.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140134030 (RtlComputeCrc32.c)
 *     RtlGetSetBootStatusData @ 0x1405820B0 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140585800 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140585EE0 (RtlUnlockBootStatusData.c)
 */

int PopWriteBsdPowerTransition()
{
  int result; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)&Buffer + 2) = RtlComputeCrc32(0, &Buffer, 8u);
  result = RtlLockBootStatusData(&FileHandle);
  if ( result >= 0 )
  {
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    return RtlUnlockBootStatusData(FileHandle);
  }
  return result;
}
