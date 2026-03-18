/*
 * XREFs of ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C011D7D8
 * Callers:
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0116C0C (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C011A24C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C0117858 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::ShouldForegroundActivate(CPointerInfoNode *this)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( (*((_DWORD *)this + 1) & 0x1000) == 0 && !*((_DWORD *)this + 140) )
    return (unsigned int)CPointerInfoNode::IsPrimaryDown(this) != 0;
  return v1;
}
