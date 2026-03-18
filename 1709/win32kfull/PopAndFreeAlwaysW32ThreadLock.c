/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0
 * Callers:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C000BD0C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ClientEventCallback @ 0x1C000C52C (ClientEventCallback.c)
 *     xxxCsEvent @ 0x1C000C874 (xxxCsEvent.c)
 *     NtUserQueryInformationThread @ 0x1C0047900 (NtUserQueryInformationThread.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxClientLoadImage @ 0x1C00522F0 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0053BA0 (xxxClientLoadMenu.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00589E0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     xxxClientAddFontResourceW @ 0x1C0058B94 (xxxClientAddFontResourceW.c)
 *     SfnINSTRING @ 0x1C0059620 (SfnINSTRING.c)
 *     ClientLoadLibrary @ 0x1C005A140 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C005A350 (SfnINLPCREATESTRUCT.c)
 *     xxxClientCallDitThread @ 0x1C005B094 (xxxClientCallDitThread.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C005B580 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnINSTRINGNULL @ 0x1C005C9F0 (SfnINSTRINGNULL.c)
 *     NtUserCreateWindowEx @ 0x1C0073740 (NtUserCreateWindowEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C0074FD0 (NtUserRegisterClassExWOW.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     NtUserGetClassInfoEx @ 0x1C009D7C0 (NtUserGetClassInfoEx.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00BF910 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00BFAB0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00BFBE4 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00C5834 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00C7210 (NtUserRegisterRawInputDevices.c)
 *     NtUserCreateWindowStation @ 0x1C00DAB20 (NtUserCreateWindowStation.c)
 *     xxxClientExpandStringW @ 0x1C00DCBFC (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00DD054 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1C00DDC8C (ClientGetListboxString.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00FC994 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C00FFBF0 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x1C0102BA0 (SfnPOWERBROADCAST.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0104150 (EditionHandleAndPostKeyEvent.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C01048E0 (NtUserfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C0109C50 (SfnCOPYDATA.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C010B8B0 (NtUserfnINDEVICECHANGE.c)
 *     EditionFreeIMEKeyboardLayouts @ 0x1C01190A0 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxClientCallDevCallbackCapture @ 0x1C011C694 (xxxClientCallDevCallbackCapture.c)
 *     xxxImmLoadLayout @ 0x1C011EFBC (xxxImmLoadLayout.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     xxxClientExtTextOutW @ 0x1C013BDEC (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C013C9A0 (SfnINLPMDICREATESTRUCT.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C01414F0 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01BEBD0 (xxxGetDeviceChangeInfo.c)
 *     xxxPointerWindowHitTest @ 0x1C01D6B30 (xxxPointerWindowHitTest.c)
 *     xxxArrangeWindow @ 0x1C01DD468 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01E3B50 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01E4270 (NtUserDrawCaptionTemp.c)
 *     NtUserResolveDesktopForWOW @ 0x1C01EABE0 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C01EDEE0 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C01EE600 (NtUserfnINLPHLPSTRUCT.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F3BC0 (xxxDeferredDesktopRotation.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01FA390 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01FABA0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C01FB680 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FBBD0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C01FC3E0 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C01FC7A0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FCB60 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C01FE4D0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C01FF5C0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C01FF9E0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0200910 (SfnTOUCHHITTESTING.c)
 *     xxxClientCallManipulationThread @ 0x1C0201440 (xxxClientCallManipulationThread.c)
 *     xxxClientFindMnemChar @ 0x1C0201EFC (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0202510 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02028F0 (xxxClientPSMTextOut.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 *     xxxMessageEvent @ 0x1C0213CD0 (xxxMessageEvent.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0216248 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C023D948 (xxxPSMGetTextExtent.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  *(_QWORD *)(v6 + 16) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
