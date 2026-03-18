/*
 * XREFs of MiIsSessionMetadata @ 0x1401439C4
 * Callers:
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx

  return (unsigned int)MiGetSystemRegionType(a1) == 1 && v1 >= qword_1403CB640 && v1 < qword_1403CB640 + 4485120;
}
