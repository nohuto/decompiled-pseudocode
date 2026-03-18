/*
 * XREFs of FxLibraryCommonUnregisterClient @ 0x1C00736A8
 * Callers:
 *     LibraryUnregisterClient @ 0x1C00659E0 (LibraryUnregisterClient.c)
 * Callees:
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006E9E4 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxDestroy @ 0x1C008056C (FxDestroy.c)
 *     FxFreeDriverGlobals @ 0x1C00806FC (FxFreeDriverGlobals.c)
 *     UnlockVerifierSection @ 0x1C0080E20 (UnlockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  unsigned int v4; // edi
  __int64 v5; // rcx

  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: enter\n");
  }
  if ( Info && WdfDriverGlobals )
  {
    v4 = 0;
    v5 = *(_QWORD *)&WdfDriverGlobals[-7].DriverName[16];
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
      FxDestroy((_FX_DRIVER_GLOBALS *)WdfDriverGlobals[-8].DriverName);
    }
    FxIFRStop((_FX_DRIVER_GLOBALS *)WdfDriverGlobals[-8].DriverName);
    if ( (unsigned __int16)*(_DWORD *)&WdfDriverGlobals[-1].DriverName[12] )
      UnlockVerifierSection((_FX_DRIVER_GLOBALS *)WdfDriverGlobals[-8].DriverName);
    FxFreeDriverGlobals(WdfDriverGlobals);
  }
  else
  {
    v4 = -1073741823;
  }
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: exit: status %X\n", v4);
  }
  return v4;
}
