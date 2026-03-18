/*
 * XREFs of EditionStopSonar @ 0x1C0142670
 * Callers:
 *     <none>
 * Callees:
 *     StopFade @ 0x1C013E090 (StopFade.c)
 */

void *EditionStopSonar()
{
  void *result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx

  result = gpdwCPUserPreferencesMask;
  if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
  {
    result = (void *)gfade[0];
    if ( (LODWORD(gfade[6]) & 0x80u) != 0 )
    {
      EnterCrit(0LL, 1LL);
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
      {
        v2 = LODWORD(gfade[6]);
        if ( (v2 & 0x80u) != 0LL )
        {
          StopFade();
          giSonarRadius = -1;
          if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
          {
            if ( gbLastVkForSonar )
              gbLastVkForSonar = 0;
          }
        }
      }
      return (void *)UserSessionSwitchLeaveCrit(v2, v1);
    }
  }
  return result;
}
