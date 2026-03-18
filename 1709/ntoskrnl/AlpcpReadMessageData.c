/*
 * XREFs of AlpcpReadMessageData @ 0x1404A25E0
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x140464260 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x14046750C (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14046880C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x14043CC74 (AlpcpAvailableBufferSize.c)
 */

void *__fastcall AlpcpReadMessageData(__int64 a1, char *a2)
{
  size_t v4; // rax
  __int64 v5; // rcx
  size_t v6; // rdi
  const void *v7; // rdx
  size_t v8; // rsi
  char *v9; // rcx

  v4 = AlpcpAvailableBufferSize(a1);
  v6 = *(unsigned __int16 *)(v5 + 240);
  v7 = (const void *)(v5 + 280);
  v8 = v4;
  v9 = a2;
  if ( v6 > v4 )
  {
    memmove(a2, v7, v4);
    v7 = *(const void **)(a1 + 224);
    v9 = &a2[v8];
    v6 -= v8;
  }
  return memmove(v9, v7, v6);
}
