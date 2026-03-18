/*
 * XREFs of AlpcpAvailableBufferSize @ 0x140489898
 * Callers:
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 *     AlpcpReadMessageData @ 0x1404CBF1C (AlpcpReadMessageData.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404CD870 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1404DC52C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCaptureMessageData @ 0x140556F78 (AlpcpCaptureMessageData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpAvailableBufferSize(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 )
    return *(_QWORD *)(v1 + 32) - 40LL;
  else
    return 512LL;
}
