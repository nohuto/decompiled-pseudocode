/*
 * XREFs of PopSetDisplayStatus @ 0x1405EEA80
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     PopReleaseAdaptiveLock @ 0x140526D74 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140526E68 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x140612ED8 (PopSetSessionDisplayStatus.c)
 */

_QWORD *__fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int ProcessSessionId; // ebx
  __int64 v3; // r8

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  LOBYTE(v3) = 1;
  PopSetSessionDisplayStatus(ProcessSessionId, a1, v3);
  return PopReleaseAdaptiveLock();
}
