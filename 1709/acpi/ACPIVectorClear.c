/*
 * XREFs of ACPIVectorClear @ 0x1C00597B0
 * Callers:
 *     ACPIVectorClear2 @ 0x1C00597E0 (ACPIVectorClear2.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C001054C (ACPIGpeIndexToGpeRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C00105AC (ACPIWriteGpeStatusRegister.c)
 */

__int64 __fastcall ACPIVectorClear(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // eax

  v3 = *a2;
  v4 = ACPIGpeIndexToGpeRegister(*a2, (__int64)a2, a3);
  ACPIWriteGpeStatusRegister(v4, 1 << (v3 & 7));
  return 0LL;
}
