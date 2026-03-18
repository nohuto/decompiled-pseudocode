/*
 * XREFs of GreSystemTimeToLocalTime @ 0x1C00FC340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreSystemTimeToLocalTime(union _LARGE_INTEGER *a1, union _LARGE_INTEGER *a2)
{
  ExSystemTimeToLocalTime(a1, a2);
}
