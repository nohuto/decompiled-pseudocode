/*
 * XREFs of ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0119A94
 * Callers:
 *     InjectLegacyISMTouch @ 0x1C0132140 (InjectLegacyISMTouch.c)
 *     SynthesizeMitTouchInput @ 0x1C01323A4 (SynthesizeMitTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C010EE34 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0110F30 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C011AAD4 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInjectedInput(
        CTouchProcessor *this,
        void *a2,
        struct RIMCOMPLETEFRAME *a3,
        char a4,
        unsigned int a5,
        bool a6)
{
  CTouchProcessor *v6; // rsi
  void *v8; // r14
  struct CPointerInputFrame *v10; // rax
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  const struct CPointerInputFrame *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const struct CPointerInputFrame *v16; // rdi
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx

  v6 = gpTouchProcessor;
  v8 = TouchExtensibility::ghInjectionDevice;
  CInpLockGuard::LockExclusive((PERESOURCE *)gpTouchProcessor + 9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x1Cu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v10 = CTouchProcessor::CommitRimCompleteFrame(v6, a3, 0, a4);
  if ( v10 )
  {
    v13 = CTouchProcessor::ReferenceInputFrame(v6, v10, a5);
    v16 = v13;
    if ( v13 )
    {
      if ( *((_DWORD *)v13 + 12) <= *((_DWORD *)v13 + 13) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
      if ( !*((_QWORD *)v16 + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
      v17 = (_QWORD *)((char *)v16 + 24);
      v18 = (_QWORD *)((char *)gptiCurrent + 1112);
      v19 = *((_QWORD *)gptiCurrent + 139);
      if ( *(struct tagTHREADINFO **)(v19 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1112) )
        __fastfail(3u);
      *((_QWORD *)v16 + 4) = v18;
      *v17 = v19;
      *(_QWORD *)(v19 + 8) = v17;
      *v18 = v17;
      CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        v6,
        (const struct RIMCOMPLETEFRAME *)v19,
        v16,
        v8,
        1,
        0,
        a6);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 33;
        goto LABEL_17;
      }
    }
    else
    {
      WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), 2u, 0xBu, 0x1Fu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 32;
        goto LABEL_17;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), 2u, 0xBu, 0x1Du, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 30;
LABEL_17:
      WPP_RECORDER_SF_(
        (__int64)v11->DeviceExtension,
        5u,
        0xBu,
        v12,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v6 + 9);
}
