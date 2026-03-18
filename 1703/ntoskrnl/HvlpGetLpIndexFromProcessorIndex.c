/*
 * XREFs of HvlpGetLpIndexFromProcessorIndex @ 0x1401E599C
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1401470E8 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x140155924 (HvlEnlightenProcessor.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401E97AC (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x1401E982C (HvlSetPlatformIdleState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_14033E088 )
    return a1;
  v4 = HvlpLogicalProcessorRegions;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0xFFFFFFFFLL;
  while ( v4[6] != a1 )
  {
    ++v1;
    v4 += 28;
    if ( v1 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v4[1];
}
