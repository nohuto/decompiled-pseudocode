/*
 * XREFs of MiUnmapSinglePage @ 0x1400254D0
 * Callers:
 *     MiFreeForkMaps @ 0x140001868 (MiFreeForkMaps.c)
 *     MiFillCombinePage @ 0x140025418 (MiFillCombinePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes(&qword_14036D0A0, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
}
