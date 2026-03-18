/*
 * XREFs of ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C
 * Callers:
 *     ClientEventCallback @ 0x1C000C52C (ClientEventCallback.c)
 *     xxxClientLoadImage @ 0x1C00522F0 (xxxClientLoadImage.c)
 *     xxxClientCopyImage @ 0x1C0053A84 (xxxClientCopyImage.c)
 *     xxxClientLoadMenu @ 0x1C0053BA0 (xxxClientLoadMenu.c)
 *     xxxClientAddFontResourceW @ 0x1C0058B94 (xxxClientAddFontResourceW.c)
 *     xxxClientMonitorEnumProc @ 0x1C0058F60 (xxxClientMonitorEnumProc.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1C0059270 (SfnINOUTLPSCROLLINFO.c)
 *     SfnINSTRING @ 0x1C0059620 (SfnINSTRING.c)
 *     SfnOUTLPRECT @ 0x1C0059940 (SfnOUTLPRECT.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C0059BE0 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     ClientLoadLibrary @ 0x1C005A140 (ClientLoadLibrary.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C005AC34 (xxxClientFreeWindowClassExtraBytes.c)
 *     SfnINOUTLPPOINT5 @ 0x1C005ACC0 (SfnINOUTLPPOINT5.c)
 *     xxxClientWOWGetProcModule @ 0x1C005AFA8 (xxxClientWOWGetProcModule.c)
 *     xxxClientCallDitThread @ 0x1C005B094 (xxxClientCallDitThread.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C005B470 (xxxClientAllocWindowClassExtraBytes.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C005B580 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnEMPTY @ 0x1C005BE50 (SfnEMPTY.c)
 *     ClientGetMessageMPH @ 0x1C005C0BC (ClientGetMessageMPH.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1C005C220 (SfnOUTLPCOMBOBOXINFO.c)
 *     fnHkINDWORD @ 0x1C005C594 (fnHkINDWORD.c)
 *     SfnNCDESTROY @ 0x1C005C730 (SfnNCDESTROY.c)
 *     SfnINSTRINGNULL @ 0x1C005C9F0 (SfnINSTRINGNULL.c)
 *     ClientImmProcessKey @ 0x1C00CE848 (ClientImmProcessKey.c)
 *     xxxClientExpandStringW @ 0x1C00DCBFC (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00DD054 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1C00DDC8C (ClientGetListboxString.c)
 *     ClientWaitMessageExMPH @ 0x1C00F8420 (ClientWaitMessageExMPH.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00FB730 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00FBAC0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00FBD40 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00FBFC0 (SfnINLPUAHDRAWMENUITEM.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00FC994 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINOUTLPRECT @ 0x1C00FF4F0 (SfnINOUTLPRECT.c)
 *     SfnINDEVICECHANGE @ 0x1C00FFBF0 (SfnINDEVICECHANGE.c)
 *     SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C0102920 (SfnSHELLWINDOWMANAGEMENTNOTIFY.c)
 *     SfnPOWERBROADCAST @ 0x1C0102BA0 (SfnPOWERBROADCAST.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C0104570 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C0107010 (SfnINLPDRAWITEMSTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0108254 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     SfnCOPYDATA @ 0x1C0109C50 (SfnCOPYDATA.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C010AA34 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x1C010CDB0 (SfnOUTLPTITLEBARINFOEX.c)
 *     ClientFreeLibrary @ 0x1C0111D8C (ClientFreeLibrary.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C0116658 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     xxxClientBroadcastThemeChange @ 0x1C0118C70 (xxxClientBroadcastThemeChange.c)
 *     SfnINDESTROYCLIPBRD @ 0x1C011A280 (SfnINDESTROYCLIPBRD.c)
 *     xxxClientCallDevCallbackCapture @ 0x1C011C694 (xxxClientCallDevCallbackCapture.c)
 *     xxxClientGetCharsetInfo @ 0x1C011E33C (xxxClientGetCharsetInfo.c)
 *     ClientImmLoadLayout @ 0x1C011F04C (ClientImmLoadLayout.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1C011F6F0 (SfnINWPARAMDBCSCHAR.c)
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C0136C60 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     xxxClientCallDelegateThread @ 0x1C0138664 (xxxClientCallDelegateThread.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1C013AA00 (SfnOUTLPSCROLLBARINFO.c)
 *     SfnINLPDELETEITEMSTRUCT @ 0x1C013AFA0 (SfnINLPDELETEITEMSTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C013BDEC (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C013C9A0 (SfnINLPMDICREATESTRUCT.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C01F9F98 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C01FA0EC (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01FA390 (SfnCOPYGLOBALDATA.c)
 *     SfnGESTURE @ 0x1C01FA720 (SfnGESTURE.c)
 *     SfnGETWINDOWDATA @ 0x1C01FAA10 (SfnGETWINDOWDATA.c)
 *     SfnIMECONTROL @ 0x1C01FABA0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C01FB680 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FBBD0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x1C01FC0D0 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C01FC3E0 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C01FC7A0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01FCB60 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C01FD000 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnINOUTDRAG @ 0x1C01FD360 (SfnINOUTDRAG.c)
 *     SfnINOUTLPSIZE @ 0x1C01FD6E0 (SfnINOUTLPSIZE.c)
 *     SfnINOUTMENUGETOBJECT @ 0x1C01FDA20 (SfnINOUTMENUGETOBJECT.c)
 *     SfnINOUTNEXTMENU @ 0x1C01FDDF0 (SfnINOUTNEXTMENU.c)
 *     SfnINPAINTCLIPBRD @ 0x1C01FE150 (SfnINPAINTCLIPBRD.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C01FE4D0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSIZECLIPBRD @ 0x1C01FE890 (SfnINSIZECLIPBRD.c)
 *     SfnINWPARAMCHAR @ 0x1C01FEBC0 (SfnINWPARAMCHAR.c)
 *     SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C01FEEF0 (SfnKEYBOARDCORRECTIONCALLOUT.c)
 *     SfnOUTDWORDINDWORD @ 0x1C01FF270 (SfnOUTDWORDINDWORD.c)
 *     SfnPOPTINLPUINT @ 0x1C01FF5C0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C01FF9E0 (SfnPOUTLPINT.c)
 *     SfnSENTDDEMSG @ 0x1C01FFEF0 (SfnSENTDDEMSG.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1C0200270 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     SfnTOUCH @ 0x1C0200620 (SfnTOUCH.c)
 *     SfnTOUCHHITTESTING @ 0x1C0200910 (SfnTOUCHHITTESTING.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0200D30 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C0200EF0 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C02010C0 (fnHkOPTINLPEVENTMSG.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C02012E8 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallManipulationThread @ 0x1C0201440 (xxxClientCallManipulationThread.c)
 *     xxxClientCharToWchar @ 0x1C0201694 (xxxClientCharToWchar.c)
 *     xxxClientCopyDDEIn1 @ 0x1C02017A0 (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C0201BC4 (xxxClientCopyDDEOut1.c)
 *     xxxClientFindMnemChar @ 0x1C0201EFC (xxxClientFindMnemChar.c)
 *     xxxClientFreeDDEHandle @ 0x1C0202140 (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEFlags @ 0x1C020224C (xxxClientGetDDEFlags.c)
 *     xxxClientGetDDEHookData @ 0x1C0202358 (xxxClientGetDDEHookData.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0202510 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02028F0 (xxxClientPSMTextOut.c)
 *     xxxClientRimDevCallback @ 0x1C0202C08 (xxxClientRimDevCallback.c)
 *     xxxClientUpdateDpi @ 0x1C0202DA4 (xxxClientUpdateDpi.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

void __fastcall ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
        ReleaseAndReacquirePerObjectLocks *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( (*(_BYTE *)this & 1) != 0 )
  {
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::LockShared(DomainLockRef);
    tagObjLock::LockExclusive((tagObjLock *)(v6 + 368));
  }
  *(_BYTE *)(v6 + 1440) = *(_BYTE *)this;
}
