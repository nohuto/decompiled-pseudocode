/*
 * XREFs of CreateKernelIocpWcp @ 0x1C008DD40
 * Callers:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C004C8D8 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUI.c)
 *     ?PrepareUserHandleForIOCP@IOCPDispatcher@@QEAAJIPEAPEAXPEAU_MITIocpContext@@@Z @ 0x1C004CC90 (-PrepareUserHandleForIOCP@IOCPDispatcher@@QEAAJIPEAPEAXPEAU_MITIocpContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 CreateKernelIocpWcp()
{
  int v1; // [rsp+20h] [rbp-38h] BYREF
  __int64 v2; // [rsp+28h] [rbp-30h]
  __int64 v3; // [rsp+30h] [rbp-28h]
  int v4; // [rsp+38h] [rbp-20h]
  __int128 v5; // [rsp+40h] [rbp-18h]
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v1 = 48;
  v2 = 0LL;
  v4 = 512;
  v3 = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  ZwCreateWaitCompletionPacket(&v6, 1LL, &v1);
  return v6;
}
