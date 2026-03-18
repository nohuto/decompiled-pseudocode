/*
 * XREFs of ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C009AB98
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0090124 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C003B2E0 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C003B804 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     CreateKernelIocp @ 0x1C009AC50 (CreateKernelIocp.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall IOCPDispatcher::CreateInstance(struct IOCPDispatcher **a1)
{
  __int64 v1; // rbx
  __int64 KernelIocp; // rax
  bool v3; // cl

  WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  v1 = Win32AllocPool(2592LL, 0x70694843u);
  if ( v1 )
  {
    *(_QWORD *)v1 = &IOCPDispatcher::`vftable';
    memset((void *)(v1 + 8), 0, 0xA00uLL);
    *(_DWORD *)(v1 + 2568) = 0;
    *(_QWORD *)(v1 + 2576) = 0LL;
    *(_QWORD *)(v1 + 2584) = 0LL;
  }
  else
  {
    v1 = 0LL;
  }
  if ( !v1 )
    return 3221225495LL;
  KernelIocp = CreateKernelIocp(1u);
  *(_QWORD *)(v1 + 2576) = KernelIocp;
  v3 = KernelIocp != 0;
  if ( KernelIocp )
    v3 = IOCPDispatcher::InitializeUserModeHandleDuplicate((HANDLE *)v1);
  if ( v3 )
  {
    WPP_MAIN_CB.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v1;
    return 0LL;
  }
  else
  {
    IOCPDispatcher::`scalar deleting destructor'((HANDLE *)v1);
    return 3221225473LL;
  }
}
