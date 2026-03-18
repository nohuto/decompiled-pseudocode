/*
 * XREFs of SafeDisableMDEV @ 0x1C009BED0
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C00436FC (UpdateGraphicsDeviceList.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0056058 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvDisableMDEV @ 0x1C0098680 (DrvDisableMDEV.c)
 */

__int64 __fastcall SafeDisableMDEV(unsigned int a1)
{
  if ( gbMDEVDisabled )
    return 1LL;
  if ( (unsigned int)DrvDisableMDEV(*((HDEV **)gpDispInfo + 1), 1LL, a1) )
  {
    _InterlockedExchange(&gbMDEVDisabled, 1);
    return 1LL;
  }
  return 0LL;
}
