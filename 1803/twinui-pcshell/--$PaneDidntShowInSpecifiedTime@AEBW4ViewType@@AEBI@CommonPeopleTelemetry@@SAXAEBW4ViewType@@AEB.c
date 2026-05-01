/*
 * XREFs of ??$PaneDidntShowInSpecifiedTime@AEBW4ViewType@@AEBI@CommonPeopleTelemetry@@SAXAEBW4ViewType@@AEBI@Z @ 0x1801BF4AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79ac24caad3d17282936a32724f51f69___::Run @ 0x1801C46D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79ac24caad3d17282936a32724f51f69___--Run.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x18016DE28 (-get@-$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLog.c)
 */

char __fastcall CommonPeopleTelemetry::PaneDidntShowInSpecifiedTime<enum ViewType const &,unsigned int const &>(
        int *a1)
{
  _QWORD *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v2 = wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_);
  v3 = (const struct _TlgProvider_t *)v2[1];
  if ( *(_DWORD *)v3 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(v3, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      v12 = 0;
      v15 = 0;
      v7 = v5;
      v10 = &v7;
      v13 = &v8;
      v11 = 4;
      v8 = 5000;
      v14 = 4;
      LOBYTE(v2) = TlgWrite(v4, &unk_180393508, 0LL, 0LL, 4u, &pData);
    }
  }
  return (char)v2;
}
