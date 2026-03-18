/*
 * XREFs of PopSetDisplayStatus @ 0x14070A030
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     PopReleaseAdaptiveLock @ 0x14059FD4C (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x14059FDE4 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x1405ED87C (PopSetSessionDisplayStatus.c)
 */

_QWORD *__fastcall PopSetDisplayStatus(int a1)
{
  unsigned int ProcessSessionId; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  PopSetSessionDisplayStatus(ProcessSessionId, a1, 1);
  return PopReleaseAdaptiveLock();
}
