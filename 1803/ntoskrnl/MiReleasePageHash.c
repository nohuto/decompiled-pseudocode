/*
 * XREFs of MiReleasePageHash @ 0x14026BFA8
 * Callers:
 *     MiDeletePagefile @ 0x14074E938 (MiDeletePagefile.c)
 * Callees:
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 */

char __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_1403CC5E0,
           ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (unsigned int)((4 * (unsigned __int64)a2) >> 12) + (((4LL * a2) & 0xFFF) != 0));
}
