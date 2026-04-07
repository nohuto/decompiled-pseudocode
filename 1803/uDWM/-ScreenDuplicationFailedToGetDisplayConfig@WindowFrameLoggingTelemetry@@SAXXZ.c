/*
 * XREFs of ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007BACC
 * Callers:
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x18007E550 (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180037A44 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ScreenDuplicationFailedToGetDisplayConfig(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = (const struct _TlgProvider_t *)wil::details::static_lazy<WindowFrameLogging>::get(
                                        a1,
                                        (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 5u
    && (*((_QWORD *)v1 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v1 + 3) & 0x200000000000LL) == *((_QWORD *)v1 + 3) )
  {
    TlgWrite(v1, &unk_1800B8044, 0LL, 0LL, 2u, &pData);
  }
}
