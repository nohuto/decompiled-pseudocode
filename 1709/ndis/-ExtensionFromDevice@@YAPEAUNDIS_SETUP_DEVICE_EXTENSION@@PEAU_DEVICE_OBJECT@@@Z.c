/*
 * XREFs of ?ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C001F638
 * Callers:
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00AC69C (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ndisWMIDispatch @ 0x1C00B7BFC (ndisWMIDispatch.c)
 * Callees:
 *     <none>
 */

struct NDIS_SETUP_DEVICE_EXTENSION *__fastcall ExtensionFromDevice(struct _DEVICE_OBJECT *a1)
{
  return (struct NDIS_SETUP_DEVICE_EXTENSION *)a1->DeviceExtension;
}
