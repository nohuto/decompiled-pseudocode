/*
 * XREFs of ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0127344
 * Callers:
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C0124F20 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0121E2C (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::SetupQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        const struct CInputDest *a4,
        int a5)
{
  unsigned int v9; // eax
  __int64 v10; // rbx
  int v11; // edi
  CInputDest *v12; // rax
  _BYTE v14[208]; // [rsp+40h] [rbp-E8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x3Eu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = *((_DWORD *)a2 + 12);
  v10 = *((_QWORD *)a2 + 13);
  v11 = 0;
  if ( v9 )
  {
    while ( *(_DWORD *)v10 != -1 )
    {
      if ( *(_QWORD *)(v10 + 8) != a3 )
      {
        v10 += 240LL;
        if ( ++v11 < v9 )
          continue;
      }
      goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( *(_DWORD *)v10 != -1 )
      goto LABEL_9;
  }
  v12 = CInputDest::CInputDest((CInputDest *)v14, a4);
  CTouchProcessor::InitializeQFrame(this, v10, v11, a3, v12, a5);
LABEL_9:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x3Fu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  return (struct CPointerQFrame *)v10;
}
