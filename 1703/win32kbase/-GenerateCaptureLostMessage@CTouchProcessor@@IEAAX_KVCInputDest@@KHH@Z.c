/*
 * XREFs of ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C011EED0
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0124108 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C011AA34 (-AddLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     WPP_RECORDER_SF_HL @ 0x1C01296DC (WPP_RECORDER_SF_HL.c)
 */

void __fastcall CTouchProcessor::GenerateCaptureLostMessage(CTouchProcessor *a1, __int64 a2, CInputDest *a3, int a4)
{
  __int64 v6; // rsi
  int v8; // edx
  PDEVICE_OBJECT v9; // rcx
  int v10; // r9d
  struct CPointerInputFrame *FrameById; // rax
  int v12; // edx
  struct CPointerInputFrame *v13; // r14
  _WORD *v14; // rbp
  int v15; // edx
  int v16; // r8d
  CInputDest *v17; // rax
  _BYTE v18[200]; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE v19[200]; // [rsp+108h] [rbp-F0h] BYREF

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      209,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( v6 )
  {
    FrameById = CTouchProcessor::FindFrameById(a1, *(_DWORD *)(v6 + 28));
    v13 = FrameById;
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
      v14 = (_WORD *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(v6 + 32));
      memset(v18, 0, sizeof(v18));
      v18[192] = 0;
      if ( (unsigned int)CTouchProcessor::GenerateMessage(a1, v14, v6, 594LL) )
      {
        v17 = CInputDest::CInputDest((CInputDest *)v19, (const struct CInputDest *)(v14 + 204));
        CTouchProcessor::AddLostCaptureTarget(a1, v14[126], v17);
      }
      else
      {
        WPP_RECORDER_SF_HL(*((_QWORD *)a1 + 1), v15, v16, 214, a4, *(_WORD *)(v6 + 16), v14[120]);
      }
      CTouchProcessor::UnreferenceFrameInt(a1, v13);
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 215;
        goto LABEL_14;
      }
    }
    else
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)a1 + 1), v12, 11, 212, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 213;
        goto LABEL_14;
      }
    }
  }
  else
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)a1 + 1), a2, 11, 210, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 211;
LABEL_14:
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_(v9->DeviceExtension, v8, 11, v10, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  CInputDest::SetEmpty(a3);
}
