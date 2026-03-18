/*
 * XREFs of memmove @ 0x1C01401C0
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     NtUserGetRawInputData @ 0x1C0002540 (NtUserGetRawInputData.c)
 *     FixupGrayScan @ 0x1C0002AF0 (FixupGrayScan.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000312C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     xxxCsEvent @ 0x1C00076A8 (xxxCsEvent.c)
 *     NtGdiCreateServerMetaFile @ 0x1C0007C60 (NtGdiCreateServerMetaFile.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C000BB4C (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C000C87C (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C0011850 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     NtUserCreateWindowStation @ 0x1C0012850 (NtUserCreateWindowStation.c)
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C0013A54 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     NtUserQueryInformationThread @ 0x1C00167C0 (NtUserQueryInformationThread.c)
 *     SetAppCompatFlags @ 0x1C0018610 (SetAppCompatFlags.c)
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C001AFC0 (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     NtUserConsoleControl @ 0x1C001B670 (NtUserConsoleControl.c)
 *     xxxConsoleControl @ 0x1C001B784 (xxxConsoleControl.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C001EE80 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00203A0 (NtUserGetPointerDeviceProperties.c)
 *     NtGdiHLSurfGetInformation @ 0x1C0023FD0 (NtGdiHLSurfGetInformation.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0025438 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C002741C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C00274EC (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     NtGdiGetUFI @ 0x1C00286D0 (NtGdiGetUFI.c)
 *     GreGetUFI @ 0x1C00287F0 (GreGetUFI.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00296A8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C0029ACC (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     hfontCreate @ 0x1C002B4D0 (hfontCreate.c)
 *     BuildAndLoadLinkedFontRoutine @ 0x1C002B6E0 (BuildAndLoadLinkedFontRoutine.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C002B8C0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     NtGdiEnumFonts @ 0x1C002BF00 (NtGdiEnumFonts.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C002D030 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C002D170 (GreGetOutlineTextMetricsInternalW.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C002EA60 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C002EB48 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     cjCopyFontDataW @ 0x1C002EE8C (cjCopyFontDataW.c)
 *     NtUserRegisterClassExWOW @ 0x1C0034FD0 (NtUserRegisterClassExWOW.c)
 *     NtUserCreateWindowEx @ 0x1C00378A0 (NtUserCreateWindowEx.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0037F20 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserGetClassInfoEx @ 0x1C0039810 (NtUserGetClassInfoEx.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     NtUserSendInput @ 0x1C003B0E0 (NtUserSendInput.c)
 *     DefSetText @ 0x1C0041BC0 (DefSetText.c)
 *     xxxInsertMenuItem @ 0x1C0041F78 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0042670 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     CreateProp @ 0x1C0042B34 (CreateProp.c)
 *     NtGdiExtGetObjectW @ 0x1C00461D0 (NtGdiExtGetObjectW.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     _SetCursorIconData @ 0x1C0046B74 (_SetCursorIconData.c)
 *     bCaptureBitmapInfo @ 0x1C0047C90 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0057CE0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     NtUserBuildHwndList @ 0x1C0068D00 (NtUserBuildHwndList.c)
 *     ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C0075E10 (-vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C007E154 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     NtGdiGetDIBitsInternal @ 0x1C007F950 (NtGdiGetDIBitsInternal.c)
 *     RenderNineGridInternal @ 0x1C00821F0 (RenderNineGridInternal.c)
 *     DNG_DrawRow @ 0x1C0082F30 (DNG_DrawRow.c)
 *     NtGdiDrawStream @ 0x1C00847D0 (NtGdiDrawStream.c)
 *     NtGdiGetTextFaceW @ 0x1C00871D0 (NtGdiGetTextFaceW.c)
 *     GreGetTextFaceW @ 0x1C00872D0 (GreGetTextFaceW.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0089D10 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     NtGdiGetTextExtentExW @ 0x1C008A2E0 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetRealizationInfo @ 0x1C008A5F0 (NtGdiGetRealizationInfo.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C0090090 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0090130 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     NtGdiExtEscape @ 0x1C0090BE0 (NtGdiExtEscape.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00914E0 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C0091B70 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0091D90 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     NtGdiExtTextOutW @ 0x1C0092A40 (NtGdiExtTextOutW.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x1C0092DD0 (-CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C00938F0 (NtGdiStretchDIBitsInternal.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C00963F4 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C0097518 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00975E0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0097B84 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     pppUserModeCallback @ 0x1C0098604 (pppUserModeCallback.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0099A70 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C009A8A0 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C009B810 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiDoPalette @ 0x1C009F000 (NtGdiDoPalette.c)
 *     InitializeFUDI @ 0x1C00A27B8 (InitializeFUDI.c)
 *     InputAABFDATAToAA24 @ 0x1C00A3230 (InputAABFDATAToAA24.c)
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00A86F0 (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 *     NtGdiGradientFill @ 0x1C00A8E20 (NtGdiGradientFill.c)
 *     ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00AAC90 (-vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vRop2FunctionA@@YAXPEAK00K@Z @ 0x1C00AAD60 (-vRop2FunctionA@@YAXPEAK00K@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00AAE10 (-vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00AB6F0 (-vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00AC0D0 (-vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vRop2FunctionC@@YAXPEAK00K@Z @ 0x1C00AC4B0 (-vRop2FunctionC@@YAXPEAK00K@Z.c)
 *     _ConvertMemHandle @ 0x1C00AE1AC (_ConvertMemHandle.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00B0990 (NtUserRegisterRawInputDevices.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C00BAAF0 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxClientCallDitThread @ 0x1C00C56DC (xxxClientCallDitThread.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C00C6AA0 (NtUserfnINDEVICECHANGE.c)
 *     NtUserSetInformationThread @ 0x1C00C73B0 (NtUserSetInformationThread.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C00D5664 (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00D7A10 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00DADC0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiHfontCreate @ 0x1C00DBD90 (NtGdiHfontCreate.c)
 *     ConvertToAndFromWideChar @ 0x1C00DE870 (ConvertToAndFromWideChar.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00DEB68 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     NtUserProcessConnect @ 0x1C00DF5B0 (NtUserProcessConnect.c)
 *     _GetUserObjectInformation @ 0x1C00DFF38 (_GetUserObjectInformation.c)
 *     NtGdiPolyTextOutW @ 0x1C00E0B00 (NtGdiPolyTextOutW.c)
 *     NtUserInternalGetWindowText @ 0x1C00E1480 (NtUserInternalGetWindowText.c)
 *     NtGdiGetCharABCWidthsW @ 0x1C00E1E10 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetWidthTable @ 0x1C00E2570 (NtGdiGetWidthTable.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00E4CC8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetFontData @ 0x1C00E5010 (NtGdiGetFontData.c)
 *     NtGdiTransformPoints @ 0x1C00E5260 (NtGdiTransformPoints.c)
 *     NtGdiGetGlyphOutline @ 0x1C00E57F0 (NtGdiGetGlyphOutline.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C00E9738 (DwmSyncGetCompositionAttribute.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00ED180 (HT_CreateDeviceHalftoneInfo.c)
 *     ExpandHTPatX @ 0x1C00EDEBC (ExpandHTPatX.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00EF624 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00F1C20 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     GetCachedSMP @ 0x1C00F41D4 (GetCachedSMP.c)
 *     ReferenceClass @ 0x1C00F4DC0 (ReferenceClass.c)
 *     NtGdiGetCharWidthW @ 0x1C00F5A30 (NtGdiGetCharWidthW.c)
 *     NtUserSystemParametersInfoForDpi @ 0x1C00F5FA0 (NtUserSystemParametersInfoForDpi.c)
 *     ?CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z @ 0x1C00F7280 (-CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z.c)
 *     _BuildNameList @ 0x1C00F7DC4 (_BuildNameList.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00F8F00 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     NtGdiGetLinkedUFIs @ 0x1C00F9130 (NtGdiGetLinkedUFIs.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C00FA150 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1C00FB9D0 (NtGdiGetFontUnicodeRanges.c)
 *     vProcessEntry @ 0x1C00FC9E0 (vProcessEntry.c)
 *     RemoveProcessFromJob @ 0x1C00FD380 (RemoveProcessFromJob.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C00FD6B0 (NtUserfnPOWERBROADCAST.c)
 *     NtGdiStartDoc @ 0x1C00FF7D0 (NtGdiStartDoc.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C0105A60 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C0105C14 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 *     ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1C0105F70 (-_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z.c)
 *     ?_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z @ 0x1C0105FFC (-_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z.c)
 *     _CreateAcceleratorTable @ 0x1C01069B8 (_CreateAcceleratorTable.c)
 *     AllocateUnicodeString @ 0x1C0106BB8 (AllocateUnicodeString.c)
 *     NtGdiGetProcessSessionFonts @ 0x1C01074F0 (NtGdiGetProcessSessionFonts.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C0107814 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0108150 (xxxProcessSetWindowPosEvent.c)
 *     GreRealizePalette @ 0x1C0108418 (GreRealizePalette.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0109DD0 (NtUserGetRawInputDeviceInfo.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C010A860 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010CF54 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     NtUserSetGestureConfig @ 0x1C0110B20 (NtUserSetGestureConfig.c)
 *     NtGdiQueryFonts @ 0x1C01114D0 (NtGdiQueryFonts.c)
 *     xxxClientCallDevCallbackCapture @ 0x1C0113458 (xxxClientCallDevCallbackCapture.c)
 *     _SetWindowStationUser @ 0x1C0113AB0 (_SetWindowStationUser.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C01140E8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0115A20 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 *     PREALLOCMEM2 @ 0x1C0116F40 (PREALLOCMEM2.c)
 *     FastExpAA_CY @ 0x1C011DA50 (FastExpAA_CY.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C0124D14 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     NtGdiGetKerningPairs @ 0x1C01282E0 (NtGdiGetKerningPairs.c)
 *     NtGdiGetETM @ 0x1C012A0D0 (NtGdiGetETM.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C012AA00 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C012CA04 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C012CAAC (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C012D0D4 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C012E1C0 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 *     FixupColorScan @ 0x1C012F938 (FixupColorScan.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C0130250 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0130698 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     CreateStandardMonoPattern @ 0x1C01309F8 (CreateStandardMonoPattern.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C0134990 (-vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0134C50 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C0134C9C (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     NtGdiExtCreatePen @ 0x1C0135F20 (NtGdiExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C0136D20 (NtGdiCreateDIBBrush.c)
 *     GreCreateDIBBrush @ 0x1C0136E1C (GreCreateDIBBrush.c)
 *     NtUserCreateLocalMemHandle @ 0x1C0139110 (NtUserCreateLocalMemHandle.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C013B8D4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C0198BC0 (-CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C0198F30 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     CopyTPPointerInputFrame @ 0x1C019A718 (CopyTPPointerInputFrame.c)
 *     HoldRimCompleteFrame @ 0x1C019AC00 (HoldRimCompleteFrame.c)
 *     ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C01A22A8 (-RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z.c)
 *     GetTaskName @ 0x1C01B2230 (GetTaskName.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01B2F74 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01B4B50 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01B7374 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01B8DD0 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01B8FA0 (-DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01BDF74 (ProbeAndCaptureSoftKbdData.c)
 *     EditionBuildManipulationInputInfo @ 0x1C01C9CA0 (EditionBuildManipulationInputInfo.c)
 *     EditionSetManipulationInputTarget @ 0x1C01D6740 (EditionSetManipulationInputTarget.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01D7340 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01D7A50 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureConfig @ 0x1C01D8990 (NtUserGetGestureConfig.c)
 *     NtUserGetGestureExtArgs @ 0x1C01D8C50 (NtUserGetGestureExtArgs.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01D95B0 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserGetRawInputBuffer @ 0x1C01DA4C0 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C01DA810 (NtUserGetRawPointerDeviceData.c)
 *     NtUserGetTouchInputInfo @ 0x1C01DAAF0 (NtUserGetTouchInputInfo.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01DB6E0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserInjectTouchInput @ 0x1C01DC4A0 (NtUserInjectTouchInput.c)
 *     NtUserMagGetContextInformation @ 0x1C01DCD40 (NtUserMagGetContextInformation.c)
 *     NtUserProcessInkFeedbackCommand @ 0x1C01DE2F0 (NtUserProcessInkFeedbackCommand.c)
 *     NtUserResolveDesktopForWOW @ 0x1C01DEAC0 (NtUserResolveDesktopForWOW.c)
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C01DEC70 (NtUserSendInteractiveControlHapticsReport.c)
 *     NtUserSetCalibrationData @ 0x1C01DEE80 (NtUserSetCalibrationData.c)
 *     NtUserSlicerControl @ 0x1C01E0780 (NtUserSlicerControl.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01E1300 (NtUserUserHandleGrantAccess.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C01E2440 (NtUserfnINLPHLPSTRUCT.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01E7F4C (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     RemoteShadowCleanup @ 0x1C01EE430 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01EE5A0 (RemoteShadowStart.c)
 *     AllocGestureInfo @ 0x1C01EF110 (AllocGestureInfo.c)
 *     SfnIMECONTROL @ 0x1C01F9180 (SfnIMECONTROL.c)
 *     SfnPOUTLPINT @ 0x1C01FE0E0 (SfnPOUTLPINT.c)
 *     xxxClientCopyDDEIn1 @ 0x1C01FFD10 (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C0200268 (xxxClientCopyDDEOut1.c)
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0211600 (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0221278 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 *     pgsetComputeSymbolCP @ 0x1C02252C0 (pgsetComputeSymbolCP.c)
 *     bLoadFontFile @ 0x1C0227558 (bLoadFontFile.c)
 *     bLoadTTF @ 0x1C0227B94 (bLoadTTF.c)
 *     bLoadTTF_Cache @ 0x1C0228090 (bLoadTTF_Cache.c)
 *     bReloadGlyphSet @ 0x1C02282DC (bReloadGlyphSet.c)
 *     vCopy_IFIV @ 0x1C0229D5C (vCopy_IFIV.c)
 *     vFontFileCache @ 0x1C022B1A4 (vFontFileCache.c)
 *     bGeneratePath @ 0x1C022B58C (bGeneratePath.c)
 *     lGGOBitmap @ 0x1C022D44C (lGGOBitmap.c)
 *     ttfdQueryFontCaps @ 0x1C022E810 (ttfdQueryFontCaps.c)
 *     ttfdQueryTrueTypeTable2 @ 0x1C022EDC0 (ttfdQueryTrueTypeTable2.c)
 *     vCopyAndZeroOutPaddingBits @ 0x1C022EEA0 (vCopyAndZeroOutPaddingBits.c)
 *     BmfdQueryFontFile @ 0x1C02334C0 (BmfdQueryFontFile.c)
 *     bDescStr @ 0x1C0234448 (bDescStr.c)
 *     vStretchGlyphBitmap @ 0x1C02362C8 (vStretchGlyphBitmap.c)
 *     vtfdQueryFontFile @ 0x1C0238600 (vtfdQueryFontFile.c)
 *     TextCopy @ 0x1C0239350 (TextCopy.c)
 *     AddEllipsisAndDrawLine @ 0x1C0239ACC (AddEllipsisAndDrawLine.c)
 *     AddBGRMapCache @ 0x1C023CDF4 (AddBGRMapCache.c)
 *     CacheRGBToXYZ @ 0x1C023CF30 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C023D020 (ComputeBGRMappingTable.c)
 *     FindBGRMapCache @ 0x1C023DB4C (FindBGRMapCache.c)
 *     TrimBGRMapCache @ 0x1C023DFE0 (TrimBGRMapCache.c)
 *     CreateHalftoneBrushPat @ 0x1C023E0D8 (CreateHalftoneBrushPat.c)
 *     BltMask_CY @ 0x1C0241640 (BltMask_CY.c)
 *     ShrinkMask_CY @ 0x1C0241F60 (ShrinkMask_CY.c)
 *     ExpandDIB_CY @ 0x1C02434D0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0243E60 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C0244A60 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0245210 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0245EB0 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0246940 (ShrinkDIB_CY.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0248128 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     EngHangNotification @ 0x1C024AC50 (EngHangNotification.c)
 *     NtGdiGetMonitorID @ 0x1C024AE80 (NtGdiGetMonitorID.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0254BCC (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0254FCC (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreGetUFIPathname @ 0x1C0255CC0 (GreGetUFIPathname.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0256000 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0256480 (NtGdiSetLinkedUFIs.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C026A0C0 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     cMapRemoteFonts @ 0x1C026AC44 (cMapRemoteFonts.c)
 *     NtGdiPlgBlt @ 0x1C026E420 (NtGdiPlgBlt.c)
 *     FONTOBJ_vGetInfo @ 0x1C02737B0 (FONTOBJ_vGetInfo.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C027389C (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     GreGetCannonicalName @ 0x1C027413C (GreGetCannonicalName.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C02781B0 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0278360 (NtGdiGetEudcTimeStampEx.c)
 *     NtGdiGetStringBitmapW @ 0x1C02784A0 (NtGdiGetStringBitmapW.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027A3C8 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027A734 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C027CBD0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027F494 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z @ 0x1C02878C0 (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C0287B40 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C0287C6C (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0288340 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0288930 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C0289BE0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C0289DB0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C028A340 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C028B694 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C028BDAC (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C028CC60 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiDescribePixelFormat @ 0x1C028CFB0 (NtGdiDescribePixelFormat.c)
 *     NtGdiDrawEscape @ 0x1C028D050 (NtGdiDrawEscape.c)
 *     NtGdiGetCharacterPlacementW @ 0x1C028D200 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x1C028D840 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C028D9E0 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiGetRasterizerCaps @ 0x1C028DC60 (NtGdiGetRasterizerCaps.c)
 *     NtGdiGetTextExtent @ 0x1C028DCF0 (NtGdiGetTextExtent.c)
 *     NtGdiGetUFIPathname @ 0x1C028DE80 (NtGdiGetUFIPathname.c)
 *     NtGdiMakeFontDir @ 0x1C028E290 (NtGdiMakeFontDir.c)
 *     ProbeAndReadDesignVector @ 0x1C028EBFC (ProbeAndReadDesignVector.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C0290574 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C0290730 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     NtGdiEngGradientFill @ 0x1C0291820 (NtGdiEngGradientFill.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0292ED0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C0293470 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02935E0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C0293AE0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiResizePalette @ 0x1C02962A0 (NtGdiResizePalette.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C0296800 (NtGdiGetServerMetaFileBits.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C0296EE0 (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0297784 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     NtGdiGetFontFileData @ 0x1C0297E30 (NtGdiGetFontFileData.c)
 *     GreGetCharacterPlacementW @ 0x1C0298268 (GreGetCharacterPlacementW.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0299508 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029F4E0 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029F9D0 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029FCF0 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02A1960 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02A4AE0 (-vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02A5E20 (-vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C02A6130 (-vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?WriteAbsolute8@@YAHPEAE0H0@Z @ 0x1C02A755C (-WriteAbsolute8@@YAHPEAE0H0@Z.c)
 *     ?WriteAbsolute4@@YAHPEAE0H0@Z @ 0x1C02A8944 (-WriteAbsolute4@@YAHPEAE0H0@Z.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02AB23C (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02AB33C (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02AC890 (-vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02ACAB0 (-vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02ACD90 (-vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02ACFB0 (-vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02AD2A0 (-vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?BltLnkReadPat4@@YAXPEAEK0KKKK@Z @ 0x1C02B7590 (-BltLnkReadPat4@@YAXPEAEK0KKKK@Z.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x1C02B8140 (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02B8B20 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C02B8C34 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02B8D8C (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z @ 0x1C02B9AE0 (-CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02B9B50 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02B9C50 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02B9D70 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02B9E90 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     scl_CopyCurrentCharPoints @ 0x1C02BE6AC (scl_CopyCurrentCharPoints.c)
 *     ScaleVertical @ 0x1C02C2AC8 (ScaleVertical.c)
 *     sbit_GetBitmap @ 0x1C02C40BC (sbit_GetBitmap.c)
 *     fsg_CompositeInnerGridFit @ 0x1C02C694C (fsg_CompositeInnerGridFit.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02C97D0 (sfac_CopyFontAndPrePrograms.c)
 *     WppTraceCallback @ 0x1C0370690 (WppTraceCallback.c)
 *     bInitStockFontsInternal @ 0x1C038801C (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C038859C (bInitOneStockFont.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto xmov40;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
xmov40:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto xcpy40;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
xcpy40:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
