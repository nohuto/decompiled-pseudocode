/*
 * XREFs of LibraryUnregisterClient @ 0x1C00659E0
 * Callers:
 *     <none>
 * Callees:
 *     FxLibraryCommonUnregisterClient @ 0x1C00736A8 (FxLibraryCommonUnregisterClient.c)
 */

int __fastcall LibraryUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  return FxLibraryCommonUnregisterClient(Info, WdfDriverGlobals);
}
