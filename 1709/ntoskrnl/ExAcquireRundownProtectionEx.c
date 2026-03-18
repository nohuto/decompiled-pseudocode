/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x1400FA410
 * Callers:
 *     PfSnAddProcessTrace @ 0x140010660 (PfSnAddProcessTrace.c)
 *     PfSnReferenceProcessTrace @ 0x140012760 (PfSnReferenceProcessTrace.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14014990C (ExCompareExchangeCallBack.c)
 *     PspRundownProcess @ 0x140719308 (PspRundownProcess.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  v3 = 2 * Count;
  while ( 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v3 + v2, v2);
    if ( v4 == v2 )
      break;
    if ( (v2 & 1) != 0 )
      return 0;
  }
  return 1;
}
