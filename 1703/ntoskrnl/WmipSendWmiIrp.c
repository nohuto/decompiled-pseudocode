/*
 * XREFs of WmipSendWmiIrp @ 0x140580D5C
 * Callers:
 *     WmipQueryAllData @ 0x1404BE8F4 (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x1405807A8 (WmipQuerySetExecuteSI.c)
 *     WmipSendEnableDisableRequest @ 0x140581C7C (WmipSendEnableDisableRequest.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140595CB0 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipRegisterOrUpdateDS @ 0x1405A01A0 (WmipRegisterOrUpdateDS.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405A0E6C (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessLegacyEtwCallback @ 0x1405D8FA4 (WmipProcessLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x140707C28 (WmipDereferenceEvent.c)
 * Callees:
 *     IoAllocateIrp @ 0x140081530 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     WmipForwardWmiIrp @ 0x1404BEDA0 (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(
        UCHAR a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v11; // rbx
  unsigned int v12; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v11 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v12 = WmipForwardWmiIrp(Irp, a1, a2, a3, a4, a5);
    *a6 = *(_OWORD *)&v11->IoStatus.Status;
    IoFreeIrp(v11);
    if ( v12 != -1073741160 )
      return v12;
  }
  return 3221225626LL;
}
