/*
 * XREFs of sub_18003A4FC @ 0x18003A4FC
 * Callers:
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 *     sub_18008AC70 @ 0x18008AC70 (sub_18008AC70.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     <none>
 */

__int64 sub_18003A4FC()
{
  int v0; // ecx

  if ( !MEMORY[0x7FFE0290] )
    return 0LL;
  v0 = 0;
  while ( 1 )
  {
    __asm { rdrand  r8 }
    if ( _CF )
      break;
    if ( (unsigned int)++v0 >= 0xA )
      return 0LL;
  }
  return _R8;
}
