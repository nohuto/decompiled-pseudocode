/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D61E0
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C00F90C4 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1C00FA058 (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00FA864 (DrvUpdateRemoteGraphicsDeviceList.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v4; // [rsp+20h] [rbp-58h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v5; // [rsp+28h] [rbp-50h]
  _QWORD v6[2]; // [rsp+60h] [rbp-18h] BYREF

  v6[0] = 0LL;
  v6[1] = 0LL;
  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
LABEL_6:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = 2191;
      xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, v4, v5, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
        xxxRestoreCsrssThreadDesktop(v6, 0LL);
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
    || (result = xxxSetCsrssThreadDesktop(grpdeskRitInput, v6), (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1LL, 0LL);
    LODWORD(v5) = 1;
    LODWORD(v4) = 128;
    xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, v4, v5, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
    goto LABEL_6;
  }
  return result;
}
