/*
 * XREFs of PipEnumerateCompleted @ 0x1404DFDF8
 * Callers:
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiSwFindChildren @ 0x140450FE0 (PiSwFindChildren.c)
 *     PiSwGetChildPdo @ 0x14045A090 (PiSwGetChildPdo.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipProcessEnumeratedChildDevice @ 0x1404E0008 (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PnpRequestDeviceRemoval @ 0x14056DB8C (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PipEnumerateCompleted(__int64 a1)
{
  _QWORD *v2; // rdi
  _DWORD *v3; // rax
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  __int64 v7; // r8
  _QWORD *v8; // rsi
  __int64 *v9; // rdi
  char v10; // bp
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v15; // rsi
  _QWORD *i; // rdi
  PDEVICE_OBJECT ChildPdo; // rax
  __int64 v18; // rdx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 528) )
  {
    while ( v2 )
    {
      PipClearDevNodeFlags((__int64)v2, 16);
      v2 = (_QWORD *)*v2;
    }
  }
  else
  {
    while ( v2 )
    {
      if ( *(PDRIVER_OBJECT *)(v2[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags((__int64)v2, 16);
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
  Children = (_QWORD **)PiSwFindChildren();
  v8 = Children;
  if ( Children )
  {
    for ( i = *Children; i != v8; i = (_QWORD *)*i )
    {
      ChildPdo = PiSwGetChildPdo(*(_QWORD *)(a1 + 32), (__int64)i, v7);
      if ( ChildPdo )
        PipProcessEnumeratedChildDevice(a1, ChildPdo);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v9 = *(__int64 **)(a1 + 8);
  v10 = 0;
  if ( v9 )
  {
    do
    {
      v15 = (__int64 *)*v9;
      if ( (*((_DWORD *)v9 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v9, 0x10000LL);
        LOBYTE(v18) = 1;
        PnpRequestDeviceRemoval(v9, v18, 24LL, 0LL);
        v10 = 1;
      }
      v9 = v15;
    }
    while ( v15 );
  }
  PipSetDevNodeState(a1, 776);
  if ( !v10 || a1 == IopRootDeviceNode )
    v11 = 0;
  else
    v11 = -1073741106;
  PiPnpRtlBeginOperation((__int64 **)&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *(_QWORD *)(IopRootDeviceNode + 48), 15);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v13, *(_QWORD *)(IopRootDeviceNode + 48), 20);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return v11;
}
