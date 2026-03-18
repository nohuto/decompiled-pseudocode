/*
 * XREFs of ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C0038520
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkEnableHighPrecisionBrightness @ 0x1C0198520 (DxgkEnableHighPrecisionBrightness.c)
 *     DxgkLPMDisplayControl @ 0x1C01985B0 (DxgkLPMDisplayControl.c)
 *     DxgkSetHighPrecisionBrightness @ 0x1C01986B0 (DxgkSetHighPrecisionBrightness.c)
 *     LPMDisplayRegisterInternalDisplay @ 0x1C0198730 (LPMDisplayRegisterInternalDisplay.c)
 *     LPMDisplayUnregisterInternalDisplay @ 0x1C01987B4 (LPMDisplayUnregisterInternalDisplay.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C019883C (LPMSetTTMDisplayPowerState.c)
 * Callees:
 *     <none>
 */

AutoResourceLock *__fastcall AutoResourceLock::AutoResourceLock(AutoResourceLock *this, struct _ERESOURCE *a2)
{
  *(_QWORD *)this = P;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)this, 1u);
  return this;
}
