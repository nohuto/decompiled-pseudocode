/*
 * XREFs of ?ndisSetupDeviceSurpriseRemoval@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C00F0900
 * Callers:
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00F06A4 (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisSetupDeviceSurpriseRemoval(struct NDIS_SETUP_DEVICE_EXTENSION *a1, struct _IRP *a2)
{
  bool v2; // zf

  v2 = !a1->IsDeviceInterfaceActive;
  a1->IsSurpriseRemoved = 1;
  if ( !v2 )
  {
    IoSetDeviceInterfaceState(&a1->SymbolicName, 0);
    a1->IsDeviceInterfaceActive = 0;
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(a1->NextDeviceObject, a2);
}
