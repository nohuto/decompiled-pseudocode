/*
 * XREFs of PipEnumerateCompleted @ 0x1405D1930
 * Callers:
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PnpRequestDeviceRemoval @ 0x1405C75A4 (PnpRequestDeviceRemoval.c)
 *     PiSwFindChildren @ 0x1405CDC24 (PiSwFindChildren.c)
 *     PipProcessEnumeratedChildDevice @ 0x1405D1B3C (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x1405D37AC (PipClearDevNodeFlags.c)
 *     PiSwGetChildPdo @ 0x1405E7FB8 (PiSwGetChildPdo.c)
 */

__int64 __fastcall PipEnumerateCompleted(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rcx
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  char v9; // bp
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rsi
  _QWORD *j; // rbx
  __int64 ChildPdo; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = (_QWORD *)a1[1];
  if ( a1[66] )
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
  v3 = (_DWORD *)a1[66];
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < *v3; i = (unsigned int)(i + 1) )
    {
      PipProcessEnumeratedChildDevice(a1, *(_QWORD *)(a1[66] + 8 * i + 8));
      v3 = (_DWORD *)a1[66];
    }
    ExFreePoolWithTag(v3, 0);
    a1[66] = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = (_QWORD **)PiSwFindChildren();
  v7 = Children;
  if ( Children )
  {
    for ( j = *Children; j != v7; j = (_QWORD *)*j )
    {
      ChildPdo = PiSwGetChildPdo(a1[4], j);
      if ( ChildPdo )
        PipProcessEnumeratedChildDevice(a1, ChildPdo);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v8 = a1[1];
  v9 = 0;
  if ( v8 )
  {
    do
    {
      v14 = *(_QWORD *)v8;
      if ( (*(_DWORD *)(v8 + 396) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v8, 0x10000LL);
        PnpRequestDeviceRemoval(v8, 1, 24, 0);
        v9 = 1;
      }
      v8 = v14;
    }
    while ( v14 );
  }
  PipSetDevNodeState((__int64)a1, 776);
  if ( !v9 || a1 == (_QWORD *)IopRootDeviceNode )
    v10 = 0;
  else
    v10 = -1073741106;
  PiPnpRtlBeginOperation((__int64 **)&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *(_QWORD *)(IopRootDeviceNode + 48), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *(_QWORD *)(IopRootDeviceNode + 48), 20LL);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v10;
}
