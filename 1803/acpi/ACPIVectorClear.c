/*
 * XREFs of ACPIVectorClear @ 0x1C003F810
 * Callers:
 *     ACPIVectorClear2 @ 0x1C003F840 (ACPIVectorClear2.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C0027AF4 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0034ADC (ACPIWriteGpeStatusRegister.c)
 */

__int64 __fastcall ACPIVectorClear(__int64 a1, unsigned int *a2)
{
  int v2; // ebx
  unsigned int v3; // eax

  v2 = *a2;
  v3 = ACPIGpeIndexToGpeRegister(*a2);
  ACPIWriteGpeStatusRegister(v3, 1 << (v2 & 7));
  return 0LL;
}
