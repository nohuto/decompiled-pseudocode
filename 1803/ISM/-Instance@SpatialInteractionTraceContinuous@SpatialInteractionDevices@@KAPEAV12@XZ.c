/*
 * XREFs of ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A4BB0
 * Callers:
 *     ?InputReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKPEB_W@Z @ 0x1800A4CE0 (-InputReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKPEB_W@Z.c)
 *     ?TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXPEB_WKKI_N10AEBU_GUID@@IAEAY02$$CBMAEAY03$$CBM34@Z @ 0x1800A4DAC (-TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXP.c)
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A6930 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A7E80 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?SetHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKGEG@Z @ 0x1800D4144 (-SetHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKGEG@Z.c)
 *     ?StopHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKK@Z @ 0x1800D4234 (-StopHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     ?EffectiveHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKE@Z @ 0x1800D42DC (-EffectiveHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKK.c)
 *     ?StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D8C50 (-StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UE.c)
 *     wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::_ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___ @ 0x1800D946C (wil--details--ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___--_ScopeExitFn__lambda_f890.c)
 *     std::_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_::_Do_call @ 0x1800DAB90 (std--_Func_impl_no_alloc__lambda_a8bf174a58f89e727d2f8f2640ee39aa__void_unsigned_char_--_Do_call.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1800E1670 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

struct SpatialInteractionDevices::SpatialInteractionTraceContinuous *SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance(
        void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    Context = &qword_180136388;
    qword_180136388 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_1801363A0 = (TraceLoggingHProvider)&`SpatialInteractionDevices::SpatialInteractionTraceContinuous::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
    qword_180136390 = (__int64)qword_1801363A0;
    byte_180136398 = 1;
    TraceLoggingRegister(qword_1801363A0);
    dword_18013639C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180136388 + 8))(&qword_180136388);
    InitOnceComplete(
      &`SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance'::`2'::wrapper,
      0,
      &qword_180136388);
  }
  return (struct SpatialInteractionDevices::SpatialInteractionTraceContinuous *)Context;
}
