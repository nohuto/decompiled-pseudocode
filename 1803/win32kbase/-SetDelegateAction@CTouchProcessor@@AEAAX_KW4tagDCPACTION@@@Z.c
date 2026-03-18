/*
 * XREFs of ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C011AF54
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C010CD70 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C0110630 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C0117B50 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C0117D00 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 * Callees:
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C011AFAC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _KTHREAD *__fastcall CTouchProcessor::SetDelegateAction(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *result; // rax
  __int64 v7; // rdx

  result = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 104) != result )
    result = (struct _KTHREAD *)MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v7 = *(_QWORD *)(a2 + 40);
  if ( v7 )
    return (struct _KTHREAD *)CTouchProcessor::SetDelegateActionInt(a1, v7, a3);
  return result;
}
