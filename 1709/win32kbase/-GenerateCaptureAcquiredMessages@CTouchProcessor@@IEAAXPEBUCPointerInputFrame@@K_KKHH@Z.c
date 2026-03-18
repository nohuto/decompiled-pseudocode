/*
 * XREFs of ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011DACC
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0125314 (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01291A0 (WPP_RECORDER_SF_LL.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureAcquiredMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  CInputDest *v12; // rax
  _BYTE v13[208]; // [rsp+40h] [rbp-E8h] BYREF

  v6 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xCEu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = *((_QWORD *)a2 + 12) + 608 * v6;
  if ( (*(_DWORD *)v9 & 0x40) != 0 )
  {
    memset(v13, 0, 0xC8uLL);
    v13[192] = 0;
    if ( !(unsigned int)CTouchProcessor::GenerateMessage(this, v9, a4, 593LL) )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v10, v11, 207, a5, *(_DWORD *)(v9 + 252), *(_WORD *)(v9 + 240));
    }
    v12 = CInputDest::CInputDest((CInputDest *)v13, (const struct CInputDest *)(v9 + 408));
    CTouchProcessor::RemoveLostCaptureTarget(this, *(unsigned __int16 *)(v9 + 252), v12);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD0u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
}
