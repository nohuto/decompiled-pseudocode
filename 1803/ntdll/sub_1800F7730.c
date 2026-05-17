/*
 * XREFs of sub_1800F7730 @ 0x1800F7730
 * Callers:
 *     <none>
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     sub_1800F75C0 @ 0x1800F75C0 (sub_1800F75C0.c)
 */

__int64 __fastcall sub_1800F7730(__int64 a1, __int64 *a2)
{
  ZwWaitForSingleObject();
  sub_1800F75C0(a2);
  return (unsigned int)_InterlockedExchange(&dword_18015AA4C, 0);
}
