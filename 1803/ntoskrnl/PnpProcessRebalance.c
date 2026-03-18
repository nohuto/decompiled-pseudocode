/*
 * XREFs of PnpProcessRebalance @ 0x14023E0DC
 * Callers:
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PiCollapseRebalanceRequests @ 0x14023DE98 (PiCollapseRebalanceRequests.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PnpRebalance @ 0x14073E380 (PnpRebalance.c)
 */

__int64 __fastcall PnpProcessRebalance(__int64 a1)
{
  _QWORD *v2; // rcx
  ULONG_PTR v3; // rbx
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // r9
  int v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+54h] [rbp+Ch]

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
    KeReleaseSemaphoreEx((__int64)&PpRegistrySemaphore, 0, 1, v8, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v7 >= 0 )
    {
      v10 = 3;
      v11 = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*(PVOID *)(IopRootDeviceNode + 32), 0x746C6644u);
      return (unsigned int)PipProcessDevNodeTree(IopRootDeviceNode, a1, (unsigned int)&v10, 0, 0, 1, 0);
    }
    return (unsigned int)v7;
  }
}
