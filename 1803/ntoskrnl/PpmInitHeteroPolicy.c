/*
 * XREFs of PpmInitHeteroPolicy @ 0x1408C1950
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

char *PpmInitHeteroPolicy()
{
  char *result; // rax
  unsigned int v1; // ecx
  char v2; // dl
  char v3; // r8

  PpmHeteroMinRelativePerformance = 0x10000;
  result = (char *)&unk_1403A7599;
  v1 = 0;
  do
  {
    if ( v1 )
    {
      v2 = 50;
      v3 = 80;
    }
    else
    {
      v2 = 30;
      v3 = 90;
    }
    *(result - 2688) = v3;
    ++v1;
    *result = v3;
    *(result - 3968) = v2;
    *(result - 1280) = v2;
    ++result;
  }
  while ( v1 < 0x40 );
  byte_1403A6617 = 3;
  byte_1403A7097 = 3;
  word_1403A7019 = 12850;
  word_1403A7A99 = 12850;
  return result;
}
