/*
 * XREFs of ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0122434
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0130CD4 (UserActivateMITInputProcessing.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     CreateKernelIocp @ 0x1C00A0BA0 (CreateKernelIocp.c)
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C0121A7C (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C0123110 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 */

__int64 __fastcall IOCPDispatcher::CreateInstance(struct IOCPDispatcher **a1)
{
  __int64 v1; // rbx
  void *KernelIocp; // rax
  bool v4; // cl

  gpIOCPDispatcher = 0LL;
  v1 = Win32AllocPool(2760LL, 0x70694843u);
  if ( v1 )
  {
    *(_QWORD *)v1 = &IOCPDispatcher::`vftable';
    memset((void *)(v1 + 8), 0, 0xA00uLL);
    *(_DWORD *)(v1 + 2568) = 0;
    memset((void *)(v1 + 2576), 0, 0xA0uLL);
    *(_DWORD *)(v1 + 2736) = 0;
    *(_QWORD *)(v1 + 2744) = 0LL;
    *(_QWORD *)(v1 + 2752) = 0LL;
  }
  else
  {
    v1 = 0LL;
  }
  if ( !v1 )
    return 3221225495LL;
  KernelIocp = CreateKernelIocp(1u);
  *(_QWORD *)(v1 + 2744) = KernelIocp;
  v4 = KernelIocp != 0LL;
  if ( KernelIocp )
    v4 = IOCPDispatcher::InitializeUserModeHandleDuplicate((IOCPDispatcher *)v1);
  if ( v4 )
  {
    gpIOCPDispatcher = (IOCPDispatcher *)v1;
    return 0LL;
  }
  else
  {
    IOCPDispatcher::`scalar deleting destructor'((IOCPDispatcher *)v1);
    return 3221225473LL;
  }
}
