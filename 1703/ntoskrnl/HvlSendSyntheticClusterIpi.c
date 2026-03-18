/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x1401E7BD0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAffinityToVirtualAffinity @ 0x1401EA3B0 (HvlpAffinityToVirtualAffinity.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1401EA4F0 (HvlpUseExtendedProcessorSetHypercalls.c)
 */

__int64 __fastcall HvlSendSyntheticClusterIpi(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d

  if ( (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a1, (unsigned int)a2) )
  {
    if ( (((unsigned int)HvlpFlags >> 8) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowSendSyntheticClusterIpiEx(v2, v3);
    else
      return HvlpFastSendSyntheticClusterIpiEx(v2, v3);
  }
  else
  {
    HvlpAffinityToVirtualAffinity(*(_QWORD *)(v2 + 8));
    return (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  }
}
