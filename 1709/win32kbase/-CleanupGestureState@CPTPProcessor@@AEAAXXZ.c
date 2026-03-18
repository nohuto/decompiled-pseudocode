/*
 * XREFs of ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012A824
 * Callers:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C012A508 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012AD40 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011D5EC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 */

void __fastcall CPTPProcessor::CleanupGestureState(CPTPProcessor *this)
{
  struct CPointerInputFrame *v2; // rdx

  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 552));
  *((_DWORD *)this + 188) = 0;
  *((_DWORD *)this + 189) &= ~1u;
  v2 = (struct CPointerInputFrame *)*((_QWORD *)this + 97);
  if ( v2 )
  {
    CTouchProcessor::FreeFrame(this, v2, 1);
    *((_QWORD *)this + 97) = 0LL;
  }
}
