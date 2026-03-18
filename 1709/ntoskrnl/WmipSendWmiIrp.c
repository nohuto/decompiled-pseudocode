/*
 * XREFs of WmipSendWmiIrp @ 0x14051F050
 * Callers:
 *     WmipQueryAllData @ 0x14051B564 (WmipQueryAllData.c)
 *     WmipEnableCollectionForNewGuid @ 0x14051C2C4 (WmipEnableCollectionForNewGuid.c)
 *     WmipQuerySetExecuteSI @ 0x14051ECEC (WmipQuerySetExecuteSI.c)
 *     WmipRegisterOrUpdateDS @ 0x140544FA8 (WmipRegisterOrUpdateDS.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140593B58 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableDisableRequest @ 0x1405D5EF0 (WmipSendEnableDisableRequest.c)
 *     WmipDereferenceEvent @ 0x140741814 (WmipDereferenceEvent.c)
 *     WmipProcessLegacyEtwCallback @ 0x140742C4C (WmipProcessLegacyEtwCallback.c)
 * Callees:
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x1400DEBD0 (IoAllocateIrp.c)
 *     WmipForwardWmiIrp @ 0x14051F140 (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v8; // rbx
  unsigned int v9; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v8 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v9 = WmipForwardWmiIrp(Irp, a4, a5);
    *a6 = *(_OWORD *)&v8->IoStatus.Status;
    IoFreeIrp(v8);
    if ( v9 != -1073741160 )
      return v9;
  }
  return 3221225626LL;
}
