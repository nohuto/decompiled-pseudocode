/*
 * XREFs of _controlfp @ 0x18009895C
 * Callers:
 *     atan @ 0x180092C10 (atan.c)
 *     atan2 @ 0x180092E70 (atan2.c)
 *     cos @ 0x180093930 (cos.c)
 *     sin @ 0x180093D50 (sin.c)
 *     tan @ 0x180096180 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
