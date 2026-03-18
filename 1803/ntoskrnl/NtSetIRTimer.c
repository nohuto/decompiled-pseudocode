/*
 * XREFs of NtSetIRTimer @ 0x1400D2C58
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400389A4 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtSetIRTimer(void *a1, __int64 a2)
{
  return ExpSetTimer2(a1, a2, 0LL);
}
