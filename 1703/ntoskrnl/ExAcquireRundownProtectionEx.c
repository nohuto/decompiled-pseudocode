/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x140061C00
 * Callers:
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     PfSnReferenceProcessTrace @ 0x1400602F0 (PfSnReferenceProcessTrace.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     PfSnAddProcessTrace @ 0x14012CF58 (PfSnAddProcessTrace.c)
 *     ExCompareExchangeCallBack @ 0x140155B4C (ExCompareExchangeCallBack.c)
 *     PspRundownProcess @ 0x14041FCA8 (PspRundownProcess.c)
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
