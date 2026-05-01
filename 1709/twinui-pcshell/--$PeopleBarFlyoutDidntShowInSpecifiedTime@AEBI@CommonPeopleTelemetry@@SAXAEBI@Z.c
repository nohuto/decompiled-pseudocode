/*
 * XREFs of ??$PeopleBarFlyoutDidntShowInSpecifiedTime@AEBI@CommonPeopleTelemetry@@SAXAEBI@Z @ 0x1800B068C
 * Callers:
 *     _lambda_4f232bdb0e1defed5c13f1da76044def_::_lambda_invoker_cdecl_ @ 0x1800ADBC0 (_lambda_4f232bdb0e1defed5c13f1da76044def_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800AC01C (-Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int CommonPeopleTelemetry::PeopleBarFlyoutDidntShowInSpecifiedTime<unsigned int const &>()
{
  const struct _TlgProvider_t *v0; // rax
  int v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  v0 = CommonPeopleTelemetryLogging::Provider();
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x400000000000LL) == *((_QWORD *)v0 + 3) )
  {
    v6 = 0;
    v4 = &v2;
    v2 = 5000;
    v5 = 4;
    LODWORD(v0) = TlgWrite(v0, &unk_18025B1F0, 0LL, 0LL, 3u, &pData);
  }
  return (int)v0;
}
