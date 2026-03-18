/*
 * XREFs of DxgSetPowerComponentActiveNoWaitCB @ 0x1C0034590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgSetPowerComponentActiveNoWaitCB(__int64 a1, unsigned int a2)
{
  DXGADAPTER::SetPowerComponentActiveCBInternal(*(DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3704LL), a2, 0, 0);
}
