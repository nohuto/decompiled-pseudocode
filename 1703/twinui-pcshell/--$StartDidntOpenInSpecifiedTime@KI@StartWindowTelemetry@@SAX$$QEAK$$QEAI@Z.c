/*
 * XREFs of ??$StartDidntOpenInSpecifiedTime@KI@StartWindowTelemetry@@SAX$$QEAK$$QEAI@Z @ 0x180159AE4
 * Callers:
 *     _lambda_d0430a5998976d734de1196e217e0dbe_::_lambda_invoker_cdecl_ @ 0x180156230 (_lambda_d0430a5998976d734de1196e217e0dbe_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180147F6C (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall StartWindowTelemetry::StartDidntOpenInSpecifiedTime<unsigned long,unsigned int>(__int64 a1, __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+50h] [rbp-48h]
  int v8; // [rsp+58h] [rbp-40h]
  int v9; // [rsp+5Ch] [rbp-3Ch]
  __int64 v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]

  v4 = CommonStartTelemetryLogging::Provider();
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v9 = 0;
    v12 = 0;
    v8 = 4;
    v11 = 4;
    v7 = a1;
    v10 = a2;
    LODWORD(v4) = TlgWrite(v4, &unk_180202AB5, 0LL, 0LL, 4u, &pData);
  }
  return (int)v4;
}
