/*
 * XREFs of MNSetupAnimationDC @ 0x1C000F958
 * Callers:
 *     FinalUserInit @ 0x1C000EC20 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C01EAAEC (MNAllocMenuState.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1)
{
  __int64 result; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GreSetDCOwnerEx(result, 0LL, 0LL, 1LL);
    GetDPIMetrics();
    GreSelectFontInternal(*(HDC *)(a1 + 136));
    return 1LL;
  }
  return result;
}
