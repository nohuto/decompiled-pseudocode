/*
 * XREFs of AlpcpUnlockMessage @ 0x1404CF164
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1404CAA80 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1404CB2A0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404CBD10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1404CCD20 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFlushQueue @ 0x1404DAE18 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1404DB034 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404DB380 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x1404DB5D0 (AlpcpSendCloseMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x1404DBA50 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1404DDA8C (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1404DEDF4 (AlpcpDispatchReplyToPort.c)
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1404DFA3C (AlpcpReceiveLegacyConnectionReply.c)
 *     NtAlpcOpenSenderThread @ 0x1404E032C (NtAlpcOpenSenderThread.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 *     AlpcpReceiveDirectMessagePort @ 0x140558B14 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcQueryInformationMessage @ 0x14055DB84 (NtAlpcQueryInformationMessage.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140578E48 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x14057F8E0 (AlpcReserveDestroyProcedure.c)
 *     NtAlpcCancelMessage @ 0x140582FB0 (NtAlpcCancelMessage.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407474A4 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpCopyRequestData @ 0x140747E84 (AlpcpCopyRequestData.c)
 *     AlpcpPortQueryServerInfo @ 0x140748D94 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140747B64 (AlpcpEnterStateChangeEventMessageLog.c)
 */

void __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2, a2, a3, a4);
  AlpcpUnlockBlob(BugCheckParameter2, a2, a3, a4);
}
