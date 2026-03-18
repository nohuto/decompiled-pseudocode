/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x14013220C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x14057015C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PipRestoreDevNodeState @ 0x140131B50 (PipRestoreDevNodeState.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpDeleteAllDependencyRelations @ 0x14044C29C (PnpDeleteAllDependencyRelations.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     PpHotSwapInitRemovalPolicy @ 0x14045EF60 (PpHotSwapInitRemovalPolicy.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpDisableDeviceInterfaces @ 0x14056E2A4 (PnpDisableDeviceInterfaces.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1405705A0 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 *     PnpUnloadAttachedDriver @ 0x1405CBF9C (PnpUnloadAttachedDriver.c)
 *     PipIsProblemReadonly @ 0x140696214 (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x14069FF30 (PpProfileCommitTransitioningDock.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _DEVICE_OBJECT *v3; // r13
  unsigned int v4; // r15d
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 result; // rax
  bool v10; // bp
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  __int64 *PoolWithTag; // rdi
  PVOID v13; // r12
  unsigned int v14; // esi
  struct _DEVICE_OBJECT *v15; // rsi
  struct _DEVICE_OBJECT **v16; // r14
  struct _DRIVER_OBJECT **v17; // r15
  KIRQL v18; // r8
  __int64 *v19; // rdx
  __int64 i; // rcx
  __int64 v21; // rax
  PVOID *v22; // r14
  KIRQL v23; // al
  KIRQL v24; // al
  int v25; // edx
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rbp

  v3 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v4 = a2;
  v6 = 0;
  PpHotSwapInitRemovalPolicy();
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v29 = *(_DWORD *)(v8 + 396);
      v30 = *(_QWORD *)v8;
      if ( (v29 & 0x10) != 0 )
        *(_DWORD *)(v8 + 396) = v29 & 0xFFFFFFEF;
      if ( *(_QWORD *)(v8 + 416) || *(_QWORD *)(v8 + 544) || (*(_DWORD *)(v8 + 396) & 0x40) != 0 )
      {
        IopRemoveDevice(*(PDEVICE_OBJECT *)(v8 + 32));
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 788);
      v8 = v30;
    }
    while ( v30 );
  }
  result = (unsigned int)(*(_DWORD *)(a1 + 300) - 782);
  if ( (unsigned int)result <= 1 )
  {
    if ( *(_DWORD *)(a1 + 304) == 785 )
      return result;
    PipRestoreDevNodeState(a1);
  }
  v10 = *(_DWORD *)(a1 + 300) != 788;
  AttachedDevice = v3->AttachedDevice;
  while ( AttachedDevice )
  {
    AttachedDevice = AttachedDevice->AttachedDevice;
    ++v6;
  }
  PoolWithTag = 0LL;
  v13 = 0LL;
  if ( v6 )
  {
    v14 = 8 * v6 + 16;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x65647050u);
    if ( PoolWithTag )
    {
      v13 = ExAllocatePoolWithTag(PagedPool, v14, 0x65647050u);
      if ( v13 )
      {
        memset(PoolWithTag, 0, v14);
        memset(v13, 0, v14);
        v15 = v3->AttachedDevice;
        v16 = (struct _DEVICE_OBJECT **)PoolWithTag;
        v17 = (struct _DRIVER_OBJECT **)v13;
        while ( v15 )
        {
          ObfReferenceObjectWithTag(v15, 0x746C6644u);
          *v16++ = v15;
          *v17++ = v15->DriverObject;
          v15 = v15->AttachedDevice;
        }
        v4 = a2;
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
    }
  }
  v18 = KeAcquireQueuedSpinLock(0xAuLL);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    for ( i = *PoolWithTag; i; i = *v19 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v21 = *v19++;
      *(_DWORD *)(*(_QWORD *)(v21 + 312) + 32LL) |= 8u;
    }
  }
  v3->DeviceObjectExtension->ExtensionFlags &= ~4u;
  v3->DeviceObjectExtension->ExtensionFlags |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v18);
  if ( v10 )
  {
    IopRemoveDevice(v3);
    if ( *(_DWORD *)(a1 + 300) == 784 )
      PnpDisableDeviceInterfaces(a1 + 40);
    IopReleaseDeviceResources(a1, (*(_DWORD *)(a1 + 396) >> 4) & 1);
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 && (unsigned int)(*(_DWORD *)(a1 + 568) - 3) <= 1 )
    PpProfileCommitTransitioningDock(a1);
  v22 = (PVOID *)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( *PoolWithTag )
    {
      do
      {
        v23 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v22 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v22 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v23);
        PnpUnloadAttachedDriver(*(PVOID *)((char *)v22 + (_BYTE *)v13 - (_BYTE *)PoolWithTag));
        ObfDereferenceObjectWithTag(*v22++, 0x746C6644u);
      }
      while ( *v22 );
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(v13, 0);
  }
  v24 = KeAcquireQueuedSpinLock(0xAuLL);
  v3->DeviceObjectExtension->ExtensionFlags &= ~8u;
  v3->DeviceObjectExtension->ExtensionFlags |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v24);
  v25 = 786;
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
    v25 = 788;
  PipSetDevNodeState(a1, v25);
  if ( v4
    && ((*(_DWORD *)(a1 + 396) & 0x6000) == 0
     || ((v4 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(a1, v4)
     && !(unsigned int)PipIsProblemReadonly(v26, *(unsigned int *)(a1 + 404))) )
  {
    PipClearDevNodeProblem(a1);
    v27 = a3;
    if ( !a3 )
      v27 = *(_DWORD *)(a1 + 392);
    PipSetDevNodeProblem(a1, v4, v27);
  }
  result = *(unsigned int *)(a1 + 396);
  if ( (result & 0x10) == 0 )
    result = PnpDeleteAllDependencyRelations(v3);
  v28 = *(_QWORD *)(a1 + 48);
  if ( v28 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v26, v28, 23LL);
  return result;
}
