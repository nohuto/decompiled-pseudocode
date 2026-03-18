/*
 * XREFs of MiReleasePageHash @ 0x1402326F8
 * Callers:
 *     MiDeletePagefile @ 0x1406E4538 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  return MiReleasePtes(
           (__int64)&qword_140389360,
           ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (unsigned int)((4 * (unsigned __int64)a2) >> 12) + (((4LL * a2) & 0xFFF) != 0),
           a4);
}
