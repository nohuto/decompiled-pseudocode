/*
 * XREFs of ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0124D9C
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C006DF90 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C00A1008 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C011ED8C (-GenerateCaptureEndMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0123548 (-PopLostCaptureTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 */

void __fastcall CTouchProcessor::ProcessLostCaptureList(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v10; // ebx
  CInputDest *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // [rsp+20h] [rbp-1C8h]
  __int64 v14; // [rsp+28h] [rbp-1C0h]
  _OWORD v15[13]; // [rsp+40h] [rbp-1A8h] BYREF
  _OWORD v16[13]; // [rsp+110h] [rbp-D8h] BYREF

  CTouchProcessor::PopLostCaptureTarget(this, v15, a2);
  while ( LODWORD(v15[0]) )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)a4 + 14) + 260LL);
        v11 = CInputDest::CInputDest((CInputDest *)v16, (const struct CInputDest *)v15);
        LODWORD(v14) = -__CFSHR__(v10, 7);
        LODWORD(v13) = -__CFSHR__(v10, 6);
        CTouchProcessor::GenerateCaptureEndMessage((__int64)this, (__int64)a4, a5, a6, v13, v14, v11);
      }
    }
    v12 = CTouchProcessor::PopLostCaptureTarget(this, v16, a2);
    CInputDest::operator=((__int64)v15, v12);
    CInputDest::SetEmpty((CInputDest *)v16);
  }
  CInputDest::SetEmpty((CInputDest *)v15);
}
