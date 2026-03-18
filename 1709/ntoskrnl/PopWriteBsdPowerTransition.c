/*
 * XREFs of PopWriteBsdPowerTransition @ 0x1406F5A28
 * Callers:
 *     PopClearConnectedStandbyMarker @ 0x1406F4F18 (PopClearConnectedStandbyMarker.c)
 *     PopClearSleepMarker @ 0x1406F4F8C (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x1406F4FC8 (PopClearSystemShutdownMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1406F5070 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordLidState @ 0x1406F5580 (PopRecordLidState.c)
 *     PopSetCleanShutdownMarker @ 0x1406F578C (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1406F57C0 (PopSetConnectedStandbyMarker.c)
 *     PopSetSleepMarker @ 0x1406F5844 (PopSetSleepMarker.c)
 *     PopSetSystemShutdownMarker @ 0x1406F58C8 (PopSetSystemShutdownMarker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1406F5900 (PopSetUserShutdownMarkerWorker.c)
 *     PdcPoRecordButton @ 0x1406FF2D0 (PdcPoRecordButton.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140113980 (RtlComputeCrc32.c)
 *     RtlpSystemBootStatusRequest @ 0x1405AC0A4 (RtlpSystemBootStatusRequest.c)
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
  return RtlpSystemBootStatusRequest(0x20u, (__int64)&v1, 1u, 0LL);
}
