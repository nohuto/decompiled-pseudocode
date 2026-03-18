/*
 * XREFs of memmove @ 0x1C01456C0
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     NtGdiPlgBlt @ 0x1C0001B90 (NtGdiPlgBlt.c)
 *     NtUserGetRawInputData @ 0x1C00073A0 (NtUserGetRawInputData.c)
 *     FixupGrayScan @ 0x1C00077C0 (FixupGrayScan.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0007E00 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     xxxCsEvent @ 0x1C000C874 (xxxCsEvent.c)
 *     NtGdiCreateServerMetaFile @ 0x1C000CDB0 (NtGdiCreateServerMetaFile.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C000E1B0 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     NtGdiDrawStream @ 0x1C000E340 (NtGdiDrawStream.c)
 *     RenderNineGridInternal @ 0x1C0010030 (RenderNineGridInternal.c)
 *     DNG_DrawRow @ 0x1C0010DB0 (DNG_DrawRow.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0015C30 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C0017378 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     NtGdiGetDIBitsInternal @ 0x1C0018440 (NtGdiGetDIBitsInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00191EC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C0019AF0 (NtGdiStretchDIBitsInternal.c)
 *     NtGdiExtGetObjectW @ 0x1C001AB50 (NtGdiExtGetObjectW.c)
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     NtGdiExtTextOutW @ 0x1C001CF20 (NtGdiExtTextOutW.c)
 *     ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C002CFD0 (-vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiGetTextExtentExW @ 0x1C0030A10 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetRealizationInfo @ 0x1C0030D10 (NtGdiGetRealizationInfo.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     NtGdiExtEscape @ 0x1C0036CF0 (NtGdiExtEscape.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0037290 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C00379A0 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0037BD0 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C0037EC0 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0037F60 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00384F8 (GreGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C00388A0 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C003AAAC (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C003AB94 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     cjCopyFontDataW @ 0x1C003AEDC (cjCopyFontDataW.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x1C003F540 (-CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C003FE14 (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z @ 0x1C0040E80 (-CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0041020 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     GetCachedSMP @ 0x1C00421F0 (GetCachedSMP.c)
 *     NtUserQueryInformationThread @ 0x1C0047900 (NtUserQueryInformationThread.c)
 *     NtUserSetInformationThread @ 0x1C0047E90 (NtUserSetInformationThread.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00496A0 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C004C830 (DwmSyncGetCompositionAttribute.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0056D64 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     xxxClientCallDitThread @ 0x1C005B094 (xxxClientCallDitThread.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00630D0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserBuildHwndList @ 0x1C006D090 (NtUserBuildHwndList.c)
 *     ReferenceClass @ 0x1C0073510 (ReferenceClass.c)
 *     NtUserCreateWindowEx @ 0x1C0073740 (NtUserCreateWindowEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C0074FD0 (NtUserRegisterClassExWOW.c)
 *     SetAppCompatFlags @ 0x1C00759F0 (SetAppCompatFlags.c)
 *     InputAABFDATAToAA24 @ 0x1C007A950 (InputAABFDATAToAA24.c)
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00862B0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C008E170 (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     NtUserConsoleControl @ 0x1C0090350 (NtUserConsoleControl.c)
 *     xxxConsoleControl @ 0x1C0090464 (xxxConsoleControl.c)
 *     NtGdiHLSurfGetInformation @ 0x1C0091810 (NtGdiHLSurfGetInformation.c)
 *     DefSetText @ 0x1C0096934 (DefSetText.c)
 *     xxxInsertMenuItem @ 0x1C0096D20 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00976B4 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     CreateProp @ 0x1C0097B78 (CreateProp.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0099798 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     bCaptureBitmapInfo @ 0x1C009A230 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C009BCC0 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     NtUserSendInput @ 0x1C009CDE0 (NtUserSendInput.c)
 *     NtUserGetClassInfoEx @ 0x1C009D7C0 (NtUserGetClassInfoEx.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00ADF80 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     NtGdiGetTextFaceW @ 0x1C00AEE00 (NtGdiGetTextFaceW.c)
 *     GreGetTextFaceW @ 0x1C00AEF00 (GreGetTextFaceW.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00AF470 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     hfontCreate @ 0x1C00B1A10 (hfontCreate.c)
 *     BuildAndLoadLinkedFontRoutine @ 0x1C00B1B80 (BuildAndLoadLinkedFontRoutine.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B1F70 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     NtGdiGetGlyphOutline @ 0x1C00B2E80 (NtGdiGetGlyphOutline.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00B3A10 (NtUserGetPointerDeviceProperties.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00B42B0 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00B46E0 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00B4B9C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C00B4C6C (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     NtGdiGradientFill @ 0x1C00B52E0 (NtGdiGradientFill.c)
 *     ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00B7980 (-vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C00B8040 (NtGdiFONTOBJ_pifi.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C00B9F34 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1C00BA6E4 (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00BB360 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00BCA00 (-vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vRop2FunctionA@@YAXPEAK00K@Z @ 0x1C00BCAD0 (-vRop2FunctionA@@YAXPEAK00K@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00BCB80 (-vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00BD470 (-vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vRop2FunctionC@@YAXPEAK00K@Z @ 0x1C00BD570 (-vRop2FunctionC@@YAXPEAK00K@Z.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C00C068C (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00C075C (vIFIMetricsToEnumLogFontExDvW.c)
 *     vProcessEntry @ 0x1C00C0A10 (vProcessEntry.c)
 *     _ConvertMemHandle @ 0x1C00C4E5C (_ConvertMemHandle.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00C7210 (NtUserRegisterRawInputDevices.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00CC280 (xxxProcessSetWindowPosEvent.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00D4A70 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C00D9B84 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     NtUserCreateWindowStation @ 0x1C00DAB20 (NtUserCreateWindowStation.c)
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C00DBAC4 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00E1CE0 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiPolyTextOutW @ 0x1C00E2CE0 (NtGdiPolyTextOutW.c)
 *     NtGdiHfontCreate @ 0x1C00E3240 (NtGdiHfontCreate.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00EA7C8 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00ED670 (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 *     _GetUserObjectInformation @ 0x1C00F1074 (_GetUserObjectInformation.c)
 *     NtUserProcessConnect @ 0x1C00F1390 (NtUserProcessConnect.c)
 *     ConvertToAndFromWideChar @ 0x1C00F1C50 (ConvertToAndFromWideChar.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00F1F20 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00F3658 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     NtUserInternalGetWindowText @ 0x1C00F3F30 (NtUserInternalGetWindowText.c)
 *     NtGdiGetCharABCWidthsW @ 0x1C00F4130 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetWidthTable @ 0x1C00F4990 (NtGdiGetWidthTable.c)
 *     NtGdiGetFontData @ 0x1C00F5A80 (NtGdiGetFontData.c)
 *     NtGdiTransformPoints @ 0x1C00F5DB0 (NtGdiTransformPoints.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00F5FD4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetProcessSessionFonts @ 0x1C00F77B0 (NtGdiGetProcessSessionFonts.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00F7AD4 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     NtGdiDoPalette @ 0x1C00FF7D0 (NtGdiDoPalette.c)
 *     NtGdiGetUFI @ 0x1C00FFF40 (NtGdiGetUFI.c)
 *     GreGetUFI @ 0x1C010006C (GreGetUFI.c)
 *     NtUserSystemParametersInfoForDpi @ 0x1C0101F70 (NtUserSystemParametersInfoForDpi.c)
 *     NtGdiEnumFonts @ 0x1C01021A0 (NtGdiEnumFonts.c)
 *     _BuildNameList @ 0x1C01039E4 (_BuildNameList.c)
 *     NtGdiGetCharWidthW @ 0x1C0103BB0 (NtGdiGetCharWidthW.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C01048E0 (NtUserfnPOWERBROADCAST.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C01061A0 (HT_CreateDeviceHalftoneInfo.c)
 *     ExpandHTPatX @ 0x1C0106EE4 (ExpandHTPatX.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0107720 (NtGdiGetLinkedUFIs.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0107960 (NtGdiGetGlyphIndicesWInternal.c)
 *     RemoveProcessFromJob @ 0x1C010A0C0 (RemoveProcessFromJob.c)
 *     InitializeFUDI @ 0x1C010AEA4 (InitializeFUDI.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C010B8B0 (NtUserfnINDEVICECHANGE.c)
 *     NtGdiStartDoc @ 0x1C010BF00 (NtGdiStartDoc.c)
 *     GreRealizePalette @ 0x1C010EC68 (GreRealizePalette.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C010FCF4 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 *     _CreateAcceleratorTable @ 0x1C0110528 (_CreateAcceleratorTable.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C01107D8 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 *     ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1C0110B30 (-_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z.c)
 *     ?_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z @ 0x1C0110BB8 (-_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1C0110C80 (NtGdiGetFontUnicodeRanges.c)
 *     AllocateUnicodeString @ 0x1C0111828 (AllocateUnicodeString.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0112FB0 (NtUserGetRawInputDeviceInfo.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0113460 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0116A5C (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     NtUserSetGestureConfig @ 0x1C0119C40 (NtUserSetGestureConfig.c)
 *     NtGdiQueryFonts @ 0x1C011AD20 (NtGdiQueryFonts.c)
 *     xxxClientCallDevCallbackCapture @ 0x1C011C694 (xxxClientCallDevCallbackCapture.c)
 *     _SetWindowStationUser @ 0x1C011DFE8 (_SetWindowStationUser.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C011E154 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C01208E4 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 *     PREALLOCMEM2 @ 0x1C0120C64 (PREALLOCMEM2.c)
 *     FastExpAA_CY @ 0x1C01272F0 (FastExpAA_CY.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0128010 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C012A080 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C012A128 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     NtGdiGetKerningPairs @ 0x1C01300F0 (NtGdiGetKerningPairs.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C01306B4 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C01316C0 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 *     FixupColorScan @ 0x1C013311C (FixupColorScan.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C0133A00 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C01354D8 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     CreateStandardMonoPattern @ 0x1C013582C (CreateStandardMonoPattern.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C0139900 (-vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0139BB0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C0139BFC (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     NtGdiGetETM @ 0x1C013A2A0 (NtGdiGetETM.c)
 *     NtGdiExtCreatePen @ 0x1C013B1F0 (NtGdiExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C013D5B0 (NtGdiCreateDIBBrush.c)
 *     GreCreateDIBBrush @ 0x1C013D6AC (GreCreateDIBBrush.c)
 *     NtUserCreateLocalMemHandle @ 0x1C013F930 (NtUserCreateLocalMemHandle.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C01426D4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01A4718 (-CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A4A90 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     CopyTPPointerInputFrame @ 0x1C01A6348 (CopyTPPointerInputFrame.c)
 *     HoldRimCompleteFrame @ 0x1C01A68DC (HoldRimCompleteFrame.c)
 *     ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C01A9DAC (-RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z.c)
 *     GetTaskName @ 0x1C01B52B8 (GetTaskName.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01B5F24 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01B7D88 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01BC6E4 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01BDE70 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01BE040 (-DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01C1A74 (ProbeAndCaptureSoftKbdData.c)
 *     EditionBuildManipulationInputInteropInfoMessage @ 0x1C01CE010 (EditionBuildManipulationInputInteropInfoMessage.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01E3B50 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01E4270 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureConfig @ 0x1C01E52F0 (NtUserGetGestureConfig.c)
 *     NtUserGetGestureExtArgs @ 0x1C01E55A0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01E5E20 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserGetRawInputBuffer @ 0x1C01E6910 (NtUserGetRawInputBuffer.c)
 *     NtUserGetTouchInputInfo @ 0x1C01E6D40 (NtUserGetTouchInputInfo.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01E7930 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserInjectTouchInput @ 0x1C01E8680 (NtUserInjectTouchInput.c)
 *     NtUserMagGetContextInformation @ 0x1C01E8F30 (NtUserMagGetContextInformation.c)
 *     NtUserProcessInkFeedbackCommand @ 0x1C01EA410 (NtUserProcessInkFeedbackCommand.c)
 *     NtUserResolveDesktopForWOW @ 0x1C01EABE0 (NtUserResolveDesktopForWOW.c)
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C01EAD90 (NtUserSendInteractiveControlHapticsReport.c)
 *     NtUserSetCalibrationData @ 0x1C01EAFA0 (NtUserSetCalibrationData.c)
 *     NtUserSlicerControl @ 0x1C01EC8D0 (NtUserSlicerControl.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01ED470 (NtUserUserHandleGrantAccess.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C01EE600 (NtUserfnINLPHLPSTRUCT.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01F3F58 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     RemoteShadowCleanup @ 0x1C01F88E0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01F8A50 (RemoteShadowStart.c)
 *     AllocGestureInfo @ 0x1C01F958C (AllocGestureInfo.c)
 *     SfnIMECONTROL @ 0x1C01FABA0 (SfnIMECONTROL.c)
 *     SfnPOUTLPINT @ 0x1C01FF9E0 (SfnPOUTLPINT.c)
 *     xxxClientCopyDDEIn1 @ 0x1C02017A0 (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C0201BC4 (xxxClientCopyDDEOut1.c)
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0212B14 (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C022275C (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 *     pgsetComputeSymbolCP @ 0x1C0226828 (pgsetComputeSymbolCP.c)
 *     bLoadFontFile @ 0x1C0228AE4 (bLoadFontFile.c)
 *     bLoadTTF @ 0x1C022910C (bLoadTTF.c)
 *     bLoadTTF_Cache @ 0x1C0229608 (bLoadTTF_Cache.c)
 *     bReloadGlyphSet @ 0x1C0229854 (bReloadGlyphSet.c)
 *     vCopy_IFIV @ 0x1C022B2B8 (vCopy_IFIV.c)
 *     vFontFileCache @ 0x1C022C6F4 (vFontFileCache.c)
 *     bGeneratePath @ 0x1C022CADC (bGeneratePath.c)
 *     lGGOBitmap @ 0x1C022E970 (lGGOBitmap.c)
 *     ttfdQueryFontCaps @ 0x1C022FD20 (ttfdQueryFontCaps.c)
 *     ttfdQueryTrueTypeTable2 @ 0x1C0230338 (ttfdQueryTrueTypeTable2.c)
 *     vCopyAndZeroOutPaddingBits @ 0x1C0230418 (vCopyAndZeroOutPaddingBits.c)
 *     BmfdQueryFontFile @ 0x1C0234A40 (BmfdQueryFontFile.c)
 *     bDescStr @ 0x1C02359DC (bDescStr.c)
 *     vStretchGlyphBitmap @ 0x1C0237858 (vStretchGlyphBitmap.c)
 *     vtfdQueryFontFile @ 0x1C0239B70 (vtfdQueryFontFile.c)
 *     TextCopy @ 0x1C023B16C (TextCopy.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B204 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     AddBGRMapCache @ 0x1C023E724 (AddBGRMapCache.c)
 *     CacheRGBToXYZ @ 0x1C023E854 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C023E944 (ComputeBGRMappingTable.c)
 *     FindBGRMapCache @ 0x1C023F474 (FindBGRMapCache.c)
 *     TrimBGRMapCache @ 0x1C023F910 (TrimBGRMapCache.c)
 *     CreateHalftoneBrushPat @ 0x1C023FA08 (CreateHalftoneBrushPat.c)
 *     BltMask_CY @ 0x1C0243020 (BltMask_CY.c)
 *     ShrinkMask_CY @ 0x1C0243930 (ShrinkMask_CY.c)
 *     ExpandDIB_CY @ 0x1C0244EA0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0245860 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C0246470 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0246C30 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C02478E0 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0248370 (ShrinkDIB_CY.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0249B18 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     EngHangNotification @ 0x1C024C540 (EngHangNotification.c)
 *     NtGdiGetMonitorID @ 0x1C024C790 (NtGdiGetMonitorID.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C025669C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0256A90 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreGetUFIPathname @ 0x1C02577C0 (GreGetUFIPathname.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0257B00 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0257F80 (NtGdiSetLinkedUFIs.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C0268E18 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     cMapRemoteFonts @ 0x1C02699AC (cMapRemoteFonts.c)
 *     FONTOBJ_vGetInfo @ 0x1C026FEB0 (FONTOBJ_vGetInfo.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0270070 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     GreGetCannonicalName @ 0x1C0270AC8 (GreGetCannonicalName.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C0274B80 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0274D30 (NtGdiGetEudcTimeStampEx.c)
 *     NtGdiGetStringBitmapW @ 0x1C0274E70 (NtGdiGetStringBitmapW.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0276DBC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0277128 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02795C0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027BFC4 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z @ 0x1C02843EC (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C0284668 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C0284794 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0284E60 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0285450 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02866F0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02868C0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0286E50 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02881A0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C02888BC (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C02897B0 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiDescribePixelFormat @ 0x1C0289AF0 (NtGdiDescribePixelFormat.c)
 *     NtGdiDrawEscape @ 0x1C0289B90 (NtGdiDrawEscape.c)
 *     NtGdiGetCharacterPlacementW @ 0x1C0289D60 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x1C028A3A0 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C028A540 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiGetRasterizerCaps @ 0x1C028A7D0 (NtGdiGetRasterizerCaps.c)
 *     NtGdiGetTextExtent @ 0x1C028A860 (NtGdiGetTextExtent.c)
 *     NtGdiGetUFIPathname @ 0x1C028A9F0 (NtGdiGetUFIPathname.c)
 *     NtGdiMakeFontDir @ 0x1C028AE10 (NtGdiMakeFontDir.c)
 *     NtGdiScaleValues @ 0x1C028B400 (NtGdiScaleValues.c)
 *     ProbeAndReadDesignVector @ 0x1C028B75C (ProbeAndReadDesignVector.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C028CC4C (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C028CE20 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     NtGdiEngGradientFill @ 0x1C028DF30 (NtGdiEngGradientFill.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C028F5F0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C028FBA0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C028FD10 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C0290220 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiResizePalette @ 0x1C0292950 (NtGdiResizePalette.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C0292EB0 (NtGdiGetServerMetaFileBits.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C02935A0 (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0293E50 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     NtGdiGetFontFileData @ 0x1C0294500 (NtGdiGetFontFileData.c)
 *     GreGetCharacterPlacementW @ 0x1C0294920 (GreGetCharacterPlacementW.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C0295BAC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029BBF0 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029C0E0 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029C3F0 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C029E014 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02A11C0 (-vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02A24F0 (-vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C02A27F0 (-vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?WriteAbsolute8@@YAHPEAE0H0@Z @ 0x1C02A3BDC (-WriteAbsolute8@@YAHPEAE0H0@Z.c)
 *     ?WriteAbsolute4@@YAHPEAE0H0@Z @ 0x1C02A4FA4 (-WriteAbsolute4@@YAHPEAE0H0@Z.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02A78B4 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02A79A0 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A8EE0 (-vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A90E0 (-vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A93B0 (-vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A95B0 (-vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A98A0 (-vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?BltLnkReadPat4@@YAXPEAEK0KKKK@Z @ 0x1C02B1340 (-BltLnkReadPat4@@YAXPEAEK0KKKK@Z.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x1C02B1EE0 (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02B291C (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C02B2A30 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02B2B88 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z @ 0x1C02B38E0 (-CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02B3950 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02B3A50 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02B3B70 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02B3C90 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     scl_CopyCurrentCharPoints @ 0x1C02B84A0 (scl_CopyCurrentCharPoints.c)
 *     ScaleVertical @ 0x1C02BC900 (ScaleVertical.c)
 *     sbit_GetBitmap @ 0x1C02BDF14 (sbit_GetBitmap.c)
 *     fsg_CompositeInnerGridFit @ 0x1C02C0758 (fsg_CompositeInnerGridFit.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02C35E8 (sfac_CopyFontAndPrePrograms.c)
 *     WppTraceCallback @ 0x1C036B690 (WppTraceCallback.c)
 *     bInitStockFontsInternal @ 0x1C038220C (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C03826F0 (bInitOneStockFont.c)
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
