/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1407492FC
 * Callers:
 *     AlpcpLogClosePort @ 0x140749390 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1407493F4 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140749454 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407494B8 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x140749514 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x140749578 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1407495DC (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x140749638 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x140749734 (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
