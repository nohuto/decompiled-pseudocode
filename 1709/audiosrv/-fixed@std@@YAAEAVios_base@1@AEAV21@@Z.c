/*
 * XREFs of ?fixed@std@@YAAEAVios_base@1@AEAV21@@Z @ 0x1800311A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct std::ios_base *__fastcall std::fixed(struct std::ios_base *a1)
{
  std::ios_base::setf(a1, 0x2000, 12288);
  return a1;
}
