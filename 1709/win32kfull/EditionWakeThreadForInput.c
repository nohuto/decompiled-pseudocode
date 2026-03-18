/*
 * XREFs of EditionWakeThreadForInput @ 0x1C009E250
 * Callers:
 *     <none>
 * Callees:
 *     WakeSomeone @ 0x1C00A0A2C (WakeSomeone.c)
 */

__int64 __fastcall EditionWakeThreadForInput(__int64 a1, unsigned int a2)
{
  return WakeSomeone(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 408LL), 0LL, a2, 0LL);
}
