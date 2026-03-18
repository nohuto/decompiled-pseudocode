/*
 * XREFs of PipEnumerateCompleted @ 0x140553474
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipProcessEnumeratedChildDevice @ 0x140553688 (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PiSwFindChildren @ 0x140553A24 (PiSwFindChildren.c)
 *     PiSwGetChildPdo @ 0x1405E3DF8 (PiSwGetChildPdo.c)
 *     PnpRequestDeviceRemoval @ 0x1405EDBB0 (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PipEnumerateCompleted(__int64 a1)
{
  _QWORD *v2; // rdi
  _DWORD *v3; // rax
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  _QWORD *v7; // rsi
  __int64 *v8; // rdi
  char v9; // bp
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v14; // rsi
  _QWORD *i; // rdi
  __int64 ChildPdo; // rax
  __int64 v17; // rdx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 528) )
  {
    while ( v2 )
    {
      PipClearDevNodeFlags(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  else
  {
    while ( v2 )
    {
      if ( *(PDRIVER_OBJECT *)(v2[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  v3 = *(_DWORD **)(a1 + 528);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *v3 )
    {
      do
      {
        PipProcessEnumeratedChildDevice(a1, *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v4 + 8));
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < **(_DWORD **)(a1 + 528) );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 528), 0);
    *(_QWORD *)(a1 + 528) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = (_QWORD **)PiSwFindChildren(a1 + 40);
  v7 = Children;
  if ( Children )
  {
    for ( i = *Children; i != v7; i = (_QWORD *)*i )
    {
      ChildPdo = PiSwGetChildPdo(*(_QWORD *)(a1 + 32), i);
      if ( ChildPdo )
        PipProcessEnumeratedChildDevice(a1, ChildPdo);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v8 = *(__int64 **)(a1 + 8);
  v9 = 0;
  if ( v8 )
  {
    do
    {
      v14 = (__int64 *)*v8;
      if ( (*((_DWORD *)v8 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v8, 0x10000LL);
        LOBYTE(v17) = 1;
        PnpRequestDeviceRemoval(v8, v17, 24LL, 0LL);
        v9 = 1;
      }
      v8 = v14;
    }
    while ( v14 );
  }
  PipSetDevNodeState(a1, 776);
  if ( !v9 || a1 == IopRootDeviceNode )
    v10 = 0;
  else
    v10 = -1073741106;
  PiPnpRtlBeginOperation((__int64 **)&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *(_QWORD *)(IopRootDeviceNode + 48), 15);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *(_QWORD *)(IopRootDeviceNode + 48), 20);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v10;
}
