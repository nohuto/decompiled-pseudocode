/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0124014
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C000 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C0124F20 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ApiSetEditionPalmRejectionEnabled @ 0x1C013A920 (ApiSetEditionPalmRejectionEnabled.c)
 *     ApiSetEditionPalmRejectionProcessInput @ 0x1C013A9B4 (ApiSetEditionPalmRejectionProcessInput.c)
 *     ApiSetSanitizeRIMCOMPLETEFRAME @ 0x1C013CB90 (ApiSetSanitizeRIMCOMPLETEFRAME.c)
 */

void __fastcall CTouchProcessor::ProcessInput(
        CTouchProcessor *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        int a4,
        int a5)
{
  __int64 *v5; // rsi
  __int64 v9; // rbx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  __int64 v12; // rdx
  struct CPointerInputFrame *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  void *v17; // rdx
  unsigned int v18; // r9d
  const struct CPointerInputFrame *v19; // rax
  const struct CPointerInputFrame *v20; // rbp
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  struct _ERESOURCE *v24; // rcx
  int v25; // edi
  struct _ERESOURCE *v26; // rcx

  v5 = *(__int64 **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v9 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 224LL;
  CInpLockGuard::LockExclusive((PERESOURCE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 224LL));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xAu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( ApiSetSanitizeRIMCOMPLETEFRAME(a3) )
  {
    v13 = CTouchProcessor::CommitRimCompleteFrame((CTouchProcessor *)v5, a3, 0, 0);
    if ( v13 )
    {
      LOBYTE(v12) = 19;
      v16 = HMValidateHandleNoSecure((unsigned __int64)a2, v12, v14, v15);
      if ( v16 )
        v18 = *(_DWORD *)(v16 + 752);
      else
        v18 = 0;
      v19 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v5, v17, v13, v18);
      v20 = v19;
      if ( v19 )
      {
        v21 = (_QWORD *)((char *)v19 + 24);
        v22 = (_QWORD *)((char *)gptiCurrent + 1096);
        v23 = *((_QWORD *)gptiCurrent + 137);
        if ( *(struct tagTHREADINFO **)(v23 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1096) )
          __fastfail(3u);
        *v21 = v23;
        v21[1] = v22;
        *(_QWORD *)(v23 + 8) = v21;
        *v22 = v21;
        if ( !(unsigned int)ApiSetEditionPalmRejectionEnabled()
          || (v24 = *(struct _ERESOURCE **)v9,
              *(_QWORD *)(v9 + 32) = 0LL,
              ExReleaseResourceAndLeaveCriticalRegion(v24),
              v25 = ApiSetEditionPalmRejectionProcessInput(v20),
              CInpLockGuard::LockExclusive((PERESOURCE *)v9),
              v25) )
        {
          CTouchProcessor::DoContactVisualizationAndGenerateMessages((CTouchProcessor *)v5, a3, v20, a2, a4, a5, 0);
          v10 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v11 = 17;
            goto LABEL_21;
          }
        }
      }
      else
      {
        WPP_RECORDER_SF_(v5[1], 2u, 0xBu, 0xFu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v11 = 16;
          goto LABEL_21;
        }
      }
    }
    else
    {
      WPP_RECORDER_SF_(v5[1], 2u, 0xBu, 0xDu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 14;
        goto LABEL_21;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(v5[1], 2u, 0xBu, 0xBu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 12;
LABEL_21:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
  }
  v26 = *(struct _ERESOURCE **)v9;
  *(_QWORD *)(v9 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v26);
}
