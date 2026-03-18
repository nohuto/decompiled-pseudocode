/*
 * XREFs of AlpcpEnterAllocationEventMessageLog @ 0x140747A28
 * Callers:
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpAllocateMessage @ 0x1404DCA4C (AlpcpAllocateMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpAllocateMessageLog @ 0x1407477FC (AlpcpAllocateMessageLog.c)
 */

char __fastcall AlpcpEnterAllocationEventMessageLog(__int64 a1)
{
  __int64 MessageLog; // rax
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rcx
  char *v7; // rcx
  char **v8; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpMessageLogLock, 0LL);
  MessageLog = AlpcpAllocateMessageLog();
  if ( MessageLog )
  {
    *(_QWORD *)(MessageLog + 32) = a1;
    *(_DWORD *)(MessageLog + 40) = *(_DWORD *)(a1 + 264);
    *(_DWORD *)(MessageLog + 44) = 1;
    v6 = (__int64 *)qword_1403AD2C8;
    if ( *(__int64 **)qword_1403AD2C8 != &AlpcpMessageLogListHead )
      __fastfail(3u);
    *(_QWORD *)(MessageLog + 8) = qword_1403AD2C8;
    *(_QWORD *)MessageLog = &AlpcpMessageLogListHead;
    v3 = (char *)(MessageLog + 16);
    *v6 = MessageLog;
    qword_1403AD2C8 = MessageLog;
    v7 = (char *)AlpcpMessageLogLookupTable + 16 * ((*(_DWORD *)(MessageLog + 40) >> 2) & 0x3FF);
    v8 = (char **)*((_QWORD *)v7 + 1);
    if ( *v8 != v7 )
      __fastfail(3u);
    *(_QWORD *)v3 = v7;
    *((_QWORD *)v3 + 1) = v8;
    *v8 = v3;
    *((_QWORD *)v7 + 1) = v3;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock, (__int64)v3, v4, v5);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
