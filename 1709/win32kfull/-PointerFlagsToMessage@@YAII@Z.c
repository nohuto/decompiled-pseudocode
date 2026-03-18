/*
 * XREFs of ?PointerFlagsToMessage@@YAII@Z @ 0x1C01CBE30
 * Callers:
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01CC4D4 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerFlagsToMessage(int a1)
{
  if ( (a1 & 0x10000) != 0 )
    return 582LL;
  if ( (a1 & 0x40000) != 0 )
    return 583LL;
  return (a1 & 0x20000) != 0 ? 0x245 : 0;
}
