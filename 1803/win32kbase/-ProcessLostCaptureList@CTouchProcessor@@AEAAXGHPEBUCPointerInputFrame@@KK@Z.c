/*
 * XREFs of ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C011A0B0
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C010E18C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C010E340 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0112560 (-GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01182F8 (-PopLostCaptureTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessLostCaptureList(
        CTouchProcessor *this,
        __int64 a2,
        int a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int16 v8; // r14
  int v10; // ebx
  CInputDest *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // [rsp+20h] [rbp-1A8h]
  __int64 v14; // [rsp+28h] [rbp-1A0h]
  _OWORD v15[12]; // [rsp+40h] [rbp-188h] BYREF
  _OWORD v16[12]; // [rsp+100h] [rbp-C8h] BYREF

  v8 = a2;
  if ( a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  CTouchProcessor::PopLostCaptureTarget(this, v15, v8);
  while ( LODWORD(v15[0]) )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)a4 + 14) + 276LL);
        v11 = CInputDest::CInputDest((CInputDest *)v16, (const struct CInputDest *)v15);
        LODWORD(v14) = -__CFSHR__(v10, 7);
        LODWORD(v13) = -__CFSHR__(v10, 6);
        CTouchProcessor::GenerateCaptureEndMessage((__int64)this, (__int64)a4, a5, a6, v13, v14, v11);
      }
    }
    v12 = CTouchProcessor::PopLostCaptureTarget(this, v16, v8);
    CInputDest::operator=((__int64)v15, v12);
    CInputDest::SetEmpty((CInputDest *)v16);
  }
  CInputDest::SetEmpty((CInputDest *)v15);
}
