/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x140211C44
 * Callers:
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x1402118EC (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

__int64 MiShouldTrimUnusedSegments()
{
  unsigned int v0; // r9d

  v0 = 0;
  if ( !qword_140388118 )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)qword_140388118 >> 12 > 3 * (qword_14038B9E8 / 0x64uLL);
  return v0;
}
