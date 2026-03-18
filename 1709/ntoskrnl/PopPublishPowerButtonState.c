/*
 * XREFs of PopPublishPowerButtonState @ 0x140707E14
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140249C30 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopPublishPowerButtonState(_DWORD *a1)
{
  DbgPrintEx(0x92u, 3u, "Power button hold update (down: %d, time: %d ms, sequence: %d)\n", *a1 & 1, *a1 >> 1, a1[1]);
  return ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_BUTTON_STATE, (__int64)a1, 8LL);
}
