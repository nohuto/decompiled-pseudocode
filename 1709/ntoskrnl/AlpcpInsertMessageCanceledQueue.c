/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x140593C98
 * Callers:
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x140464BE0 (AlpcpDisconnectPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1405815A0 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpInsertMessageCanceledQueue(__int64 a1, _QWORD *a2)
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
