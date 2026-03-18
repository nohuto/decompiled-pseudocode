/*
 * XREFs of ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C01123EC
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C011AE7C (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C011F908 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureAcquiredMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rbx
  int v11; // edx
  int v12; // r8d
  CInputDest *v13; // rax
  _BYTE v14[192]; // [rsp+40h] [rbp-D8h] BYREF

  v6 = a3;
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDDu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v10 = *((_QWORD *)a2 + 12) + 576 * v6;
  if ( (*(_DWORD *)v10 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 244) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2);
    memset(v14, 0, 0xB8uLL);
    v14[176] = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v10, a4, 593LL) )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v11, v12, 222, a5, *(_DWORD *)(v10 + 236), *(_WORD *)(v10 + 224));
    }
    v13 = CInputDest::CInputDest((CInputDest *)v14, (const struct CInputDest *)(v10 + 392));
    CTouchProcessor::RemoveLostCaptureTarget(this, *(unsigned __int16 *)(v10 + 236), v13);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDFu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
}
