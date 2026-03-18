/*
 * XREFs of PopClearSystemSleepCheckpoint @ 0x1406D5660
 * Callers:
 *     PopCheckShutdownMarker @ 0x140824044 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExSetFirmwareEnvironmentVariable @ 0x1407189E0 (ExSetFirmwareEnvironmentVariable.c)
 */

__int64 PopClearSystemSleepCheckpoint()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( PopCheckpointSystemSleepEnabled && (PopCheckpointSystemSleepSimulateFlags & 2) == 0 )
  {
    v1 = ExSetFirmwareEnvironmentVariable((unsigned int)L"*,", (unsigned int)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, 0, 0, 1);
    if ( v1 == -1073741568 )
      return 0;
    return v1;
  }
  return v0;
}
