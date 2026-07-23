/*
 * XREFs of sub_1800F7730 @ 0x1800F7730
 * Callers:
 *     <none>
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     sub_1800F75C0 @ 0x1800F75C0 (sub_1800F75C0.c)
 */

void __fastcall sub_1800F7730(PTP_CALLBACK_INSTANCE a1, HANDLE *a2, PTP_WORK a3)
{
  ZwWaitForSingleObject(a2[2], 0, 0LL);
  sub_1800F75C0((__int64)a2);
  _InterlockedExchange(&dword_18015AA4C, 0);
}
