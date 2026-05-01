/*
 * XREFs of ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x180177548
 * Callers:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x1801773BC (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180177644 (-Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  const struct _TlgProvider_t *v5; // rax
  int v7; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v9; // [rsp+68h] [rbp+7h]
  __int64 v10; // [rsp+70h] [rbp+Fh]
  int *v11; // [rsp+78h] [rbp+17h]
  __int64 v12; // [rsp+80h] [rbp+1Fh]
  int *v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+90h] [rbp+2Fh]
  int v15; // [rsp+D8h] [rbp+77h] BYREF
  int v16; // [rsp+E0h] [rbp+7Fh] BYREF

  v16 = a4;
  v15 = a3;
  v5 = ScalingCompatLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    v7 = a2;
    v9 = &v7;
    v11 = &v15;
    v13 = &v16;
    v10 = 4LL;
    v12 = 4LL;
    v14 = 4LL;
    LODWORD(v5) = TlgWrite(v5, &unk_18020381C, 0LL, 0LL, 5u, &pData);
  }
  return (int)v5;
}
