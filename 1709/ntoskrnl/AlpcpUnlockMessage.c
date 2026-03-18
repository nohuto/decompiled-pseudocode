/*
 * XREFs of AlpcpUnlockMessage @ 0x14049DAB4
 * Callers:
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140463024 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x1404633D0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpSendCloseMessage @ 0x140463CE0 (AlpcpSendCloseMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140464260 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpFlushQueue @ 0x140464950 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140464BE0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140464F28 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140465D6C (AlpcpCreateClientPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140466208 (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140466D78 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpProcessConnectionRequest @ 0x14046750C (AlpcpProcessConnectionRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x140467C20 (NtAlpcOpenSenderProcess.c)
 *     NtSecureConnectPort @ 0x14046827C (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14046880C (AlpcpReceiveLegacyConnectionReply.c)
 *     NtAlpcOpenSenderThread @ 0x140468EC8 (NtAlpcOpenSenderThread.c)
 *     AlpcpReceiveMessagePort @ 0x14049EAE0 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14049FAA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1404A0B50 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404A2C40 (AlpcpReceiveSynchronousReply.c)
 *     NtAlpcQueryInformationMessage @ 0x140505F58 (NtAlpcQueryInformationMessage.c)
 *     AlpcpPortQueryServerInfo @ 0x1405611F4 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14056F0C0 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCreateReserve @ 0x140571730 (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14058E9E4 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x140596100 (AlpcReserveDestroyProcedure.c)
 *     NtAlpcCancelMessage @ 0x1405E6040 (NtAlpcCancelMessage.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406DC784 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpCopyRequestData @ 0x1406DD164 (AlpcpCopyRequestData.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406DCE44 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  return AlpcpUnlockBlob(BugCheckParameter2);
}
