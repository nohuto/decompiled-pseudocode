/*
 * XREFs of ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C003A258
 * Callers:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0012758 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C003A2E4 (-HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C0124320 (-RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x1C01244C0 (-RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z.c)
 * Callees:
 *     CreateKernelIocpWcp @ 0x1C00A0C00 (CreateKernelIocpWcp.c)
 */

__int64 __fastcall IOCPDispatcher::SetupIOCPForDispatcherHandle(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  __int64 v5; // rdi
  __int64 KernelIocpWcp; // rbx

  v5 = a4;
  KernelIocpWcp = a2;
  if ( !a2 )
    KernelIocpWcp = CreateKernelIocpWcp();
  if ( !KernelIocpWcp
    || (int)ZwAssociateWaitCompletionPacket(KernelIocpWcp, *(_QWORD *)(a1 + 2744), a3, a5, v5, 0, 0LL, 0LL) < 0 )
  {
    KeBugCheck(0x164u);
  }
  return KernelIocpWcp;
}
