/*
 * XREFs of ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012525C
 * Callers:
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C0124F5C (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0125780 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0111BBC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 */

void __fastcall CPTPProcessor::CleanupGestureState(CPTPProcessor *this)
{
  struct CPointerInputFrame *v2; // rdx

  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 392));
  *((_DWORD *)this + 144) = 0;
  *((_DWORD *)this + 145) &= ~1u;
  v2 = (struct CPointerInputFrame *)*((_QWORD *)this + 75);
  if ( v2 )
  {
    CTouchProcessor::FreeFrame((struct _KTHREAD **)this, v2, 1);
    *((_QWORD *)this + 75) = 0LL;
  }
}
