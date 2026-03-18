/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C0025280
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_pqq((__int64)this, &Dxgk_PowerRuntimeDevicePowerRequiredCallback, a3, this, 0, 1);
  DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(this, 1);
}
