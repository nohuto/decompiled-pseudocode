/*
 * XREFs of MiIsSessionMetadata @ 0x1401305FC
 * Callers:
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx

  return (unsigned int)MiGetSystemRegionType(a1) == 1 && v1 >= qword_14036C178 && v1 < qword_14036C178 + 4481024;
}
