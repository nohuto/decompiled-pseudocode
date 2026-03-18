/*
 * XREFs of AlpcpEnterFreeEventMessageLog @ 0x140747AFC
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcMessageDestroyProcedure @ 0x1404CC100 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpLocateMessageLog @ 0x140747D14 (AlpcpLocateMessageLog.c)
 */

char __fastcall AlpcpEnterFreeEventMessageLog(__int64 a1)
{
  __int64 MessageLog; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpMessageLogLock, 0LL);
  MessageLog = AlpcpLocateMessageLog(*(unsigned int *)(a1 + 264));
  if ( MessageLog )
  {
    *(_DWORD *)(MessageLog + 44) = 0;
    *(_QWORD *)(MessageLog + 32) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock, v3, v4, v5);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
