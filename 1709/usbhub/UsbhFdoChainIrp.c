/*
 * XREFs of UsbhFdoChainIrp @ 0x1C00292C8
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C0007B20 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0008230 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoReturnHubCount @ 0x1C0009D40 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0009DE0 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoSystemControl @ 0x1C001F750 (UsbhFdoSystemControl.c)
 *     UsbhFdoDeviceControl @ 0x1C003B620 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
