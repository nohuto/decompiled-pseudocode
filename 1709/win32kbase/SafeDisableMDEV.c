/*
 * XREFs of SafeDisableMDEV @ 0x1C00A5F10
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C0058504 (UpdateGraphicsDeviceList.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065520 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C00DD4C8 (VideoPortCalloutThread.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvDisableMDEV @ 0x1C00A27D0 (DrvDisableMDEV.c)
 */

__int64 __fastcall SafeDisableMDEV(unsigned int a1)
{
  if ( gbMDEVDisabled )
    return 1LL;
  if ( (unsigned int)DrvDisableMDEV(*(HSEMAPHORE ***)(gpDispInfo + 8), 1LL, a1) )
  {
    _InterlockedExchange(&gbMDEVDisabled, 1);
    return 1LL;
  }
  return 0LL;
}
