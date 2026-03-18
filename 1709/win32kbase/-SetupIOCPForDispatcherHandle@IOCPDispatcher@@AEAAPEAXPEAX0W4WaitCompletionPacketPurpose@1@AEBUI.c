/*
 * XREFs of ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C003B3B8
 * Callers:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C003B34C (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C003B570 (-RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?ReassociateNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX0@Z @ 0x1C003B660 (-ReassociateNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX0@Z.c)
 *     ?PrepareNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX@Z @ 0x1C003B690 (-PrepareNonSenserHandleForIOCP@IOCPDispatcher@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     CreateKernelIocpWcp @ 0x1C0097DD0 (CreateKernelIocpWcp.c)
 */

void *__fastcall IOCPDispatcher::SetupIOCPForDispatcherHandle(__int64 a1, void *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rdi
  void *KernelIocpWcp; // rbx
  void *v9; // r9
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-20h]

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
      LODWORD(v12) = v10;
      WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0x17u, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids, v12);
      ZwClose(KernelIocpWcp);
      return 0LL;
    }
  }
  return KernelIocpWcp;
}
