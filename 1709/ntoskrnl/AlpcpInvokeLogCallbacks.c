/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1406DE40C
 * Callers:
 *     AlpcpLogClosePort @ 0x1406DE4A0 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1406DE504 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406DE564 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1406DE5C8 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1406DE624 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1406DE688 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1406DE6EC (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406DE748 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406DE844 (AlpcpLogWaitForReply.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  _UNKNOWN **i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (_UNKNOWN **)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (_UNKNOWN **)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
