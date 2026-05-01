/*
 * XREFs of ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x1801718D4
 * Callers:
 *     ??$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x180170724 (--$PositionShoulderTapStart@PEBG@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperienceManagerLogging@@P6AXXZ@Z @ 0x1801723E4 (-get@-$static_lazy@VShoulderTapExperienceManagerLogging@@@details@wil@@QEAAPEAVShoulderTapExperi.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::PositionShoulderTapStart_(
        ShoulderTapExperienceManagerTelemetry *this,
        const unsigned __int16 *a2)
{
  __int64 v3; // rax
  TraceLoggingHProvider v4; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v3 = wil::details::static_lazy<ShoulderTapExperienceManagerLogging>::get(
         this,
         lambda_e47dc56054974f6441f4df3a6c4c9af5_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v3 + 8) > 5u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v3 + 8), 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      TlgWrite(v4, &unk_18038E6A3, 0LL, 0LL, 3u, &pData);
    }
  }
}
