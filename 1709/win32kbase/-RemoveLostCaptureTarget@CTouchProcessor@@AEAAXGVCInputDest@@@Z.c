/*
 * XREFs of ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0125314
 * Callers:
 *     ?GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011DACC (-GenerateCaptureAcquiredMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011D248 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z @ 0x1C011D77C (-FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z.c)
 */

void __fastcall CTouchProcessor::RemoveLostCaptureTarget(CTouchProcessor *a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerCaptureLostTarget **v5; // r10
  struct tagCPointerCaptureLostTarget **i; // r9
  CTouchProcessor *v7; // rcx
  struct tagCPointerCaptureLostTarget ***v8; // r9

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v5 = (struct tagCPointerCaptureLostTarget **)((char *)NodeById + 328);
    for ( i = (struct tagCPointerCaptureLostTarget **)*((_QWORD *)NodeById + 41); i != v5; i = *v8 )
    {
      if ( CInputDest::operator==((int *)i + 4, (__int64)a3) )
      {
        CTouchProcessor::FreeLostCaptureTarget(v7, v8);
        break;
      }
    }
  }
  CInputDest::SetEmpty(a3);
}
