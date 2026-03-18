/*
 * XREFs of ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C00286B0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkEnableHighPrecisionBrightness @ 0x1C01AE380 (DxgkEnableHighPrecisionBrightness.c)
 *     DxgkLPMDisplayControl @ 0x1C01AE410 (DxgkLPMDisplayControl.c)
 *     DxgkSetHighPrecisionBrightness @ 0x1C01AE510 (DxgkSetHighPrecisionBrightness.c)
 *     LPMDisplayRegisterInternalDisplay @ 0x1C01AE590 (LPMDisplayRegisterInternalDisplay.c)
 *     LPMDisplayUnregisterInternalDisplay @ 0x1C01AE614 (LPMDisplayUnregisterInternalDisplay.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C01AE69C (LPMSetTTMDisplayPowerState.c)
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
