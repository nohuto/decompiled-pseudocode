/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x140430754
 * Callers:
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14042F794 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x14047400C (AlpcpDisconnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertMessageCanceledQueue(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rsi

  v2 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  a2 += 10;
  a2[1] = *(_QWORD *)(a1 + 392);
  *a2 = a1 + 384;
  **(_QWORD **)(a1 + 392) = a2;
  *(_QWORD *)(a1 + 392) = a2;
  ++*(_DWORD *)(a1 + 464);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
