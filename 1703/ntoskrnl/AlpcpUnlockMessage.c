/*
 * XREFs of AlpcpUnlockMessage @ 0x14047CEA8
 * Callers:
 *     NtAlpcCancelMessage @ 0x14042F61C (NtAlpcCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14042F9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140430220 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     NtAlpcOpenSenderThread @ 0x140447D5C (NtAlpcOpenSenderThread.c)
 *     AlpcReserveDestroyProcedure @ 0x140458F00 (AlpcReserveDestroyProcedure.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1404705E8 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140470780 (AlpcpFlushMessagesByRequestor.c)
 *     NtSecureConnectPort @ 0x140470F8C (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14047153C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140472A18 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpProcessConnectionRequest @ 0x1404730E0 (AlpcpProcessConnectionRequest.c)
 *     AlpcpSendCloseMessage @ 0x140473580 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x140473D7C (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x14047400C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140474350 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFormatConnectionRequest @ 0x140474A80 (AlpcpFormatConnectionRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1404751D8 (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x140516968 (NtAlpcQueryInformationMessage.c)
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140523D60 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140524DE0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x140526E80 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCopyRequestData @ 0x1406B1584 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406B1A68 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1406B2164 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406B1264 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  return AlpcpUnlockBlob(BugCheckParameter2);
}
