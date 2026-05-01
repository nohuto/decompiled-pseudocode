/*
 * XREFs of ?Provider@StartMenuExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800BB664
 * Callers:
 *     ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x1800B9BF0 (--$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z.c)
 *     ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x1800B9D5C (--$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMe.c)
 *     ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x1800BA93C (-StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BAA84 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?NotifyFailure@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800BABA0 (-NotifyFailure@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ @ 0x1800BB1C0 (-StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ.c)
 *     ??1?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BB584 (--1-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?ReportStopActivity@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800BB718 (-ReportStopActivity@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Para.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *StartMenuExperienceLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BA710;
    qword_1802BA710 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BA728 = (TraceLoggingHProvider)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
    qword_1802BA718 = (__int64)qword_1802BA728;
    byte_1802BA720 = 1;
    TraceLoggingRegister(qword_1802BA728);
    dword_1802BA724 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BA710 + 8))(&qword_1802BA710);
    InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1802BA710);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
