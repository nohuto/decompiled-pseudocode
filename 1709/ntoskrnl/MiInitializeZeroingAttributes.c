/*
 * XREFs of MiInitializeZeroingAttributes @ 0x1408539A0
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
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
  v1 = dword_140388570;
  for ( i = 0; i < 3; ++i )
  {
    *v1 = i;
    v1[1] = i;
    v1[2] = i;
    v1[3] = i;
    v1 += 4;
  }
  v3 = &unk_1403885A0;
  do
  {
    *v3 = result;
    result = (unsigned int)(result + 1);
    ++v3;
  }
  while ( (unsigned int)result <= 3 );
  dword_1403885AC = 1;
  return result;
}
