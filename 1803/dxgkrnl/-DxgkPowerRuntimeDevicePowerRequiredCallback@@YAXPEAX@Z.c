/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C002BB60
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0026190 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pqq((__int64)this, &Dxgk_PowerRuntimeDevicePowerRequiredCallback, a3, this, 0, 1);
  DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(this, 1);
}
