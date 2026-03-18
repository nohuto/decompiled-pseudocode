/*
 * XREFs of rand @ 0x140189970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140399CE0 = 214013 * dword_140399CE0 + 2531011;
  return (dword_140399CE0 >> 16) & 0x7FFF;
}
