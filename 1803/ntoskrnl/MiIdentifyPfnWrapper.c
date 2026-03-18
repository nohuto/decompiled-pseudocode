/*
 * XREFs of MiIdentifyPfnWrapper @ 0x140105640
 * Callers:
 *     MiQueryLeafPte @ 0x140140950 (MiQueryLeafPte.c)
 *     MiLogAllocateWsleEvent @ 0x140253678 (MiLogAllocateWsleEvent.c)
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 *     MmIdentifyPhysicalMemory @ 0x14074BD00 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x14075693C (MmRelocatePfnList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  MiIdentifyPfn(a1, a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
