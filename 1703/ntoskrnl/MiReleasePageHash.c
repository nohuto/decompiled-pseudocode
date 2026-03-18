/*
 * XREFs of MiReleasePageHash @ 0x140223E48
 * Callers:
 *     MiDeletePagefile @ 0x1406B78F4 (MiDeletePagefile.c)
 * Callees:
 *     <none>
 */

char __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_14036D0A0,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (((4LL * a2) & 0xFFF) != 0) + (unsigned int)((4 * (unsigned __int64)a2) >> 12));
}
