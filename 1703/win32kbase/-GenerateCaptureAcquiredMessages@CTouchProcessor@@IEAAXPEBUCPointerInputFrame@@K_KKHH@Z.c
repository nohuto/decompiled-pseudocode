/*
 * XREFs of ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011EC24
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0125D44 (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0129854 (WPP_RECORDER_SF_LL.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureAcquiredMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  const struct CPointerInputFrame *v7; // rsi
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rbx
  int v11; // edx
  int v12; // r8d
  CInputDest *v13; // rax
  _BYTE v14[208]; // [rsp+40h] [rbp-E8h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      206,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v9 = WPP_GLOBAL_Control;
  }
  v10 = *((_QWORD *)v7 + 12) + 608 * v6;
  if ( (*(_DWORD *)v10 & 0x40) != 0 )
  {
    memset(v14, 0, 0xC8uLL);
    v14[192] = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v10, a4, 593LL) )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v11, v12, 207, a5, *(_DWORD *)(v10 + 252), *(_WORD *)(v10 + 240));
    }
    v13 = CInputDest::CInputDest((CInputDest *)v14, (const struct CInputDest *)(v10 + 408));
    CTouchProcessor::RemoveLostCaptureTarget(this, *(unsigned __int16 *)(v10 + 252), v13);
    v9 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v9->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      v9->DeviceExtension,
      (_DWORD)a2,
      11,
      208,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
}
