/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x140144EC4
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1405C9A7C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PipRestoreDevNodeState @ 0x140145284 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PnpDeleteAllDependencyRelations @ 0x140578104 (PnpDeleteAllDependencyRelations.c)
 *     PpHotSwapInitRemovalPolicy @ 0x140584C14 (PpHotSwapInitRemovalPolicy.c)
 *     PnpDisableDeviceInterfaces @ 0x1405C7250 (PnpDisableDeviceInterfaces.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PiDmaGuardProcessPostRemove @ 0x1405C89E0 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x1405C8A58 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1405C8B00 (IopRemoveDevice.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpUnloadAttachedDriver @ 0x1405F5E0C (PnpUnloadAttachedDriver.c)
 *     PipIsProblemReadonly @ 0x140651F48 (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x140731E94 (PpProfileCommitTransitioningDock.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(ULONG_PTR BugCheckParameter4, unsigned int a2, unsigned int a3)
{
  struct _DEVICE_OBJECT *v3; // r13
  unsigned int v4; // r15d
  int v6; // esi
  __int64 v7; // rcx
  __int64 *v8; // rdi
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
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  __int64 *v30; // rbp
  __int64 v31; // rcx

  v3 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 32);
  v4 = a2;
  v6 = 0;
  PpHotSwapInitRemovalPolicy();
  v8 = *(__int64 **)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v29 = *((_DWORD *)v8 + 99);
      v30 = (__int64 *)*v8;
      if ( (v29 & 0x10) != 0 )
      {
        v29 &= ~0x10u;
        *((_DWORD *)v8 + 99) = v29;
      }
      if ( v8[52] || v8[68] || (v29 & 0x40) != 0 )
      {
        IopRemoveDevice((PDEVICE_OBJECT)v8[4]);
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 788LL);
      v8 = v30;
    }
    while ( v30 );
  }
  result = *(unsigned int *)(BugCheckParameter4 + 300);
  if ( (_DWORD)result == 782 || (_DWORD)result == 783 )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 304) == 785 )
      return result;
    PipRestoreDevNodeState(BugCheckParameter4);
    LODWORD(result) = *(_DWORD *)(BugCheckParameter4 + 300);
  }
  v10 = (_DWORD)result != 788;
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
    if ( *(_DWORD *)(BugCheckParameter4 + 300) == 784 )
      PnpDisableDeviceInterfaces(BugCheckParameter4 + 40);
    IopReleaseDeviceResources(BugCheckParameter4, (*(_DWORD *)(BugCheckParameter4 + 396) >> 4) & 1);
  }
  if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0
    && (unsigned int)(*(_DWORD *)(BugCheckParameter4 + 568) - 3) <= 1 )
  {
    PpProfileCommitTransitioningDock(BugCheckParameter4);
  }
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
  v25 = 786LL;
  if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
    v25 = 788LL;
  PipSetDevNodeState(BugCheckParameter4, v25);
  if ( v4
    && ((*(_DWORD *)(BugCheckParameter4 + 396) & 0x6000) == 0
     || ((v4 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(BugCheckParameter4, v4)
     && !(unsigned int)PipIsProblemReadonly(v31, *(unsigned int *)(BugCheckParameter4 + 404))) )
  {
    PipClearDevNodeProblem(BugCheckParameter4);
    v26 = a3;
    if ( !a3 )
      v26 = *(_DWORD *)(BugCheckParameter4 + 392);
    PipSetDevNodeProblem(BugCheckParameter4, v4, v26);
  }
  if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
    PnpDeleteAllDependencyRelations(v3);
  result = PiDmaGuardProcessPostRemove(BugCheckParameter4);
  v28 = *(_QWORD *)(BugCheckParameter4 + 48);
  if ( v28 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v27, v28, 23LL);
  return result;
}
