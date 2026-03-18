/*
 * XREFs of rand @ 0x14015F7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1403566B0 = 214013 * dword_1403566B0 + 2531011;
  return (dword_1403566B0 >> 16) & 0x7FFF;
}
