/*
 * XREFs of ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C0025190
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 */

void __fastcall DxgkPowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_pqq((__int64)this, &Dxgk_PowerRuntimeComponentActiveCallback, a3, this, a2, 1);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 1, a4);
}
