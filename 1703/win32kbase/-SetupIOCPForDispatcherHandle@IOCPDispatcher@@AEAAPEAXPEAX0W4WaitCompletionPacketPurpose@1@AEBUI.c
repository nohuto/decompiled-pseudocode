/*
 * XREFs of ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C004C8D8
 * Callers:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C004C868 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C004CA90 (-RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?ReassociateNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX0@Z @ 0x1C004CB80 (-ReassociateNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX0@Z.c)
 *     ?PrepareNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX@Z @ 0x1C004CBB0 (-PrepareNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     CreateKernelIocpWcp @ 0x1C008DD40 (CreateKernelIocpWcp.c)
 */

void *__fastcall IOCPDispatcher::SetupIOCPForDispatcherHandle(__int64 a1, void *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rdi
  void *KernelIocpWcp; // rbx
  void *v9; // r9
  int v10; // eax
  int v11; // edx

  v5 = a4;
  KernelIocpWcp = a2;
  if ( !a2 )
    KernelIocpWcp = (void *)CreateKernelIocpWcp();
  if ( KernelIocpWcp )
  {
    v9 = 0LL;
    if ( *(_DWORD *)a5 )
    {
      if ( *(_DWORD *)a5 == 1 )
        v9 = *(void **)(a5 + 8);
    }
    else
    {
      v9 = KernelIocpWcp;
    }
    v10 = ZwAssociateWaitCompletionPacket(KernelIocpWcp, *(_QWORD *)(a1 + 2576), a3, v9, v5, 0, 0LL, 0LL);
    if ( v10 < 0 )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_D(gBaseLog, v11, 2, 23, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, v10);
      ZwClose(KernelIocpWcp);
      return 0LL;
    }
  }
  return KernelIocpWcp;
}
