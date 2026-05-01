/*
 * XREFs of ?Provider@LockScreenServiceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800E060C
 * Callers:
 *     ??1?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E0778 (--1-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x1800E0820 (-StopActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServi.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1800E0C0C (-StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServ.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x1800E0D60 (-StopActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenSer.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1800E114C (-StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenSe.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x1800E12A0 (-StopActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServi.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1800E1664 (-StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServ.c)
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1800E2184 (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800E2590 (-NotifyFailure@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E2B34 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?ReportStopActivity@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800E2D5C (-ReportStopActivity@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *LockScreenServiceLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`LockScreenServiceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BAF08;
    qword_1802BAF08 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BAF20 = (TraceLoggingHProvider)&`LockScreenServiceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_63f7170bce12b7e543c3c21ebfae390d_::_lambda_invoker_cdecl_);
    qword_1802BAF10 = (__int64)qword_1802BAF20;
    byte_1802BAF18 = 1;
    TraceLoggingRegister(qword_1802BAF20);
    dword_1802BAF1C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAF08 + 8))(&qword_1802BAF08);
    InitOnceComplete(&`LockScreenServiceLogging::Instance'::`2'::wrapper, 0, &qword_1802BAF08);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
