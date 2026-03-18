/*
 * XREFs of PopSetDisplayStatus @ 0x140579DA0
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     PopAcquireAdaptiveLock @ 0x140420088 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x14057D6FC (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int ProcessSessionId; // ebx
  __int64 v3; // r8

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  LOBYTE(v3) = 1;
  PopSetSessionDisplayStatus(ProcessSessionId, a1, v3);
  return PopReleaseAdaptiveLock();
}
