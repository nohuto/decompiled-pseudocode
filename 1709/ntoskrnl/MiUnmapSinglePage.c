/*
 * XREFs of MiUnmapSinglePage @ 0x1400CD154
 * Callers:
 *     MiFillCombinePage @ 0x1400CD09C (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x1400D0710 (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return MiReleasePtes((__int64)&qword_140389360, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, a4);
}
