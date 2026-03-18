/*
 * XREFs of ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012B178
 * Callers:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C012ADB0 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012B6A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011E74C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 */

void __fastcall CPTPProcessor::CleanupGestureState(CPTPProcessor *this)
{
  struct CPointerInputFrame *v2; // rdx

  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 528));
  *((_DWORD *)this + 182) = 0;
  *((_DWORD *)this + 183) &= ~1u;
  v2 = (struct CPointerInputFrame *)*((_QWORD *)this + 94);
  if ( v2 )
  {
    CTouchProcessor::FreeFrame(this, v2, 1);
    *((_QWORD *)this + 94) = 0LL;
  }
}
