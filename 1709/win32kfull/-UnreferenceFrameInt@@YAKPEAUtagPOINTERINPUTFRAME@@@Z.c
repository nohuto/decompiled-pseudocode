/*
 * XREFs of ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000CB98 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00F8798 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4B5C (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01A4C18 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     ?FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01A4E70 (-FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C01A4F10 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A51F4 (-GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A5740 (-ProcessPointerInfoNodeEnterLeave@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     DereferencePointerInputFrame @ 0x1C01A6600 (DereferencePointerInputFrame.c)
 *     DereferencePointerInputFrameAndMessageData @ 0x1C01A6620 (DereferencePointerInputFrameAndMessageData.c)
 *     UnreferenceUndispatchedFrame @ 0x1C01A6E54 (UnreferenceUndispatchedFrame.c)
 *     xxxSetManipulationInputTarget @ 0x1C01A6F54 (xxxSetManipulationInputTarget.c)
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01CB004 (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01CB378 (-GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01CB458 (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01CBF18 (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?SetPointerDataCaptureChanged@@YAHKG@Z @ 0x1C01CC12C (-SetPointerDataCaptureChanged@@YAHKG@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01CC274 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01CC920 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C01CDE1C (DelegateCoalescePointerMessage.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01CEB1C (xxxDoDeferredPointerActivate.c)
 * Callees:
 *     FreeTPFrame @ 0x1C01A686C (FreeTPFrame.c)
 */

__int64 __fastcall UnreferenceFrameInt(struct tagPOINTERINPUTFRAME *a1)
{
  signed __int32 v1; // et0
  __int64 v2; // rdx

  v1 = _InterlockedDecrement((volatile signed __int32 *)a1 + 9);
  v2 = *((unsigned int *)a1 + 9);
  if ( v1 || *((_DWORD *)a1 + 11) != *((_DWORD *)a1 + 10) )
    return (unsigned int)v2;
  FreeTPFrame(a1, v2);
  return 0LL;
}
