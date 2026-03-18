/*
 * XREFs of HvlParkedVirtualProcessors @ 0x1401EE644
 * Callers:
 *     PpmParkReportMask @ 0x1400901C0 (PpmParkReportMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x140141478 (HvlpUseExtendedProcessorSetHypercalls.c)
 */

char HvlParkedVirtualProcessors()
{
  char result; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rcx
  _BYTE *i; // rdx
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
        v2 = qword_140358838;
        if ( !HvlpVirtualProcessorsIdentityMapped )
        {
          for ( i = &unk_140405141; ; i += 4 )
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
