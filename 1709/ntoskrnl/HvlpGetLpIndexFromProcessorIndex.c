/*
 * XREFs of HvlpGetLpIndexFromProcessorIndex @ 0x1401EA7F0
 * Callers:
 *     HvlEnlightenProcessor @ 0x140139EB4 (HvlEnlightenProcessor.c)
 *     PpmScaleIdleStateValues @ 0x14014DA20 (PpmScaleIdleStateValues.c)
 *     HvlSharedIsr @ 0x1401E9C70 (HvlSharedIsr.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401EE8A4 (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x1401EE924 (HvlSetPlatformIdleState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_1403566F4 )
    return a1;
  v4 = HvlpLogicalProcessorRegions;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0xFFFFFFFFLL;
  while ( v4[6] != a1 )
  {
    ++v1;
    v4 += 30;
    if ( v1 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v4[1];
}
