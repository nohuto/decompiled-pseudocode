/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x1404DF074
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1404DEDF4 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404DFD5C (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbx
  volatile signed __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char result; // al

  v1 = *(_QWORD *)(a1 + 16);
  v3 = (volatile signed __int64 *)(v1 + 176);
  ExAcquirePushLockExclusiveEx(v1 + 176, 0LL);
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3, v4, v5, v6);
  result = KeAbPostRelease((ULONG_PTR)v3);
  --*(_WORD *)(a1 - 30);
  return result;
}
