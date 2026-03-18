/*
 * XREFs of ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0117094
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01113C4 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0117034 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C011D520 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 * Callees:
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C011DB98 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::InitializeQFrameCoalesceState(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        int a3)
{
  unsigned int v4; // eax

  v4 = *((_DWORD *)a2 + 51) & 0xFFFFFFFA | 1;
  *((_DWORD *)a2 + 51) = v4;
  if ( a3 )
  {
    *((_DWORD *)a2 + 52) = 1;
    *((_DWORD *)a2 + 51) = v4 | 2;
  }
  else
  {
    *((_DWORD *)a2 + 51) = v4 & 0xFFFFFFFD;
    CTouchProcessor::TrackCoalesceOnArrival(this, a2, 10LL);
  }
  *((_DWORD *)a2 + 53) = 0;
}
