/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0124804
 * Callers:
 *     InjectLegacyISMTouch @ 0x1C01306F0 (InjectLegacyISMTouch.c)
 *     SynthesizeMitTouchInput @ 0x1C01309D8 (SynthesizeMitTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011DE10 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        CTouchProcessor *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        unsigned int a5,
        bool a6)
{
  CTouchProcessor *v6; // rdi
  void *v8; // r14
  __int64 v10; // rbx
  int v11; // edx
  struct CPointerInputFrame *v12; // rax
  void *v13; // rdx
  int v14; // edx
  PDEVICE_OBJECT v15; // rcx
  int v16; // r9d
  const struct CPointerInputFrame *v17; // rax
  int v18; // edx
  const struct CPointerInputFrame *v19; // r8
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  struct _ERESOURCE *v23; // rcx

  v6 = *(CTouchProcessor **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v8 = TouchExtensibility::ghInjectionDevice;
  v10 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 200LL;
  CInpLockGuard::LockExclusive((PERESOURCE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 200LL));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      11,
      28,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v12 = CTouchProcessor::CommitRimCompleteFrame(v6, a3, 0, a4);
  if ( v12 )
  {
    v17 = CTouchProcessor::ReferenceInputFrame(v6, v13, v12, a5);
    v19 = v17;
    if ( v17 )
    {
      v20 = (_QWORD *)((char *)v17 + 24);
      v21 = (_QWORD *)((char *)gptiCurrent + 1008);
      v22 = *((_QWORD *)gptiCurrent + 126);
      if ( *(struct tagTHREADINFO **)(v22 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1008) )
        __fastfail(3u);
      *v20 = v22;
      v20[1] = v21;
      *(_QWORD *)(v22 + 8) = v20;
      *v21 = v20;
      CTouchProcessor::DoContactVisualizationAndGenerateMessages(v6, 0LL, v19, v8, 1, 0, a6);
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 33;
        goto LABEL_13;
      }
    }
    else
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), v18, 11, 31, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 32;
        goto LABEL_13;
      }
    }
  }
  else
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)v6 + 1),
      (_DWORD)v13,
      11,
      29,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v15 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v16 = 30;
LABEL_13:
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(v15->DeviceExtension, v14, 11, v16, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  v23 = *(struct _ERESOURCE **)v10;
  *(_QWORD *)(v10 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v23);
}
