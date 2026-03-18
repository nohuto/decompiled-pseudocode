/*
 * XREFs of imp_WdfInterruptEnable @ 0x1C0097BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C00A1EEC (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 */

void __fastcall imp_WdfInterruptEnable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  if ( (int)FxVerifierCheckIrqlLevel(pFxInterrupt->m_Globals, 0) >= 0 )
    FxInterrupt::ForceReconnect(pFxInterrupt);
}
