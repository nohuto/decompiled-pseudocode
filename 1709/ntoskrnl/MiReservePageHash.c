/*
 * XREFs of MiReservePageHash @ 0x1401501B4
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405D4B4C (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1, __int64 a2, __int64 a3)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140389360,
             (unsigned int)((4 * (unsigned __int64)a1) >> 12) + (((4LL * a1) & 0xFFF) != 0),
             a3);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
