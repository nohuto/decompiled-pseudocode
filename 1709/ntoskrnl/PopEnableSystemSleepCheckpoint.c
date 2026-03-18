/*
 * XREFs of PopEnableSystemSleepCheckpoint @ 0x14070B1EC
 * Callers:
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     PopCheckpointSystemSleepUnsafe @ 0x14043A58C (PopCheckpointSystemSleepUnsafe.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x1407063C0 (PopTraceSleepCheckpointInitFailure.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x14075D200 (NtQueryEnvironmentVariableInfoEx.c)
 */

__int64 PopEnableSystemSleepCheckpoint()
{
  __int32 v0; // eax
  NTSTATUS v1; // ebx
  __int32 v2; // eax
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  PopCheckpointSystemSleepEnabled = 0;
  _InterlockedExchange(&PopSleepCheckpointStatus, 0);
  if ( PopCheckpointSystemSleepEnabledReg )
  {
    v0 = 4;
  }
  else
  {
    if ( !byte_140366314 || (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) == 0 )
      return (unsigned int)-1073741271;
    v0 = 1;
  }
  _InterlockedExchange(&PopSleepCheckpointStatus, v0);
  if ( dword_14035E690 != 2 )
  {
    v1 = -1073741822;
    v2 = 8;
LABEL_8:
    _InterlockedExchange(&PopSleepCheckpointStatus, v2);
LABEL_16:
    PopTraceSleepCheckpointInitFailure();
    return (unsigned int)v1;
  }
  v1 = NtQueryEnvironmentVariableInfoEx(1LL, &v6, &v4, &v5);
  if ( v1 < 0 )
    goto LABEL_10;
  if ( v4 <= 0x2000 )
  {
    v1 = -1073740716;
    v2 = 9;
    goto LABEL_8;
  }
  v1 = PopCheckpointSystemSleepUnsafe(0);
  if ( v1 < 0 )
  {
LABEL_10:
    _InterlockedExchange(&PopSleepCheckpointStatus, 15);
  }
  else
  {
    PopCheckpointSystemSleepEnabled = 1;
    v1 = 0;
  }
  if ( v1 < 0 )
    goto LABEL_16;
  return (unsigned int)v1;
}
