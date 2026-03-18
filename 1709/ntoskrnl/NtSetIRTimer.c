/*
 * XREFs of NtSetIRTimer @ 0x14013224C
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400E2540 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtSetIRTimer(void *a1, void **a2)
{
  return ExpSetTimer2(a1, a2, 0LL);
}
