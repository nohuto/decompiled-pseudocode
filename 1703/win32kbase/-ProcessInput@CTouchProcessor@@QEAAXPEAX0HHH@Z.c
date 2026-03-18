/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01249BC
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C950 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011DE10 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ApiSetEditionPalmRejectionEnabled @ 0x1C013B7B0 (ApiSetEditionPalmRejectionEnabled.c)
 *     ApiSetEditionPalmRejectionProcessInput @ 0x1C013B844 (ApiSetEditionPalmRejectionProcessInput.c)
 *     ApiSetSanitizeRIMCOMPLETEFRAME @ 0x1C013D6C0 (ApiSetSanitizeRIMCOMPLETEFRAME.c)
 */

void __fastcall CTouchProcessor::ProcessInput(
        CTouchProcessor *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        int a4,
        int a5,
        int a6)
{
  CTouchProcessor *v6; // rsi
  __int64 v10; // rbx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  int v16; // edx
  struct CPointerInputFrame *v17; // rdi
  __int64 v18; // rax
  void *v19; // rdx
  unsigned int v20; // r9d
  const struct CPointerInputFrame *v21; // rax
  int v22; // edx
  const struct CPointerInputFrame *v23; // rbp
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  struct _ERESOURCE *v27; // rcx
  int v28; // edi
  struct _ERESOURCE *v29; // rcx

  v6 = *(CTouchProcessor **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v10 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 200LL;
  CInpLockGuard::LockExclusive((PERESOURCE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 200LL));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      11,
      10,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( ApiSetSanitizeRIMCOMPLETEFRAME(a3) )
  {
    v17 = CTouchProcessor::CommitRimCompleteFrame(v6, a3, 0, 0);
    if ( v17 )
    {
      v18 = HMValidateHandleNoSecure((unsigned __int64)a2, 19);
      if ( v18 )
        v20 = *(_DWORD *)(v18 + 752);
      else
        v20 = 0;
      v21 = CTouchProcessor::ReferenceInputFrame(v6, v19, v17, v20);
      v23 = v21;
      if ( v21 )
      {
        v24 = (_QWORD *)((char *)v21 + 24);
        v25 = (_QWORD *)((char *)gptiCurrent + 1008);
        v26 = *((_QWORD *)gptiCurrent + 126);
        if ( *(struct tagTHREADINFO **)(v26 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1008) )
          __fastfail(3u);
        *v24 = v26;
        v24[1] = v25;
        *(_QWORD *)(v26 + 8) = v24;
        *v25 = v24;
        if ( !(unsigned int)ApiSetEditionPalmRejectionEnabled()
          || (v27 = *(struct _ERESOURCE **)v10,
              *(_QWORD *)(v10 + 32) = 0LL,
              ExReleaseResourceAndLeaveCriticalRegion(v27),
              v28 = ApiSetEditionPalmRejectionProcessInput(v23),
              CInpLockGuard::LockExclusive((PERESOURCE *)v10),
              v28) )
        {
          CTouchProcessor::DoContactVisualizationAndGenerateMessages(v6, a3, v23, a2, a4, a5, 0);
          v14 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v15 = 17;
            goto LABEL_21;
          }
        }
      }
      else
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), v22, 11, 15, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
        v14 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v15 = 16;
          goto LABEL_21;
        }
      }
    }
    else
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), v16, 11, 13, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 14;
        goto LABEL_21;
      }
    }
  }
  else
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), v12, 11, 11, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 12;
LABEL_21:
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_(v14->DeviceExtension, v13, 11, v15, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  v29 = *(struct _ERESOURCE **)v10;
  *(_QWORD *)(v10 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v29);
}
