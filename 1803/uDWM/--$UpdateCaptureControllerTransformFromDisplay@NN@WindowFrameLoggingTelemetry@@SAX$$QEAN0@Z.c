/*
 * XREFs of ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x18007ACD0
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18007F24C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180037A44 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

int __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v4 = (__int64)wil::details::static_lazy<WindowFrameLogging>::get(
                  a1,
                  (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  v5 = *(const struct _TlgProvider_t **)(v4 + 8);
  if ( *(_DWORD *)v5 > 5u && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0 )
  {
    v4 = *((_QWORD *)v5 + 3) & 0x200000000000LL;
    if ( v4 == *((_QWORD *)v5 + 3) )
    {
      v10 = 0;
      v13 = 0;
      v9 = 8;
      v12 = 8;
      v8 = a1;
      v11 = a2;
      LODWORD(v4) = TlgWrite(v5, &unk_1800B75E0, 0LL, 0LL, 4u, &pData);
    }
  }
  return v4;
}
