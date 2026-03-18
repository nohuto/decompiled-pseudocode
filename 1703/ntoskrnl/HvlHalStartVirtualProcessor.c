/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x1401E6E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlHalStartVirtualProcessor(__int64 a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor(a1, a2);
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
