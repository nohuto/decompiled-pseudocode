/*
 * XREFs of PopWriteBsdPowerTransition @ 0x140611DF0
 * Callers:
 *     PopSetSleepMarker @ 0x1405EAA78 (PopSetSleepMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1405EF330 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1405EF370 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearSleepMarker @ 0x1405EF75C (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x1405EF7D4 (PopClearSystemShutdownMarker.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140610E34 (PopBatteryCheckCompositeCapacity.c)
 *     PopUpdateConsoleDisplayState @ 0x140611BE0 (PopUpdateConsoleDisplayState.c)
 *     PopClearConnectedStandbyMarker @ 0x14075D288 (PopClearConnectedStandbyMarker.c)
 *     PopRecordLidState @ 0x14075D348 (PopRecordLidState.c)
 *     PopSetCleanShutdownMarker @ 0x14075D5C8 (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x14075D5FC (PopSetConnectedStandbyMarker.c)
 *     PopSetSystemShutdownMarker @ 0x14075D680 (PopSetSystemShutdownMarker.c)
 *     PdcPoRecordButton @ 0x140764C60 (PdcPoRecordButton.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140147C40 (RtlComputeCrc32.c)
 *     RtlpSystemBootStatusRequest @ 0x140611E5C (RtlpSystemBootStatusRequest.c)
 */

__int64 PopWriteBsdPowerTransition()
{
  int v1; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v2; // [rsp+28h] [rbp-20h]
  int v3; // [rsp+30h] [rbp-18h]

  *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)&Buffer + 2) = RtlComputeCrc32(0, &Buffer, 8u);
  v1 = 7;
  v2 = &PopBsdPowerTransition;
  v3 = 32;
  return ((__int64 (__fastcall *)(__int64, int *, __int64, _QWORD))RtlpSystemBootStatusRequest)(32LL, &v1, 1LL, 0LL);
}
