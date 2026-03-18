/*
 * XREFs of DxgkReportDevicePoweredOn @ 0x1C00291EC
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0039D14 (DpiRequestDevicePowerState.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C003A16C (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDevicePoweredOn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 2504);
    if ( v1 )
      return PoFxReportDevicePoweredOn(v1);
  }
  return result;
}
