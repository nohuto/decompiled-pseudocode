/*
 * XREFs of ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C003323C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C01A7A70 (-DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z.c)
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C01A7B00 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 *     ?DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C01A7C00 (-DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 *     ?LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z @ 0x1C01A8060 (-LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z.c)
 *     ?LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z @ 0x1C01A80E4 (-LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C01A816C (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

AutoResourceLock *__fastcall AutoResourceLock::AutoResourceLock(AutoResourceLock *this, struct _ERESOURCE *a2)
{
  *(_QWORD *)this = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)this, 1u);
  return this;
}
