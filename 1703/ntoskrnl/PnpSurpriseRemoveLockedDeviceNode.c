/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x14057015C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PipRestoreDevNodeState @ 0x140131B50 (PipRestoreDevNodeState.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401EF730 (IopDecrementDeviceObjectHandleCount.c)
 *     PnpMarkDeviceForRemove @ 0x1401F8AF8 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401F8BE4 (PnpUnlockMountableDevice.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404D9F20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpDisableDeviceInterfaces @ 0x14056E2A4 (PnpDisableDeviceInterfaces.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1405705A0 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 *     PipConvertResolutionsToReservations @ 0x140692D90 (PipConvertResolutionsToReservations.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _DEVICE_OBJECT *v3; // r13
  void *v4; // rsi
  int v6; // ecx
  unsigned int v7; // ebp
  int v9; // r14d
  int v10; // r15d
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

  v3 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v4 = 0LL;
  v20 = 0LL;
  v6 = *(_DWORD *)(a1 + 300);
  v7 = a3;
  v21 = 0LL;
  v9 = 768;
  if ( (unsigned int)(v6 - 782) <= 1 )
  {
    v9 = v6;
    PipRestoreDevNodeState(a1);
  }
  v10 = *(_DWORD *)(a1 + 300);
  *(_WORD *)(a1 + 466) = 0;
  if ( v10 == 785 && v9 == 782 )
  {
    PipClearDevNodeFlags(a1, 16);
    PipSetDevNodeState(a1, 787);
    return;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 )
  {
    do
    {
      v18 = *(_DWORD *)(v11 + 396);
      v19 = *(_QWORD *)v11;
      if ( (v18 & 0x10) != 0 )
        *(_DWORD *)(v11 + 396) = v18 & 0xFFFFFFEF;
      if ( *(_QWORD *)(v11 + 416) || *(_QWORD *)(v11 + 544) || (*(_DWORD *)(v11 + 396) & 0x40) != 0 )
        IopReleaseDeviceResources(v11, 0LL);
      PipSetDevNodeState(v11, 787);
      v11 = v19;
    }
    while ( v19 );
    v7 = a3;
  }
  if ( v10 == 778 && (*(_DWORD *)(a1 + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v3, 1, &v20);
    PnpUnlockMountableDevice((__int64)v3);
    PipClearDevNodeFlags(a1, 0x1000000);
    v4 = v21;
  }
  v12 = *(_DWORD *)(a1 + 300);
  if ( v12 < 769 || v12 > 770 && (v12 <= 776 || v12 == 778 || (unsigned int)(v12 - 785) > 3) )
  {
    v13 = IopRemoveDevice(v3);
    PnpDisableDeviceInterfaces(a1 + 40);
    if ( v13 >= 0 )
      IopReleaseDeviceResources(a1, 0LL);
    v14 = a1;
    if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
    {
      v15 = 787;
LABEL_13:
      PipSetDevNodeState(v14, v15);
      goto LABEL_14;
    }
    PipSetDevNodeState(a1, 785);
    v15 = 782;
    if ( v9 == 782 )
    {
      v14 = a1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v10 == 778 && v4 )
  {
    IopDecrementDeviceObjectHandleCount((ULONG_PTR)v4);
    ObfDereferenceObject(v4);
  }
  if ( a2 && (*(_DWORD *)(a1 + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(a1, a2, v7);
  *(_DWORD *)(a1 + 704) &= ~2u;
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v16 = *(_QWORD *)(a1 + 32);
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
}
