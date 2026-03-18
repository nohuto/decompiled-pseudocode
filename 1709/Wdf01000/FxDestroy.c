/*
 * XREFs of FxDestroy @ 0x1C008056C
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0014F60 (imp_WdfDriverCreate.c)
 *     FxLibraryCommonUnregisterClient @ 0x1C00736A8 (FxLibraryCommonUnregisterClient.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C007E5D0 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?Release@_FX_DRIVER_GLOBALS@@QEAAKPEAXJPEBD@Z @ 0x1C0062F90 (-Release@_FX_DRIVER_GLOBALS@@QEAAKPEAXJPEBD@Z.c)
 *     UnlockVerifierSection @ 0x1C0080E20 (UnlockVerifierSection.c)
 *     ?FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C0081180 (-FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008244C (-FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0083184 (-FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxPurgeBugCheckDriverInfo @ 0x1C00A5240 (FxPurgeBugCheckDriverInfo.c)
 *     FxUnregisterBugCheckCallback @ 0x1C00A5304 (FxUnregisterBugCheckCallback.c)
 */

void __fastcall FxDestroy(_FX_DRIVER_GLOBALS *FxDriverGlobals, void *a2, int a3, const char *a4)
{
  _FX_DRIVER_GLOBALS::Release(FxDriverGlobals, a2, a3, a4);
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&FxDriverGlobals->DestroyEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  if ( FxDriverGlobals->FxVerifierLock )
  {
    FxVerifierLock::FreeThreadTable(FxDriverGlobals);
    FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 0;
  }
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(FxDriverGlobals, 5u, 0xAu, 0x13u, WPP_wdfpool_cpp_Traceguids, &FxDriverGlobals->FxPoolFrameworks);
  if ( FxDriverGlobals->FxPoolTrackingOn )
  {
    FxPoolDump(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
    FxMdlDump(FxDriverGlobals);
  }
  FxDriverGlobals->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = 0;
  FxDriverGlobals->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized = 0;
  FxUnregisterBugCheckCallback(FxDriverGlobals);
  FxPurgeBugCheckDriverInfo(FxDriverGlobals);
  if ( FxDriverGlobals->FxVerifierOn )
    UnlockVerifierSection(FxDriverGlobals);
}
