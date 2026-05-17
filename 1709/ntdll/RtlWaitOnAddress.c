/*
 * XREFs of RtlWaitOnAddress @ 0x18006D970
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWaitOnAddress @ 0x18006DA0C (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlWaitOnAddress(int a1, int a2, int a3, int a4)
{
  return RtlpWaitOnAddress(a1, a2, a3, a4, RtlpWaitOnAddressSpinCount);
}
