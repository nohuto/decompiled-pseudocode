/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x14055D620 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x140157DE8 (PnpMarkDeviceForRemove.c)
 *     PipRestoreDevNodeState @ 0x140158A08 (PipRestoreDevNodeState.c)
 *     PnpUnlockMountableDevice @ 0x140158E70 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14015D6AC (IopDecrementDeviceObjectHandleCount.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405529D8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PiDmaGuardProcessPostRemove @ 0x14055DC84 (PiDmaGuardProcessPostRemove.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x14055E154 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 *     PnpDisableDeviceInterfaces @ 0x14059DA44 (PnpDisableDeviceInterfaces.c)
 *     PipConvertResolutionsToReservations @ 0x1406BEA40 (PipConvertResolutionsToReservations.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR BugCheckParameter4, int a2, int a3)
{
  struct _DEVICE_OBJECT *v3; // r13
  void *v4; // rsi
  int v6; // ecx
  int v7; // ebp
  int v9; // r14d
  int v10; // r12d
  __int64 v11; // rbx
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rbp
  ULONG_PTR v20; // [rsp+20h] [rbp-38h] BYREF
  void *v21; // [rsp+28h] [rbp-30h]

  v3 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 32);
  v4 = 0LL;
  v20 = 0LL;
  v6 = *(_DWORD *)(BugCheckParameter4 + 300);
  v7 = a3;
  v21 = 0LL;
  v9 = 768;
  if ( (unsigned int)(v6 - 782) <= 1 )
  {
    v9 = v6;
    PipRestoreDevNodeState(BugCheckParameter4);
  }
  v10 = *(_DWORD *)(BugCheckParameter4 + 300);
  *(_WORD *)(BugCheckParameter4 + 466) = 0;
  if ( v10 == 785 && v9 == 782 )
  {
    PipClearDevNodeFlags(BugCheckParameter4, 16);
    PipSetDevNodeState(BugCheckParameter4, 787);
    return;
  }
  v11 = *(_QWORD *)(BugCheckParameter4 + 8);
  if ( v11 )
  {
    do
    {
      v18 = *(_DWORD *)(v11 + 396);
      v19 = *(_QWORD *)v11;
      if ( (v18 & 0x10) != 0 )
        *(_DWORD *)(v11 + 396) = v18 & 0xFFFFFFEF;
      if ( *(_QWORD *)(v11 + 416) || *(_QWORD *)(v11 + 544) || (*(_DWORD *)(v11 + 396) & 0x40) != 0 )
        IopReleaseDeviceResources(v11, 0);
      PipSetDevNodeState(v11, 787);
      v11 = v19;
    }
    while ( v19 );
    v7 = a3;
  }
  if ( v10 == 778 && (*(_DWORD *)(BugCheckParameter4 + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v3, 1, &v20);
    PnpUnlockMountableDevice((__int64)v3);
    PipClearDevNodeFlags(BugCheckParameter4, 0x1000000);
    v4 = v21;
  }
  v12 = *(_DWORD *)(BugCheckParameter4 + 300);
  if ( v12 < 769 || v12 > 770 && (v12 <= 776 || v12 == 778 || (unsigned int)(v12 - 785) > 3) )
  {
    v13 = IopRemoveDevice(v3, 23);
    PnpDisableDeviceInterfaces((unsigned __int16 *)(BugCheckParameter4 + 40));
    if ( v13 >= 0 )
      IopReleaseDeviceResources(BugCheckParameter4, 0);
    v14 = BugCheckParameter4;
    if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
    {
      v15 = 787;
LABEL_13:
      PipSetDevNodeState(v14, v15);
      goto LABEL_14;
    }
    PipSetDevNodeState(BugCheckParameter4, 785);
    v15 = 782;
    if ( v9 == 782 )
    {
      v14 = BugCheckParameter4;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v10 == 778 && v4 )
  {
    IopDecrementDeviceObjectHandleCount((ULONG_PTR)v4);
    ObfDereferenceObject(v4);
  }
  if ( a2 && (*(_DWORD *)(BugCheckParameter4 + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(BugCheckParameter4, a2, v7);
  *(_DWORD *)(BugCheckParameter4 + 704) &= ~2u;
  if ( (*(_DWORD *)(BugCheckParameter4 + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v16 = *(_QWORD *)(BugCheckParameter4 + 32);
    if ( v16 )
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 80LL);
    else
      v17 = 0LL;
    if ( v17 )
      PipConvertResolutionsToReservations(v17);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    PipProcessRebuildPowerRelationsQueue();
  }
  PiDmaGuardProcessPostRemove(BugCheckParameter4, a2, 0);
}
