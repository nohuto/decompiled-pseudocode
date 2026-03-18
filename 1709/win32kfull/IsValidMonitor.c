/*
 * XREFs of IsValidMonitor @ 0x1C00CA8C4
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CA334 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidMonitor(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(gpDispInfo + 96LL); result; result = *(_QWORD *)(result + 56) )
  {
    if ( result == a1 )
      return 1LL;
  }
  return result;
}
