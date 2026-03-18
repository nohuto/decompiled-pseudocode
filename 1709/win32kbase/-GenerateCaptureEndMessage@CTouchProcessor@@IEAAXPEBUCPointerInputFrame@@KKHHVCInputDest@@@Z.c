/*
 * XREFs of ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C011DC30
 * Callers:
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01243F4 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01291A0 (WPP_RECORDER_SF_LL.c)
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
  __int64 v11; // rdi
  _BOOL8 v12; // rbx
  int v13; // edx
  int v14; // r8d
  _BYTE v15[208]; // [rsp+40h] [rbp-E8h] BYREF

  v8 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD8u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v11 = *(_QWORD *)(a2 + 96) + 608 * v8;
  v12 = *(_DWORD *)(v11 + 248) != 5;
  CInputDest::CInputDest((CInputDest *)v15, a7);
  if ( !(unsigned int)CTouchProcessor::GenerateMessage(a1, v11, v12 - 1, 595LL) )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_LL(*(_QWORD *)(a1 + 8), v13, v14, 217, a4, *(_DWORD *)(v11 + 252), *(_WORD *)(v11 + 240));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDAu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  CInputDest::SetEmpty(a7);
}
