/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x14057EE00
 * Callers:
 *     AlpcpDisconnectPort @ 0x1404DB034 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404DFD5C (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcpInsertMessageCanceledQueue(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  a2 += 10;
  a2[1] = *(_QWORD *)(a1 + 392);
  *a2 = a1 + 384;
  **(_QWORD **)(a1 + 392) = a2;
  *(_QWORD *)(a1 + 392) = a2;
  ++*(_DWORD *)(a1 + 464);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2, a1 + 384, v5, v6);
  return KeAbPostRelease((ULONG_PTR)v2);
}
