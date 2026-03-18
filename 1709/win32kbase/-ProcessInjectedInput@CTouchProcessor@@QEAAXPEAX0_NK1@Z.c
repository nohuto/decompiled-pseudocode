/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0123E5C
 * Callers:
 *     InjectLegacyISMTouch @ 0x1C013007C (InjectLegacyISMTouch.c)
 *     SynthesizeMitTouchInput @ 0x1C01302D8 (SynthesizeMitTouchInput.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C0124F20 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        CTouchProcessor *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        unsigned int a5,
        bool a6)
{
  __int64 *v6; // rdi
  void *v8; // r14
  __int64 v10; // rbx
  struct CPointerInputFrame *v11; // rax
  void *v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  const struct CPointerInputFrame *v15; // rax
  const struct CPointerInputFrame *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  struct _ERESOURCE *v20; // rcx

  v6 = *(__int64 **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v8 = TouchExtensibility::ghInjectionDevice;
  v10 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 224LL;
  CInpLockGuard::LockExclusive((PERESOURCE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 224LL));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x1Cu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v11 = CTouchProcessor::CommitRimCompleteFrame((CTouchProcessor *)v6, a3, 0, a4);
  if ( v11 )
  {
    v15 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v6, v12, v11, a5);
    v16 = v15;
    if ( v15 )
    {
      v17 = (_QWORD *)((char *)v15 + 24);
      v18 = (_QWORD *)((char *)gptiCurrent + 1096);
      v19 = *((_QWORD *)gptiCurrent + 137);
      if ( *(struct tagTHREADINFO **)(v19 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1096) )
        __fastfail(3u);
      *v17 = v19;
      v17[1] = v18;
      *(_QWORD *)(v19 + 8) = v17;
      *v18 = v17;
      CTouchProcessor::DoContactVisualizationAndGenerateMessages((CTouchProcessor *)v6, 0LL, v16, v8, 1, 0, a6);
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 33;
        goto LABEL_13;
      }
    }
    else
    {
      WPP_RECORDER_SF_(v6[1], 2u, 0xBu, 0x1Fu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 32;
        goto LABEL_13;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(v6[1], 2u, 0xBu, 0x1Du, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 30;
LABEL_13:
      WPP_RECORDER_SF_(
        (__int64)v13->DeviceExtension,
        5u,
        0xBu,
        v14,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
  }
  v20 = *(struct _ERESOURCE **)v10;
  *(_QWORD *)(v10 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v20);
}
