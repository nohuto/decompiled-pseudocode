/*
 * XREFs of ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x18007AC30
 * Callers:
 *     ?UpdateCaptureControllerSize@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x18007D880 (-UpdateCaptureControllerSize@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180037A44 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

int __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>(__int64 *a1)
{
  __int64 v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = (__int64)wil::details::static_lazy<WindowFrameLogging>::get(
                  (__int64)a1,
                  (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  v3 = *(const struct _TlgProvider_t **)(v2 + 8);
  if ( *(_DWORD *)v3 > 5u && (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0 )
  {
    v2 = *((_QWORD *)v3 + 3) & 0x200000000000LL;
    if ( v2 == *((_QWORD *)v3 + 3) )
    {
      v4 = *a1;
      v10 = 0;
      v6 = v4;
      v8 = &v6;
      v9 = 8;
      LODWORD(v2) = TlgWrite(v3, &unk_1800B766E, 0LL, 0LL, 3u, &pData);
    }
  }
  return v2;
}
