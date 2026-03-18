/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x140748138
 * Callers:
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404D0660 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x1404DA158 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1404DFA3C (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
