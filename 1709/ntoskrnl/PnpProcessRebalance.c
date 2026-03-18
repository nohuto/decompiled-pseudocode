/*
 * XREFs of PnpProcessRebalance @ 0x140201004
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PiCollapseRebalanceRequests @ 0x140200DC0 (PiCollapseRebalanceRequests.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PnpRebalance @ 0x1406D4C1C (PnpRebalance.c)
 */

__int64 __fastcall PnpProcessRebalance(__int64 a1)
{
  _QWORD *v2; // rcx
  ULONG_PTR v3; // rbx
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r9
  int v7; // ebx
  int v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+54h] [rbp+Ch]

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
    v3 = *(_QWORD *)(v2[39] + 40LL);
  else
    v3 = IopRootDeviceNode;
  v4 = *(_BYTE *)(a1 + 32);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 787) <= 1 )
  {
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    return 3221225558LL;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 28) && v4 && PiCollapseRebalanceRequests(a1) )
      v3 = IopRootDeviceNode;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    LOBYTE(v6) = v4;
    v7 = PnpRebalance(v3, 0LL, 0LL, v6);
    KeReleaseSemaphoreEx((__int64)&PpRegistrySemaphore, 0, 1);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v7 >= 0 )
    {
      v9 = 3;
      v10 = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*(PVOID *)(IopRootDeviceNode + 32), 0x746C6644u);
      return (unsigned int)PipProcessDevNodeTree(IopRootDeviceNode, a1, (unsigned int)&v9, 0, 0, 1, 0);
    }
    return (unsigned int)v7;
  }
}
