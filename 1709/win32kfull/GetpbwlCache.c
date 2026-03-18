/*
 * XREFs of GetpbwlCache @ 0x1C0126AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagBWL **__fastcall GetpbwlCache(_QWORD *a1)
{
  struct tagBWL **result; // rax

  result = &pbwlCache;
  *a1 = &pbwlCache;
  return result;
}
