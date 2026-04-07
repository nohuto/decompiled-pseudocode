/*
 * XREFs of ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x18007AB60
 * Callers:
 *     ?UpdateCaptureControllerCaptureState@CProjectionBorderManager@@UEAAJPEAUHWND__@@_N@Z @ 0x18007D7F0 (-UpdateCaptureControllerCaptureState@CProjectionBorderManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180037A44 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

int __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  __int64 v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  v4 = (__int64)wil::details::static_lazy<WindowFrameLogging>::get(
                  (__int64)a1,
                  (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  v5 = *(const struct _TlgProvider_t **)(v4 + 8);
  if ( *(_DWORD *)v5 > 5u && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0 )
  {
    v4 = *((_QWORD *)v5 + 3) & 0x200000000000LL;
    if ( v4 == *((_QWORD *)v5 + 3) )
    {
      v6 = *a1;
      v12 = 0;
      v15 = 0;
      v8 = v6;
      v10 = &v8;
      v11 = 8;
      v13 = a2;
      v14 = 1;
      LODWORD(v4) = TlgWrite(v5, &unk_1800B762D, 0LL, 0LL, 4u, &pData);
    }
  }
  return v4;
}
