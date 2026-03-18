/*
 * XREFs of xxxSendNotifyMessage @ 0x1C003C9B0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004A10 (xxxSetModernAppWindow.c)
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C003BDA0 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00AE988 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AFB1C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxSendFocusMessages @ 0x1C00B5394 (xxxSendFocusMessages.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C2910 (xxxDWP_UpdateUIState.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00C8B7C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxFullScreenCleanup @ 0x1C00FD0D0 (xxxFullScreenCleanup.c)
 *     xxxSetDeskWallpaper @ 0x1C0114D24 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C0114E80 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     _NotifyOverlayWindow @ 0x1C01B5980 (_NotifyOverlayWindow.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0202950 (xxxBroadcastPaletteChanged.c)
 *     xxxSendMenuSelect @ 0x1C0219F28 (xxxSendMenuSelect.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxSendMessageCallback @ 0x1C003CBE4 (xxxSendMessageCallback.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0107A6C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0115A20 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5)
{
  struct _LARGE_STRING *v5; // r10
  char v9; // di
  _BYTE v10[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  _QWORD v12[4]; // [rsp+60h] [rbp-28h] BYREF

  v5 = a4;
  if ( a1 != (struct tagWND *)-1LL )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  v9 = 0;
  if ( a2 < 0x1A )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  if ( a2 > 0x1B )
  {
    if ( a2 == 42 )
      goto LABEL_8;
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  }
  if ( a4 )
  {
    if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v10, a4) )
      return 0LL;
    PushW32ThreadLock(v11, v12, (__int64)Win32FreePool);
    v5 = (struct _LARGE_STRING *)v10;
    v9 = 1;
  }
LABEL_8:
  xxxSystemBroadcastMessage(a2, a3, (__int64)v5, 1u, 0LL, a5, 0);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v12);
  return 1LL;
}
