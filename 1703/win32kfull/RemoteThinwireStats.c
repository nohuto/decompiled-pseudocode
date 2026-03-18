/*
 * XREFs of RemoteThinwireStats @ 0x1C01EE6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoteThinwireStats(_OWORD *Address)
{
  if ( PsGetCurrentProcess(Address) != gpepCSRSS )
    return 3221225506LL;
  if ( !gpThinWireCache )
    return 3221225486LL;
  ProbeForWrite(Address, 0x54uLL, 1u);
  *Address = *gpThinWireCache;
  Address[1] = *(_OWORD *)(gpThinWireCache + 16LL);
  Address[2] = *(_OWORD *)(gpThinWireCache + 32LL);
  Address[3] = *(_OWORD *)(gpThinWireCache + 48LL);
  Address[4] = *(_OWORD *)(gpThinWireCache + 64LL);
  *((_DWORD *)Address + 20) = *(_DWORD *)(gpThinWireCache + 80LL);
  return 0LL;
}
