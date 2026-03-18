/*
 * XREFs of ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C011ED8C
 * Callers:
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0124D9C (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0129854 (WPP_RECORDER_SF_LL.c)
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
  __int64 v9; // r14
  __int64 v11; // rdi
  _BOOL8 v12; // rbx
  int v13; // edx
  int v14; // r8d
  _BYTE v15[208]; // [rsp+40h] [rbp-E8h] BYREF

  v8 = a3;
  v9 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      216,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v11 = *(_QWORD *)(v9 + 96) + 608 * v8;
  v12 = *(_DWORD *)(v11 + 248) != 5;
  CInputDest::CInputDest((CInputDest *)v15, a7);
  if ( !(unsigned int)CTouchProcessor::GenerateMessage(a1, v11, v12 - 1, 595LL) )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_LL(*(_QWORD *)(a1 + 8), v13, v14, 217, a4, *(_DWORD *)(v11 + 252), *(_WORD *)(v11 + 240));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      11,
      218,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInputDest::SetEmpty(a7);
}
