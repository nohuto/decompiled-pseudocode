/*
 * XREFs of ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063698
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0056058 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 * Callees:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00636C4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

struct tagMONITOR *CreateCachedMonitor(void)
{
  struct tagMONITOR *result; // rax

  result = (struct tagMONITOR *)gpMonitorCached;
  if ( !gpMonitorCached )
  {
    result = CreateMonitor();
    gpMonitorCached = result;
  }
  return result;
}
