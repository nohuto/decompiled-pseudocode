/*
 * XREFs of ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210
 * Callers:
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0004480 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C011C230 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C011CEC0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C011D950 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C011DD78 (-GenerateCaptureLostMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C011F058 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C011F310 (-GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C011F7F0 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C011F950 (-GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C011FB70 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C011FDA0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01202E0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C01208C0 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z.c)
 *     ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C0120BE0 (-GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0120F00 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C0122200 (-IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z.c)
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@PEBUtagMSG@@H@Z @ 0x1C01222F0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@PEBUtagMSG@@H@Z.c)
 *     ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C01236B0 (-PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0123778 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C0124F20 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0126C68 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C0126D4C (-SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z.c)
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01288A0 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     <none>
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::FindFrameById(CTouchProcessor *this, int a2)
{
  CTouchProcessor *v2; // r8
  CTouchProcessor *v3; // rax
  char *v5; // rcx

  v2 = (CTouchProcessor *)((char *)this + 280);
  v3 = (CTouchProcessor *)*((_QWORD *)this + 35);
  if ( v3 == (CTouchProcessor *)((char *)this + 280) )
    return 0LL;
  do
  {
    v5 = (char *)v3 - 8;
    if ( *((_DWORD *)v3 + 8) == a2 )
      break;
    v3 = *(CTouchProcessor **)v3;
  }
  while ( v3 != v2 );
  if ( v3 == v2 )
    return 0LL;
  return (struct CPointerInputFrame *)v5;
}
