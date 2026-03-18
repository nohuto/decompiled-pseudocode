/*
 * XREFs of ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0199608
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0008530 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01992B0 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

struct tagWND *__fastcall GetPrevMTNodeTarget(struct tagPOINTERINFONODE *a1, struct tagPOINTERINPUTFRAME *a2)
{
  __int64 v2; // rdi
  struct tagPOINTERINPUTFRAME *PreviousFrameByDeviceInt; // rax
  __int64 v4; // r10
  struct tagPOINTERINPUTFRAME *v5; // rbx
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax

  v2 = 0LL;
  PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(a2);
  v5 = PreviousFrameByDeviceInt;
  if ( PreviousFrameByDeviceInt )
  {
    _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 9);
    ValidNodeInFrame = FindValidNodeInFrame(PreviousFrameByDeviceInt, *(_WORD *)(v4 + 60), 0LL);
    if ( ValidNodeInFrame )
      v2 = HMValidateHandleNoSecure(*((_QWORD *)ValidNodeInFrame + 10), 1);
    UnreferenceFrameInt(v5);
  }
  return (struct tagWND *)v2;
}
