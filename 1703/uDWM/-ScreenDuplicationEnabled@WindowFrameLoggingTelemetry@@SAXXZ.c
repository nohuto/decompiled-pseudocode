/*
 * XREFs of ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007E5F0
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007E770 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000C34C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x180016430 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                                                    a1,
                                                    (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v1 > 5u
    && (*((_QWORD *)v1 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v1 + 3) & 0x200000000000LL) == *((_QWORD *)v1 + 3) )
  {
    TlgWrite(v1, &unk_1800AF5EA, 0LL, 0LL, 2u, &pData);
  }
}
