/*
 * XREFs of PopPublishPowerButtonState @ 0x1406CFF9C
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1402346D0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopPublishPowerButtonState(_DWORD *Buffer)
{
  DbgPrintEx(
    0x92u,
    3u,
    "Power button hold update (down: %d, time: %d ms, sequence: %d)\n",
    *Buffer & 1,
    *Buffer >> 1,
    Buffer[1]);
  return ZwUpdateWnfStateData(&WNF_PO_POWER_BUTTON_STATE, Buffer, 8u, 0LL, 0LL, 0, 0);
}
