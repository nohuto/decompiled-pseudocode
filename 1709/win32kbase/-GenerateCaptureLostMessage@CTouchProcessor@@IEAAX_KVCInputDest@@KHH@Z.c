/*
 * XREFs of ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C011DD78
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0123778 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0119808 (-AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C0128F34 (WPP_RECORDER_SF_HL.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureLostMessage(__int64 *a1, __int64 a2, CInputDest *a3, int a4)
{
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // r9
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v11; // r14
  _WORD *v12; // rbp
  int v13; // edx
  int v14; // r8d
  CInputDest *v15; // rax
  _BYTE v16[200]; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE v17[200]; // [rsp+108h] [rbp-F0h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD1u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)a1, *(_DWORD *)(a2 + 28));
    v11 = FrameById;
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
      v12 = (_WORD *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32));
      memset(v16, 0, sizeof(v16));
      v16[192] = 0;
      if ( (unsigned int)CTouchProcessor::GenerateMessage(a1, v12, a2, 594LL) )
      {
        v15 = CInputDest::CInputDest((CInputDest *)v17, (const struct CInputDest *)(v12 + 204));
        CTouchProcessor::AddLostCaptureTarget((CTouchProcessor *)a1, v12[126], v15);
      }
      else
      {
        WPP_RECORDER_SF_HL(a1[1], v13, v14, 214, a4, *(_WORD *)(a2 + 16), v12[120]);
      }
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)a1, v11);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0xD7u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0xD4u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v8 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v9 = 213;
        goto LABEL_14;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(a1[1], 4u, 0xBu, 0xD2u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v8 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v9 = 211;
LABEL_14:
      WPP_RECORDER_SF_(
        (__int64)v8->DeviceExtension,
        5u,
        0xBu,
        v9,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
  }
  CInputDest::SetEmpty(a3);
}
