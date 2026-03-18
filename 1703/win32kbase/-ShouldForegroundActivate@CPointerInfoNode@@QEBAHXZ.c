/*
 * XREFs of ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00A11AC
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01223C0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C0122DC8 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::ShouldForegroundActivate(CPointerInfoNode *this)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( (*((_DWORD *)this + 1) & 0x1000) == 0 )
    return (unsigned int)CPointerInfoNode::IsPrimaryDown(this) != 0;
  return v1;
}
