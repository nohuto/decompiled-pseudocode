/*
 * XREFs of ?Provider@WindowManagementLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180133084
 * Callers:
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180131DCC (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1801320D4 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180132520 (-NotifyFailure@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?StopActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@MEAAXXZ @ 0x180132B80 (-StopActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180132F9C (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ?StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1801420EC (-StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014227C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?StopActivity@ShowSnapAssist@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1801423B0 (-StopActivity@ShowSnapAssist@MultitaskingViewTelemetry@@MEAAXXZ.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *WindowManagementLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180244CE0;
    qword_180244CE0 = (__int64)&WindowManagementLogging::`vftable';
    qword_180244CF8 = (TraceLoggingHProvider)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    qword_180244CE8 = (__int64)qword_180244CF8;
    byte_180244CF0 = 1;
    TraceLoggingRegister(qword_180244CF8);
    dword_180244CF4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180244CE0 + 8))(&qword_180244CE0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_180244CE0);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
