/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1401EC1A0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x1401EB6EC (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x1406B41D8 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(unsigned int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
