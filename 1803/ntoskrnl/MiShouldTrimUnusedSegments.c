/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x140250098
 * Callers:
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiRemoveUnusedSegments @ 0x14024FD3C (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

__int64 MiShouldTrimUnusedSegments()
{
  unsigned int v0; // r9d

  v0 = 0;
  if ( !qword_1403CB298 )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)qword_1403CB298 >> 12 > 3 * (qword_1403CFCA8 / 0x64uLL);
  return v0;
}
