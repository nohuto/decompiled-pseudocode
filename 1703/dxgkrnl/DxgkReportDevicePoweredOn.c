/*
 * XREFs of DxgkReportDevicePoweredOn @ 0x1C0023694
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0012DDC (DpiRequestDevicePowerState.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C003D338 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDevicePoweredOn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 2328);
    if ( v1 )
      return PoFxReportDevicePoweredOn(v1);
  }
  return result;
}
