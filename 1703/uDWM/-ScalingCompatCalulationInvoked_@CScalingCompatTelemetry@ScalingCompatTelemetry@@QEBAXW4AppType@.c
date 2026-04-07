/*
 * XREFs of ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x18003E9A8
 * Callers:
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x180049DE4 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 * Callees:
 *     _TlgWrite @ 0x180016430 (_TlgWrite.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180049F34 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

int __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 v5; // rax
  const struct _TlgProvider_t *v6; // rcx
  int v8; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v10; // [rsp+68h] [rbp+7h]
  __int64 v11; // [rsp+70h] [rbp+Fh]
  int *v12; // [rsp+78h] [rbp+17h]
  __int64 v13; // [rsp+80h] [rbp+1Fh]
  int *v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+90h] [rbp+2Fh]
  int v16; // [rsp+D8h] [rbp+77h] BYREF
  int v17; // [rsp+E0h] [rbp+7Fh] BYREF

  v17 = a4;
  v16 = a3;
  v5 = wil::details::static_lazy<ScalingCompatLogging>::get(
         a1,
         lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_);
  v6 = *(const struct _TlgProvider_t **)(v5 + 8);
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = a2;
    v10 = &v8;
    v12 = &v16;
    v14 = &v17;
    v11 = 4LL;
    v13 = 4LL;
    v15 = 4LL;
    LODWORD(v5) = TlgWrite(v6, &unk_1800AFC23, 0LL, 0LL, 5u, &pData);
  }
  return v5;
}
