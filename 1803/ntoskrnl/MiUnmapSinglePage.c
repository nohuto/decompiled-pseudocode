/*
 * XREFs of MiUnmapSinglePage @ 0x140138538
 * Callers:
 *     MiFillCombinePage @ 0x140138480 (MiFillCombinePage.c)
 *     MiFreeForkMaps @ 0x140140BF4 (MiFreeForkMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 */

char __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_1403CC5E0, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1uLL);
}
