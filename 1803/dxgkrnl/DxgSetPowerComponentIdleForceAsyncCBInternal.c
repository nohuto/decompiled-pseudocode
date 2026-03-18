/*
 * XREFs of DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C002E9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0026E80 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DxgSetPowerComponentIdleForceAsyncCBInternal(__int64 a1, unsigned int a2)
{
  DXGADAPTER::SetPowerComponentIdleCBInternal(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3728LL), a2, 2u);
}
