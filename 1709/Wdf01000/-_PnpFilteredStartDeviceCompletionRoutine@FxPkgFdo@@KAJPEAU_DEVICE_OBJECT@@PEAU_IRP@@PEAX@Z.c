/*
 * XREFs of ?_PnpFilteredStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C009F590
 * Callers:
 *     <none>
 * Callees:
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0036750 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C009F354 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxFilteredStartContext *Context)
{
  FxPkgPnp *PkgFdo; // rbx
  unsigned __int16 v6; // r9

  PkgFdo = Context->PkgFdo;
  FxFilteredStartContext::`scalar deleting destructor'(Context);
  return FxPkgFdo::_PnpStartDeviceCompletionRoutine(DeviceObject, Irp, PkgFdo, v6);
}
