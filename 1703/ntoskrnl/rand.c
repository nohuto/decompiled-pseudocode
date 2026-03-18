/*
 * XREFs of rand @ 0x14016AE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_14033E040 = 214013 * dword_14033E040 + 2531011;
  return (dword_14033E040 >> 16) & 0x7FFF;
}
