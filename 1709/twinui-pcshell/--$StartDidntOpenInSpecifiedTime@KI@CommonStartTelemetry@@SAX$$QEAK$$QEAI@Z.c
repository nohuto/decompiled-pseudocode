/*
 * XREFs of ??$StartDidntOpenInSpecifiedTime@KI@CommonStartTelemetry@@SAX$$QEAK$$QEAI@Z @ 0x18018DD20
 * Callers:
 *     _lambda_b5008ceb20ea0aaab8abc16420ca4d79_::_lambda_invoker_cdecl_ @ 0x18018A590 (_lambda_b5008ceb20ea0aaab8abc16420ca4d79_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18017CBDC (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CommonStartTelemetry::StartDidntOpenInSpecifiedTime<unsigned long,unsigned int>(__int64 a1, __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+50h] [rbp-38h]
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

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
    LODWORD(v4) = TlgWrite(v4, &unk_180266658, 0LL, 0LL, 4u, &pData);
  }
  return (int)v4;
}
