/*
 * XREFs of ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18006CFE8
 * Callers:
 *     ??1?$ActivityData@VCDMUtilsUnlockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006D178 (--1-$ActivityData@VCDMUtilsUnlockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ @ 0x18006D220 (-StopActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x18006D718 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x18006D860 (-ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18006E9B0 (-NotifyFailure@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006EFCC (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?ReportStopActivity@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18006F3CC (-ReportStopActivity@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x18006F7C4 (--$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180008910 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800B3E18 (atexit.c)
 */

const struct _TlgProvider_t *CDMUtilsUnlockLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CDMUtilsUnlockLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_18015DEE8;
    qword_18015DEE8 = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_18015DF00 = (struct _TlgProvider_t *)&`CDMUtilsUnlockLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fcb9b5ef2ad8bfd832238adf5d8bb457_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18015DEE8, qword_18015DF00);
    InitOnceComplete(&`CDMUtilsUnlockLogging::Instance'::`2'::wrapper, 0, &qword_18015DEE8);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
