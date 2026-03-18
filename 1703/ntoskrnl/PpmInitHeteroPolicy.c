/*
 * XREFs of PpmInitHeteroPolicy @ 0x14081FD60
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
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
  result = (char *)&unk_140349A90;
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
    *(result - 1400) = v3;
    ++v1;
    *result = v3;
    *(result - 2040) = v2;
    *(result - 640) = v2;
    ++result;
  }
  while ( v1 < 0x40 );
  byte_140349296 = 3;
  byte_14034980E = 3;
  word_140349798 = 12850;
  word_140349D10 = 12850;
  return result;
}
