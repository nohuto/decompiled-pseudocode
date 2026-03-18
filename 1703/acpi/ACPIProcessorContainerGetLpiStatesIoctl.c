/*
 * XREFs of ACPIProcessorContainerGetLpiStatesIoctl @ 0x1C0055D60
 * Callers:
 *     ACPIProcessorDeviceControl @ 0x1C0090150 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C0055964 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerEvaluateLpiObjects @ 0x1C0055B14 (ACPIProcessorContainerEvaluateLpiObjects.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C0055BA4 (ACPIProcessorContainerFillIoctlBuffer.c)
 */

__int64 __fastcall ACPIProcessorContainerGetLpiStatesIoctl(PIRP Irp, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // r14
  int v6; // ebx
  char v7; // si
  unsigned __int64 v8; // rsi
  _IRP *MasterIrp; // r8
  int v10; // eax
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  Irp->IoStatus.Information = 0LL;
  v5 = v4;
  if ( *(_DWORD *)(a2 + 8) >= 0x20u )
  {
    Irp->IoStatus.Information = 0LL;
    if ( AcpiProcessorContainerHierarchyLocked )
    {
      v7 = AcpiProcessorContainerHierarchyEvaluated;
    }
    else
    {
      v7 = 1;
      AcpiProcessorContainerHierarchyLocked = 1;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
      v12 = 0;
      v6 = ACPIProcessorContainerEvaluateLpiObjects((_QWORD **)&AcpiProcessorContainerRootList, (int *)&v12);
      v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      if ( v6 < 0 )
        goto LABEL_14;
      AcpiProcessorContainerHierarchyEvaluated = 1;
    }
    if ( v7 )
    {
      v12 = 24 * AcpiProcessorContainerCount + 8;
      v6 = ACPIProcessorContainerComputeIoctlPayloadSize(&AcpiProcessorContainerRootList, &v12);
      if ( v6 >= 0 )
      {
        v8 = v12;
        MasterIrp = Irp->AssociatedIrp.MasterIrp;
        *(_DWORD *)&MasterIrp->Type = v12;
        if ( *(_DWORD *)(a2 + 8) >= (unsigned int)v8 )
        {
          v10 = AcpiProcessorContainerCount;
          *(_DWORD *)&MasterIrp->AllocationProcessorNumber = AcpiProcessorContainerCount;
          v12 = 24 * v10 + 8;
          v6 = ACPIProcessorContainerFillIoctlBuffer(
                 &AcpiProcessorContainerRootList,
                 -1,
                 (__int64)MasterIrp,
                 &v12,
                 *(_DWORD *)(a2 + 8));
          if ( v6 >= 0 )
            Irp->IoStatus.Information = v8;
        }
        else
        {
          Irp->IoStatus.Information = 4LL;
          v6 = -2147483643;
        }
      }
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741789;
  }
LABEL_14:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
