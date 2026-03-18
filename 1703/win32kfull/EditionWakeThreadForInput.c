/*
 * XREFs of EditionWakeThreadForInput @ 0x1C004A430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionWakeThreadForInput(__int64 a1, unsigned int a2)
{
  return WakeSomeone(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 384LL), 0LL, a2, 0LL);
}
