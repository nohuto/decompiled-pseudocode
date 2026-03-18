/*
 * XREFs of ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0127CE4
 * Callers:
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C01227D4 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::SetupQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        const struct CInputDest *a4,
        int a5)
{
  struct CPointerInputFrame *v7; // rsi
  PDEVICE_OBJECT v9; // rcx
  unsigned int v10; // eax
  int v11; // edx
  __int64 v12; // rbx
  int v13; // edi
  CInputDest *v14; // rax
  _BYTE v16[208]; // [rsp+40h] [rbp-E8h] BYREF

  v7 = a2;
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      62,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v9 = WPP_GLOBAL_Control;
  }
  v10 = *((_DWORD *)v7 + 12);
  v11 = -1;
  v12 = *((_QWORD *)v7 + 13);
  v13 = 0;
  if ( v10 )
  {
    while ( *(_DWORD *)v12 != -1 )
    {
      if ( *(_QWORD *)(v12 + 8) != a3 )
      {
        v12 += 240LL;
        if ( ++v13 < v10 )
          continue;
      }
      goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( *(_DWORD *)v12 != -1 )
      goto LABEL_9;
  }
  v14 = CInputDest::CInputDest((CInputDest *)v16, a4);
  CTouchProcessor::InitializeQFrame(this, v12, v13, a3, v14, a5);
  v9 = WPP_GLOBAL_Control;
LABEL_9:
  if ( LOWORD(v9->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(v9->DeviceExtension, v11, 11, 63, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  return (struct CPointerQFrame *)v12;
}
