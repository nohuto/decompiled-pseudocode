/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x1404304C0
 * Callers:
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14042F794 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140430220 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbx
  volatile signed __int64 *v3; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = (volatile signed __int64 *)(v1 + 176);
  ExAcquirePushLockExclusiveEx(v1 + 176, 0LL);
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  result = KeAbPostRelease((ULONG_PTR)v3);
  --*(_WORD *)(a1 - 30);
  return result;
}
