/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x14056AA6C
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x14047153C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x1404730E0 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14047C970 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
