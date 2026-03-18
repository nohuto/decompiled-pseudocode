/*
 * XREFs of ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0121E8C
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C011D088 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0121E2C (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01271E8 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 * Callees:
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01277C0 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::InitializeQFrameCoalesceState(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        int a3)
{
  unsigned int v4; // eax

  v4 = *((_DWORD *)a2 + 55) & 0xFFFFFFFA | 1;
  *((_DWORD *)a2 + 55) = v4;
  if ( a3 )
  {
    *((_DWORD *)a2 + 56) = 1;
    *((_DWORD *)a2 + 55) = v4 | 2;
  }
  else
  {
    *((_DWORD *)a2 + 55) = v4 & 0xFFFFFFFD;
    CTouchProcessor::TrackCoalesceOnArrival(this, a2, 10LL);
  }
  *((_DWORD *)a2 + 57) = 0;
}
