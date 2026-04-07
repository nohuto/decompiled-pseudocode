/*
 * XREFs of InitOnceBeginInitialize_0 @ 0x180045AFD
 * Callers:
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800449C8 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180044BCC (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 *     _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_ @ 0x1800A1AE0 (_lambda_7c6f95392d1fa211f578d6d8eb47d107_--_lambda_invoker_cdecl_.c)
 *     _lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_ @ 0x1800A1B20 (_lambda_830a858705f438bc5eb56dc5316ebd68_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall InitOnceBeginInitialize_0(LPINIT_ONCE lpInitOnce, DWORD dwFlags, PBOOL fPending, LPVOID *lpContext)
{
  return InitOnceBeginInitialize(lpInitOnce, dwFlags, fPending, lpContext);
}
