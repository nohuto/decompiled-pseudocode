/*
 * XREFs of ?Instance@InputETW@@KAPEAV1@XZ @ 0x180005B60
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180005C90 (-OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180005D74 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180005E58 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x180013380 (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x180013420 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800134C0 (-ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x180013560 (-ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x180013600 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800136A0 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180017CF0 (-DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180017DD4 (-DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180017EB8 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z @ 0x1800631CC (-DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z.c)
 *     ?DragInProgress@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z @ 0x180063310 (-DragInProgress@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z.c)
 *     ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z @ 0x180063454 (-DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z.c)
 *     ?DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z @ 0x180063598 (-DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K@Z.c)
 *     ?FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x1800636DC (-FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x1800637F0 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x18007B118 (-OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z.c)
 *     ?DragStartedLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z @ 0x1800B15DC (-DragStartedLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z.c)
 *     ?DragInProgressLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z @ 0x1800B174C (-DragInProgressLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z.c)
 *     ?DragEndedLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z @ 0x1800B18BC (-DragEndedLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z.c)
 *     ?DragCancelledLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z @ 0x1800B1A2C (-DragCancelledLegacy@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@0_K1@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1800E1670 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

struct InputETW *InputETW::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801360C0;
    qword_1801360C0 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_1801360D8 = (TraceLoggingHProvider)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    qword_1801360C8 = (__int64)qword_1801360D8;
    byte_1801360D0 = 1;
    TraceLoggingRegister(qword_1801360D8);
    dword_1801360D4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1801360C0 + 8))(&qword_1801360C0);
    InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_1801360C0);
  }
  return (struct InputETW *)Context;
}
