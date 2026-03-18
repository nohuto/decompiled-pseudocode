/*
 * XREFs of MNSetupAnimationDC @ 0x1C00DCA98
 * Callers:
 *     FinalUserInit @ 0x1C00DC870 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C01F6ABC (MNAllocMenuState.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *DPIMetrics; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GreSetDCOwnerEx(result, 0LL, 0LL, 1LL);
    DPIMetrics = (__int64 *)GetDPIMetrics(v4, v3);
    GreSelectFont(*(_QWORD *)(a1 + 136), *DPIMetrics);
    return 1LL;
  }
  return result;
}
