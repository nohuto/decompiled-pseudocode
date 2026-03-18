/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DC5EC
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DCE00 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0058550 (DrvUpdateGraphicsDeviceList.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C00F9570 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1C00FA2C8 (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00FAAA0 (DrvUpdateRemoteGraphicsDeviceList.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+50h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = 0LL;
  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
LABEL_6:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    {
      xxxUserSetDisplayConfig(0, 0, 2191, 2, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
        xxxRestoreCsrssThreadDesktop(v4, 0LL);
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
    || (result = xxxSetCsrssThreadDesktop(grpdeskRitInput, v4), (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1, 0);
    xxxUserSetDisplayConfig(0, 0, 128, 1, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
    goto LABEL_6;
  }
  return result;
}
