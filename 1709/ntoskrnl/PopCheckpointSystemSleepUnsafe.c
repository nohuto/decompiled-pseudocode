/*
 * XREFs of PopCheckpointSystemSleepUnsafe @ 0x14043A58C
 * Callers:
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     PopEnableSystemSleepCheckpoint @ 0x14070B1EC (PopEnableSystemSleepCheckpoint.c)
 * Callees:
 *     VslReportBugCheckProgress @ 0x1401F2760 (VslReportBugCheckProgress.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407581E0 (ExSetFirmwareEnvironmentVariable.c)
 */

NTSTATUS __fastcall PopCheckpointSystemSleepUnsafe(char a1)
{
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( !PoAllProcIntrDisabled )
    return ExSetFirmwareEnvironmentVariable(
             (unsigned int)L"*,",
             (unsigned int)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
             (unsigned int)&v2,
             1,
             1);
  if ( PopCheckpointEfiRuntimeRedirected )
    return VslReportBugCheckProgress((char *)L"SystemSleepCheckpoint", &SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, &v2, 1u, 1);
  return HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", &SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, &v2);
}
