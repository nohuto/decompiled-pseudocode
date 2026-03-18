/*
 * XREFs of NtCancelTimer2 @ 0x1400D0BD8
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400389A4 (ExpSetTimer2.c)
 */

NTSTATUS __fastcall NtCancelTimer2(void *a1)
{
  return ExpSetTimer2(a1, 0LL, 0LL);
}
