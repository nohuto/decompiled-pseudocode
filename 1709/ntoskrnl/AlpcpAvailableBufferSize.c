/*
 * XREFs of AlpcpAvailableBufferSize @ 0x14043CC74
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x140463024 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140465CF0 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140466D78 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404A17F0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpReadMessageData @ 0x1404A25E0 (AlpcpReadMessageData.c)
 *     AlpcpCaptureMessageData @ 0x140571974 (AlpcpCaptureMessageData.c)
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
