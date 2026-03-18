/*
 * XREFs of NtSetIRTimer @ 0x14003C914
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtSetIRTimer(void *a1)
{
  return ExpSetTimer2(a1);
}
