/*
 * XREFs of MiReservePageHash @ 0x14017E168
 * Callers:
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_1403CC5E0,
             (unsigned int)((4 * (unsigned __int64)a1) >> 12) + (((4LL * a1) & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
