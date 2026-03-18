/*
 * XREFs of DriverUnload @ 0x1C0065960
 * Callers:
 *     <none>
 * Callees:
 *     ?FxLibraryCleanup@@YAXXZ @ 0x1C00657A4 (-FxLibraryCleanup@@YAXXZ.c)
 *     ?WdfDeleteKmdfVersionFromRegistry@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00657E8 (-WdfDeleteKmdfVersionFromRegistry@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 */

void __fastcall DriverUnload(_DRIVER_OBJECT *DriverObject)
{
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "DriverUnload\n");
  }
  WdfDeleteKmdfVersionFromRegistry(DriverObject);
  FxLibraryCleanup();
}
