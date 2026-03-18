/*
 * XREFs of ?RetireFrame@CKernelTransport@@QEAAJ_KPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x18013399C
 * Callers:
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKernelTransport::RetireFrame(
        CKernelTransport *this,
        __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v4 = 0;
  v5 = NtDCompositionRetireFrame(*(_QWORD *)this, &v7, a3, a4);
  if ( v5 < 0 )
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5 | 0x10000000, 0x9Cu);
  }
  return v4;
}
