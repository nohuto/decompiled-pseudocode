/*
 * XREFs of AlpcpReadMessageData @ 0x14047C750
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x14047153C (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x1404730E0 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14047C970 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x14041D174 (AlpcpAvailableBufferSize.c)
 */

void *__fastcall AlpcpReadMessageData(__int64 a1, char *a2)
{
  size_t v4; // rax
  __int64 v5; // rcx
  size_t v6; // r8
  const void *v7; // rdx
  size_t v8; // rsi
  size_t v9; // rdi
  char *v10; // rcx

  v4 = AlpcpAvailableBufferSize(a1);
  v6 = *(unsigned __int16 *)(v5 + 240);
  v7 = (const void *)(v5 + 280);
  v8 = v4;
  v9 = v6;
  v10 = a2;
  if ( v6 > v4 )
  {
    memmove(a2, v7, v4);
    v7 = *(const void **)(a1 + 224);
    v10 = &a2[v8];
    v6 = v9 - v8;
  }
  return memmove(v10, v7, v6);
}
