/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C00657A4
 * Callers:
 *     DriverEntry @ 0x1C0012490 (DriverEntry.c)
 *     DriverUnload @ 0x1C0065960 (DriverUnload.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void FxLibraryCleanup(void)
{
  if ( FxLibraryGlobals.LibraryDeviceObject )
  {
    IoDeleteDevice(FxLibraryGlobals.LibraryDeviceObject);
    FxLibraryGlobals.LibraryDeviceObject = 0LL;
  }
  if ( FxLibraryGlobals.CompanionLibrary )
  {
    FxPoolFree(&FxLibraryGlobals.CompanionLibrary->m_CompanionLibrarySyncEvent.Header.Lock);
    FxLibraryGlobals.CompanionLibrary = 0LL;
  }
}
