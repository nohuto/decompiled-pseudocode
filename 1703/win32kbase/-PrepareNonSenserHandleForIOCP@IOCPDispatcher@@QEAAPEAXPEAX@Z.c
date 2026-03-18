/*
 * XREFs of ?PrepareNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX@Z @ 0x1C004CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C004C8D8 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUI.c)
 */

void *__fastcall IOCPDispatcher::PrepareNonSenserHandleForIOCP(IOCPDispatcher *this, __int64 a2)
{
  int v3; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h]

  v3 = 0;
  v4 = 0LL;
  return IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, 0LL, a2, 1, (__int64)&v3);
}
