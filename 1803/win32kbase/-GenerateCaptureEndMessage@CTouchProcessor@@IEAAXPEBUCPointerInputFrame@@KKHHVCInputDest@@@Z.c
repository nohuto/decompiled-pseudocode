/*
 * XREFs of ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0112560
 * Callers:
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C011A0B0 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C011F908 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureEndMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        CInputDest *a7)
{
  __int64 v8; // rbx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rbx
  _BOOL8 v13; // rdi
  int v14; // edx
  int v15; // r8d
  _BYTE v16[192]; // [rsp+40h] [rbp-D8h] BYREF

  v8 = a3;
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xE7u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v12 = *(_QWORD *)(a2 + 96) + 576 * v8;
  v13 = *(_DWORD *)(v12 + 232) != 5;
  if ( (*(_DWORD *)(v12 + 244) & 0x40000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2);
  CInputDest::CInputDest((CInputDest *)v16, a7);
  if ( !(unsigned int)CTouchProcessor::GenerateMessage(a1, v12, v13 - 1, 595LL) )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_LL(*(_QWORD *)(a1 + 8), v14, v15, 232, a4, *(_DWORD *)(v12 + 236), *(_WORD *)(v12 + 224));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xE9u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInputDest::SetEmpty(a7);
}
