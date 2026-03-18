/*
 * XREFs of IsValidMonitor @ 0x1C00FC0E4
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00FBBB8 (-zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     DetermineInputTargetPrecedenceTransform @ 0x1C0106660 (DetermineInputTargetPrecedenceTransform.c)
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
