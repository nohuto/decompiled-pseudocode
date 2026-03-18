/*
 * XREFs of ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C0127B88
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C01227D4 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0122834 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetupNewQFrame(
        CTouchProcessor *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        CInputDest *a5,
        int a6)
{
  __int64 v7; // rsi
  unsigned int v9; // eax
  int v10; // edi
  __int64 v11; // rbx
  int v12; // edx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  CInputDest *v16; // rax
  _BYTE v17[208]; // [rsp+40h] [rbp-E8h] BYREF

  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      76,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v9 = *(_DWORD *)(v7 + 48);
  v10 = 0;
  v11 = *(_QWORD *)(v7 + 104);
  if ( v9 )
  {
    while ( *(_DWORD *)v11 != -1 )
    {
      v11 += 240LL;
      if ( ++v10 >= v9 )
        goto LABEL_6;
    }
    v16 = CInputDest::CInputDest((CInputDest *)v17, a5);
    CTouchProcessor::InitializeQFrame(a1, v11, v10, 0LL, v16, a6);
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 77;
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
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 78;
LABEL_8:
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(v13->DeviceExtension, v12, 11, v14, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  CInputDest::SetEmpty(a5);
  return v11;
}
