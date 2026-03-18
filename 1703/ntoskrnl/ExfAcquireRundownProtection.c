/*
 * XREFs of ExfAcquireRundownProtection @ 0x14000C220
 * Callers:
 *     ExAcquireRundownProtectionCacheAware @ 0x14000C1D0 (ExAcquireRundownProtectionCacheAware.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExfAcquireRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v2; // rtt

  _m_prefetchw(RunRef);
  Count = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v2 = Count;
    Count = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, Count + 2, Count);
    if ( v2 == Count )
      break;
    if ( (Count & 1) != 0 )
      return 0;
  }
  return 1;
}
