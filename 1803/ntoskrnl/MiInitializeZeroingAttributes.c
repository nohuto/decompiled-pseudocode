/*
 * XREFs of MiInitializeZeroingAttributes @ 0x1408C5B60
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeZeroingAttributes()
{
  __int64 result; // rax
  int *v1; // rdx
  unsigned int i; // ecx
  _DWORD *v3; // rcx

  LODWORD(result) = 0;
  v1 = dword_1403CB710;
  for ( i = 0; i < 3; ++i )
  {
    *v1 = i;
    v1[1] = i;
    v1[2] = i;
    v1[3] = i;
    v1 += 4;
  }
  v3 = &unk_1403CB740;
  do
  {
    *v3 = result;
    result = (unsigned int)(result + 1);
    ++v3;
  }
  while ( (unsigned int)result <= 3 );
  dword_1403CB74C = 1;
  return result;
}
