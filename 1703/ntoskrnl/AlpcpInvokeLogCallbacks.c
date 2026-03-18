/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x1406B26C4
 * Callers:
 *     AlpcpLogClosePort @ 0x1406B2758 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1406B27BC (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406B281C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1406B2880 (AlpcpLogConnectSuccess.c)
 *     AlpcpLogReceiveMessage @ 0x1406B28DC (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1406B2940 (AlpcpLogSendMessage.c)
 *     AlpcpLogUnwait @ 0x1406B29A4 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406B2A00 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406B2AFC (AlpcpLogWaitForReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  PVOID *i; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    ((void (__fastcall *)(__int64, _QWORD))i[2])(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
