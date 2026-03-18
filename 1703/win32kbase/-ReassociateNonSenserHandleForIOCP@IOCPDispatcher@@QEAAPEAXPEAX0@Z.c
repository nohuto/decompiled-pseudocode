/*
 * XREFs of ?ReassociateNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX0@Z @ 0x1C004CB80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C004C8D8 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUI.c)
 */

void *__fastcall IOCPDispatcher::ReassociateNonSenserHandleForIOCP(IOCPDispatcher *this, void *a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]

  v4 = 0;
  v5 = 0LL;
  return IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, a2, a3, 1, (__int64)&v4);
}
