/*
 * XREFs of ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0125158
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011DE10 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0124C0C (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124488 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessPointerInfoNodeEnterLeave(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // rax
  __int64 v4; // r10
  struct CPointerInputFrame *v5; // rbx

  PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, a2);
  v5 = PreviousFrameByDeviceInt;
  if ( PreviousFrameByDeviceInt )
  {
    _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 11);
    CTouchProcessor::ProcessEnterLeave(this, PreviousFrameByDeviceInt, *(struct CPointerInfoNode **)(v4 + 96));
    CTouchProcessor::UnreferenceFrameInt(this, v5);
  }
}
