/*
 * XREFs of ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01271E8
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0121E2C (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0121E8C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetupNewQFrame(
        CTouchProcessor *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        CInputDest *a5,
        int a6)
{
  unsigned int v9; // eax
  int v10; // edi
  __int64 v11; // rbx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  CInputDest *v15; // rax
  _BYTE v16[208]; // [rsp+40h] [rbp-E8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x4Cu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = *(_DWORD *)(a2 + 48);
  v10 = 0;
  v11 = *(_QWORD *)(a2 + 104);
  if ( v9 )
  {
    while ( *(_DWORD *)v11 != -1 )
    {
      v11 += 240LL;
      if ( ++v10 >= v9 )
        goto LABEL_6;
    }
    v15 = CInputDest::CInputDest((CInputDest *)v16, a5);
    CTouchProcessor::InitializeQFrame(a1, v11, v10, 0LL, v15, a6);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 77;
      goto LABEL_8;
    }
  }
  else
  {
LABEL_6:
    v11 = *a3;
    *a3 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    CInputDest::operator=(v11 + 16, (__int64)a5);
    CTouchProcessor::InitializeQFrameCoalesceState(a1, (struct CPointerQFrame *)v11, a6);
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 78;
LABEL_8:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
  }
  CInputDest::SetEmpty(a5);
  return v11;
}
