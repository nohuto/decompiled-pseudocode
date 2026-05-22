/*
 * XREFs of ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18008FD44
 * Callers:
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x18008FE60 (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 *     ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJAEBUInputInfo@@@Z @ 0x18008FF08 (-InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJAEBUInputInfo@@@Z.c)
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x1800901C4 (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     ?TrackingRequestedHeartbeat_@RawInputProvidersContinuousTracing@@QEAAXPEBGK@Z @ 0x18009028C (-TrackingRequestedHeartbeat_@RawInputProvidersContinuousTracing@@QEAAXPEBGK@Z.c)
 *     ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180094160 (-OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z.c)
 *     ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x1800958BC (-QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z @ 0x180095AA8 (-OnTrackingRequestedHeartbeat@SpatialInputControllerCollection@@QEAAJK@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1800CA61C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

struct RawInputProvidersContinuousTracing *RawInputProvidersContinuousTracing::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1801105C0;
    qword_1801105C0 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_1801105D8 = (TraceLoggingHProvider)&`RawInputProvidersContinuousTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    qword_1801105C8 = (__int64)qword_1801105D8;
    byte_1801105D0 = 1;
    TraceLoggingRegister(qword_1801105D8);
    dword_1801105D4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1801105C0 + 8))(&qword_1801105C0);
    InitOnceComplete(&`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper, 0, &qword_1801105C0);
  }
  return (struct RawInputProvidersContinuousTracing *)Context;
}
