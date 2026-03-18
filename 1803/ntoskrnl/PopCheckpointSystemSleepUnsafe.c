/*
 * XREFs of PopCheckpointSystemSleepUnsafe @ 0x1404874A4
 * Callers:
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 * Callees:
 *     VslReportBugCheckProgress @ 0x140230280 (VslReportBugCheckProgress.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407BEE40 (ExSetFirmwareEnvironmentVariable.c)
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
  return HalSetEnvironmentVariableEx(L"SystemSleepCheckpoint", &SYSTEM_SLEEP_ETW_CHECKPOINT_GUID, &v2, 1LL, 1);
}
