/*
 * XREFs of HvlParkedVirtualProcessors @ 0x1401E94E8
 * Callers:
 *     PpmParkReportMask @ 0x140046D50 (PpmParkReportMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAffinityToVirtualAffinity @ 0x1401EA3B0 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401EA4F0 (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 __fastcall HvlParkedVirtualProcessors(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 )
  {
    result = HvlpUseExtendedProcessorSetHypercalls(a1, a2, a3, a4);
    if ( !(_BYTE)result )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
        HvlpAffinityToVirtualAffinity(qword_1403401D8);
      return HvcallCodeVa();
    }
  }
  return result;
}
