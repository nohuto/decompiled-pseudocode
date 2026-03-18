/*
 * XREFs of PpmInitHeteroPolicy @ 0x1408505C0
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
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
  result = (char *)&unk_140363DF8;
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
  byte_140362E76 = 3;
  byte_1403638F6 = 3;
  word_140363878 = 12850;
  word_1403642F8 = 12850;
  return result;
}
