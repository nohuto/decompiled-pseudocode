/*
 * XREFs of HvlpGetLpIndexFromProcessorIndex @ 0x140227898
 * Callers:
 *     PpmScaleIdleStateValues @ 0x14016BE24 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x140171EBC (HvlEnlightenProcessor.c)
 *     HvlSharedIsr @ 0x140226D70 (HvlSharedIsr.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x14022C140 (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x14022C1C0 (HvlSetPlatformIdleState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_140399D24 )
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
