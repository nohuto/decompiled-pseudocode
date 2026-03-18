/*
 * XREFs of MiIdentifyPfnWrapper @ 0x1400DBBE0
 * Callers:
 *     MiQueryLeafPte @ 0x140078520 (MiQueryLeafPte.c)
 *     MiLogAllocateWsleEvent @ 0x14020E098 (MiLogAllocateWsleEvent.c)
 *     PfpPfnPrioRequest @ 0x1405206B0 (PfpPfnPrioRequest.c)
 *     MmIdentifyPhysicalMemory @ 0x1406B4DF0 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x1406BF984 (MmRelocatePfnList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
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
