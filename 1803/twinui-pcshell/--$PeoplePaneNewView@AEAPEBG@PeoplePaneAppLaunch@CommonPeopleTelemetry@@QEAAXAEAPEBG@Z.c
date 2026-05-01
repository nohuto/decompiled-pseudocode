/*
 * XREFs of ??$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x1801BF564
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801C34A0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x18016DE28 (-get@-$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLog.c)
 */

char __fastcall CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneNewView<unsigned short const * &>(
        __int64 a1,
        LPCWSTR *a2)
{
  _QWORD *v4; // rax
  TraceLoggingHProvider v5; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v4 = wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(
         a1,
         (void (__cdecl *)())lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v4[1] > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn((TraceLoggingHProvider)v4[1], 0x200000000000uLL);
    if ( (_BYTE)v4 )
    {
      TlgCreateWsz(&pDesc, *a2);
      LOBYTE(v4) = TlgWrite(v5, &unk_180393657, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
    }
  }
  return (char)v4;
}
