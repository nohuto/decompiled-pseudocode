/*
 * XREFs of imp_WdfInterruptReportInactive @ 0x1C0097D90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C00A25D8 (-ReportInactive@FxInterrupt@@QEAAXE@Z.c)
 */

void __fastcall imp_WdfInterruptReportInactive(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  FxInterrupt::ReportInactive(pFxInterrupt, 0);
}
