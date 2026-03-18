/*
 * XREFs of ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8
 * Callers:
 *     NtUserGetRawInputData @ 0x1C00073A0 (NtUserGetRawInputData.c)
 *     xxxSetModernAppWindow @ 0x1C0008910 (xxxSetModernAppWindow.c)
 *     NtUserSetActivationFilter @ 0x1C000C1D0 (NtUserSetActivationFilter.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0044F58 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     NtUserGetPointerDeviceRects @ 0x1C004A540 (NtUserGetPointerDeviceRects.c)
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 *     NtUserRegisterHotKey @ 0x1C0052CC0 (NtUserRegisterHotKey.c)
 *     NtUserUnhookWinEvent @ 0x1C00566B0 (NtUserUnhookWinEvent.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005DB08 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     _FindWindowEx @ 0x1C006E920 (_FindWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     _UnregisterClass @ 0x1C0073050 (_UnregisterClass.c)
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C007DEFC (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     SendDwmIconChange @ 0x1C008B294 (SendDwmIconChange.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     UserJobCallout @ 0x1C008CB00 (UserJobCallout.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     xxxInsertMenuItem @ 0x1C0096D20 (xxxInsertMenuItem.c)
 *     NtUserSetCursorIconData @ 0x1C0098670 (NtUserSetCursorIconData.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 *     NtUserGetIconInfo @ 0x1C0098EF0 (NtUserGetIconInfo.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C009AA00 (NtUserDeferWindowPosAndBand.c)
 *     NtUserDestroyCursor @ 0x1C009ADE0 (NtUserDestroyCursor.c)
 *     NtUserDrawIconEx @ 0x1C009AE70 (NtUserDrawIconEx.c)
 *     _GetClassInfoEx @ 0x1C009DAA0 (_GetClassInfoEx.c)
 *     NtUserGetPointerDevices @ 0x1C00B1290 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00B3A10 (NtUserGetPointerDeviceProperties.c)
 *     NtUserUnregisterHotKey @ 0x1C00C3450 (NtUserUnregisterHotKey.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00C7210 (NtUserRegisterRawInputDevices.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C00CA2B4 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00CADA4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D5DB0 (NtUserSetBrokeredForeground.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00DB1AC (xxxCreateWindowStation.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00E34AC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxDwmStopRedirection @ 0x1C00E3780 (xxxDwmStopRedirection.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     NtUserSetThreadInputBlocked @ 0x1C00F9A20 (NtUserSetThreadInputBlocked.c)
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00FA654 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     NtUserCopyAcceleratorTable @ 0x1C00FEEE0 (NtUserCopyAcceleratorTable.c)
 *     SuspendThreadQueue @ 0x1C0105060 (SuspendThreadQueue.c)
 *     NtUserUpdateInputContext @ 0x1C0108970 (NtUserUpdateInputContext.c)
 *     NtUserRegisterUserApiHook @ 0x1C010B3F0 (NtUserRegisterUserApiHook.c)
 *     NtUserRegisterDManipHook @ 0x1C010B680 (NtUserRegisterDManipHook.c)
 *     NtUserAssociateInputContext @ 0x1C010F460 (NtUserAssociateInputContext.c)
 *     NtUserBuildHimcList @ 0x1C0112B90 (NtUserBuildHimcList.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0112FB0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserDestroyMenu @ 0x1C01143F0 (NtUserDestroyMenu.c)
 *     xxxCsDdeInitialize @ 0x1C01189A4 (xxxCsDdeInitialize.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0118D60 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserSetGestureConfig @ 0x1C0119C40 (NtUserSetGestureConfig.c)
 *     NtUserGetRawInputDeviceList @ 0x1C011D080 (NtUserGetRawInputDeviceList.c)
 *     NtUserSetWindowStationUser @ 0x1C011DF00 (NtUserSetWindowStationUser.c)
 *     NtUserSetMenuDefaultItem @ 0x1C011F5A0 (NtUserSetMenuDefaultItem.c)
 *     NtUserCallHwndOpt @ 0x1C0121FA0 (NtUserCallHwndOpt.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C0125D30 (NtUserRegisterTouchPadCapable.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C0139010 (NtUserGetPointerDeviceCursors.c)
 *     NtUserDestroyInputContext @ 0x1C013A760 (NtUserDestroyInputContext.c)
 *     NtUserGetPointerDevice @ 0x1C013B660 (NtUserGetPointerDevice.c)
 *     NtUserCheckMenuItem @ 0x1C013D510 (NtUserCheckMenuItem.c)
 *     zzzAnimateFade @ 0x1C013DECC (zzzAnimateFade.c)
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C013EF80 (NtUserGetOwnerTransformedMonitorRect.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01405C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ProcessHidRawInput @ 0x1C01B6690 (ProcessHidRawInput.c)
 *     EditionPostInertiaMessage @ 0x1C01C0760 (EditionPostInertiaMessage.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01C4EEC (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     zzzStartSonar @ 0x1C01C574C (zzzStartSonar.c)
 *     DestroyTask @ 0x1C01C6870 (DestroyTask.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D3CDC (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 *     ?DelegateCapturePointersMitOff@@YAHIPEAI0@Z @ 0x1C01E2468 (-DelegateCapturePointersMitOff@@YAHIPEAI0@Z.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01E2614 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 *     NtUserBlockInput @ 0x1C01E30F0 (NtUserBlockInput.c)
 *     NtUserGetGestureConfig @ 0x1C01E52F0 (NtUserGetGestureConfig.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01E5870 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     NtUserGetLayeredWindowAttributes @ 0x1C01E61A0 (NtUserGetLayeredWindowAttributes.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C01E6740 (NtUserGetPhysicalDeviceRect.c)
 *     NtUserGetRawInputBuffer @ 0x1C01E6910 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRegisteredRawInputDevices @ 0x1C01E6C60 (NtUserGetRegisteredRawInputDevices.c)
 *     NtUserImpersonateDdeClientWindow @ 0x1C01E8180 (NtUserImpersonateDdeClientWindow.c)
 *     NtUserInjectGesture @ 0x1C01E83E0 (NtUserInjectGesture.c)
 *     NtUserSetCalibrationData @ 0x1C01EAFA0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C01EB330 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C01EB580 (NtUserSetDisplayMapping.c)
 *     NtUserSetFallbackForeground @ 0x1C01EB6C0 (NtUserSetFallbackForeground.c)
 *     NtUserSetMenuContextHelpId @ 0x1C01EBA60 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C01EBAD0 (NtUserSetMenuFlagRtoL.c)
 *     NtUserSetObjectInformation @ 0x1C01EBC00 (NtUserSetObjectInformation.c)
 *     NtUserUnregisterUserApiHook @ 0x1C01ED000 (NtUserUnregisterUserApiHook.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01EFA30 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     xxxSetWindowShowState @ 0x1C020C98C (xxxSetWindowShowState.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 *     xxxHardErrorControl @ 0x1C020DE0C (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall UserAtomicCheck::~UserAtomicCheck(UserAtomicCheck *this)
{
  unsigned int v2; // edx

  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(this) )
    {
      if ( !*(_BYTE *)this )
      {
        --gdwInAtomicOperation;
        if ( gpAtomickCheckStacks )
        {
          v2 = 0;
          if ( gdwAtomicCheckLogSize )
          {
            while ( *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) != *((_DWORD *)this + 1) )
            {
              if ( ++v2 >= gdwAtomicCheckLogSize )
                return;
            }
            *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) = 0;
          }
        }
      }
    }
  }
}
