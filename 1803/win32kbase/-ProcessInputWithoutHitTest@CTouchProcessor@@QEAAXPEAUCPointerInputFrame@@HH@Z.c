/*
 * XREFs of ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0119F38
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0125780 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C010EDA8 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C011A1C0 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C011AAD4 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessInputWithoutHitTest(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4)
{
  CTouchProcessor *v4; // rsi
  const struct CPointerInputFrame *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  const struct CPointerInputFrame *v12; // rdi
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  _DWORD *v15; // rcx

  v4 = gpTouchProcessor;
  CInpLockGuard::LockExclusive((PERESOURCE *)gpTouchProcessor + 9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x12u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CTouchProcessor::CommitInputFrame((struct _KTHREAD **)v4, a2);
  v8 = CTouchProcessor::ReferenceInputFrame(v4, a2, 0);
  v12 = v8;
  if ( v8 )
  {
    if ( *((_DWORD *)v8 + 12) <= *((_DWORD *)v8 + 13) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    if ( !*((_QWORD *)v12 + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    if ( *((_DWORD *)v12 + 12) == 1 && (*((_DWORD *)v12 + 20) & 0x10) != 0 )
    {
      v15 = (_DWORD *)*((_QWORD *)v12 + 12);
      if ( (*v15 & 0x400) != 0 && (v15[61] & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave(v4, v12, v11);
    }
    CTouchProcessor::GenerateMessagesCore(v4, a3, a4, 0, v12);
    CTouchProcessor::UnreferenceFrame(v4, v12);
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 21;
      goto LABEL_17;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)v4 + 1), 2u, 0xBu, 0x13u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 20;
LABEL_17:
      WPP_RECORDER_SF_(
        (__int64)v13->DeviceExtension,
        5u,
        0xBu,
        v14,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v4 + 9);
}
