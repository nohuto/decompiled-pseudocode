/*
 * XREFs of ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C012745C
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0121A10 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0124780 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C0122420 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::ShouldForegroundActivate(CPointerInfoNode *this)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( (*((_DWORD *)this + 1) & 0x1000) == 0 )
    return (unsigned int)CPointerInfoNode::IsPrimaryDown(this) != 0;
  return v1;
}
