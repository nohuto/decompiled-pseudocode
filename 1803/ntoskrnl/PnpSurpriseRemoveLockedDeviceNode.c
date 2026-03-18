/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x1405C87FC
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1405C9A7C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PipRestoreDevNodeState @ 0x140145284 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x14015E1A4 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x14015E4C8 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14015F460 (IopDecrementDeviceObjectHandleCount.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14050D26C (PnpAcquireDependencyRelationsLock.c)
 *     PnpDisableDeviceInterfaces @ 0x1405C7250 (PnpDisableDeviceInterfaces.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PiDmaGuardProcessPostRemove @ 0x1405C89E0 (PiDmaGuardProcessPostRemove.c)
 *     IopReleaseDeviceResources @ 0x1405C8A58 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1405C8B00 (IopRemoveDevice.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405CABD8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipClearDevNodeFlags @ 0x1405D37AC (PipClearDevNodeFlags.c)
 *     PipConvertResolutionsToReservations @ 0x14064F818 (PipConvertResolutionsToReservations.c)
 */

__int64 __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  int v3; // esi
  void *v4; // rbp
  struct _DEVICE_OBJECT *v5; // r13
  int v6; // r14d
  int v9; // r15d
  __int64 v10; // rbx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // eax
  __int64 v20; // r14
  ULONG_PTR v21; // [rsp+20h] [rbp-38h] BYREF
  void *v22; // [rsp+28h] [rbp-30h]

  v3 = *(_DWORD *)(BugCheckParameter4 + 300);
  v4 = 0LL;
  v5 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 32);
  v6 = a3;
  v21 = 0LL;
  v22 = 0LL;
  v9 = 768;
  if ( v3 == 782 || v3 == 783 )
  {
    v9 = v3;
    PipRestoreDevNodeState(BugCheckParameter4);
    v3 = *(_DWORD *)(BugCheckParameter4 + 300);
  }
  *(_WORD *)(BugCheckParameter4 + 466) = 0;
  if ( v3 == 785 && v9 == 782 )
  {
    PipClearDevNodeFlags(BugCheckParameter4, 16LL);
    return PipSetDevNodeState(BugCheckParameter4, 787);
  }
  v10 = *(_QWORD *)(BugCheckParameter4 + 8);
  if ( v10 )
  {
    do
    {
      v19 = *(_DWORD *)(v10 + 396);
      v20 = *(_QWORD *)v10;
      if ( (v19 & 0x10) != 0 )
      {
        v19 &= ~0x10u;
        *(_DWORD *)(v10 + 396) = v19;
      }
      if ( *(_QWORD *)(v10 + 416) || *(_QWORD *)(v10 + 544) || (v19 & 0x40) != 0 )
        IopReleaseDeviceResources(v10, 0LL);
      PipSetDevNodeState(v10, 787);
      v10 = v20;
    }
    while ( v20 );
    v6 = a3;
  }
  if ( v3 == 778 && (*(_DWORD *)(BugCheckParameter4 + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v5, 1, &v21);
    PnpUnlockMountableDevice((__int64)v5);
    PipClearDevNodeFlags(BugCheckParameter4, 0x1000000LL);
    v4 = v22;
  }
  v11 = *(_DWORD *)(BugCheckParameter4 + 300);
  if ( v11 < 769 || v11 > 770 && (v11 <= 776 || v11 == 778 || (unsigned int)(v11 - 785) > 3) )
  {
    v12 = IopRemoveDevice(v5);
    PnpDisableDeviceInterfaces((unsigned __int16 *)(BugCheckParameter4 + 40));
    if ( v12 >= 0 )
      IopReleaseDeviceResources(BugCheckParameter4, 0LL);
    v13 = BugCheckParameter4;
    if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
    {
      v14 = 787;
LABEL_13:
      PipSetDevNodeState(v13, v14);
      goto LABEL_14;
    }
    PipSetDevNodeState(BugCheckParameter4, 785);
    v14 = 782;
    if ( v9 == 782 )
    {
      v13 = BugCheckParameter4;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v3 == 778 && v4 )
  {
    IopDecrementDeviceObjectHandleCount((ULONG_PTR)v4);
    ObfDereferenceObject(v4);
  }
  if ( a2 && (*(_DWORD *)(BugCheckParameter4 + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(BugCheckParameter4, a2, v6);
  *(_DWORD *)(BugCheckParameter4 + 704) &= ~2u;
  if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v15 = *(_QWORD *)(BugCheckParameter4 + 32);
    if ( v15 )
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 80LL);
    else
      v16 = 0LL;
    if ( v16 )
      PipConvertResolutionsToReservations(v16);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    PipProcessRebuildPowerRelationsQueue(v17);
  }
  return PiDmaGuardProcessPostRemove(BugCheckParameter4);
}
