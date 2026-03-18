/*
 * XREFs of MiInitializeZeroingAttributes @ 0x1408128BC
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeZeroingAttributes()
{
  __int64 result; // rax
  unsigned int *v1; // rdx
  unsigned int i; // ecx
  _DWORD *v3; // rcx

  LODWORD(result) = 0;
  v1 = (unsigned int *)&unk_14036C220;
  for ( i = 0; i < 3; ++i )
  {
    *v1 = i;
    v1[1] = i;
    v1[2] = i;
    v1[3] = i;
    v1 += 4;
  }
  v3 = &unk_14036C250;
  do
  {
    *v3 = result;
    result = (unsigned int)(result + 1);
    ++v3;
  }
  while ( (unsigned int)result <= 3 );
  dword_14036C25C = 1;
  return result;
}
