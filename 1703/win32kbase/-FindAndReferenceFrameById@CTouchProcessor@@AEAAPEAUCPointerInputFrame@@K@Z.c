/*
 * XREFs of ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E428
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::FindAndReferenceFrameById(
        CTouchProcessor *this,
        unsigned int a2)
{
  struct CPointerInputFrame *result; // rax

  result = CTouchProcessor::FindFrameById(this, a2);
  if ( result )
    _InterlockedIncrement((volatile signed __int32 *)result + 11);
  return result;
}
