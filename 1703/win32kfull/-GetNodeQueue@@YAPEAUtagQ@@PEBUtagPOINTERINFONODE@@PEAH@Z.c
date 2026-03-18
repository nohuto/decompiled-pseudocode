/*
 * XREFs of ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C0199550
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C0198218 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6824 (-GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01E9FD4 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagQ *__fastcall GetNodeQueue(const struct tagPOINTERINFONODE *a1, int *a2)
{
  __int64 v4; // rax
  int *v6; // [rsp+20h] [rbp-8h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v4 = ValidateHwnd(*((_QWORD *)a1 + 10));
  v7 = v4;
  if ( v4 )
    return *(struct tagQ **)(*(_QWORD *)(v4 + 16) + 384LL);
  if ( gbValidateHandleForIL
    && (gbValidateHandleForIL = 0, v7 = ValidateHwnd(*((_QWORD *)a1 + 10)), gbValidateHandleForIL = 1, v7) )
  {
    *a2 = 1;
  }
  else if ( (*(_DWORD *)a1 & 0x400) == 0 )
  {
    PointerList::GetPointerCapture(*((PointerList **)a1 + 2), 0LL, (int)&v7, 0LL, v6);
    v4 = v7;
    if ( v7 )
      return *(struct tagQ **)(*(_QWORD *)(v4 + 16) + 384LL);
    v4 = xxxPointerSpeedHitTest(0);
    if ( v4 )
      return *(struct tagQ **)(*(_QWORD *)(v4 + 16) + 384LL);
  }
  return 0LL;
}
