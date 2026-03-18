/*
 * XREFs of HvlParkedVirtualProcessors @ 0x14022BEE0
 * Callers:
 *     PpmParkReportMask @ 0x140036A80 (PpmParkReportMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14015A0BC (HvlpUseExtendedProcessorSetHypercalls.c)
 */

char HvlParkedVirtualProcessors()
{
  char result; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rcx
  char *i; // rdx
  unsigned __int64 v4; // rcx

  result = HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 )
  {
    result = HvlpUseExtendedProcessorSetHypercalls();
    v1 = 0LL;
    if ( !result )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
      {
        v2 = qword_14039BE28;
        if ( !HvlpVirtualProcessorsIdentityMapped )
        {
          for ( i = byte_140450301; ; i += 4 )
          {
            if ( (v2 & 1) != 0 )
              v1 |= 1LL << *i;
            v4 = v2 >> 1;
            if ( !v4 )
              break;
            if ( (v4 & 1) != 0 )
              v1 |= 1LL << i[2];
            v2 = v4 >> 1;
            if ( !v2 )
              break;
          }
        }
      }
      return HvcallCodeVa();
    }
  }
  return result;
}
