/*
 * XREFs of MiIdentifyPfnWrapper @ 0x1400011F0
 * Callers:
 *     MiQueryLeafPte @ 0x140008180 (MiQueryLeafPte.c)
 *     MiLogAllocateWsleEvent @ 0x1402157B8 (MiLogAllocateWsleEvent.c)
 *     PfpPfnPrioRequest @ 0x14043D960 (PfpPfnPrioRequest.c)
 *     MmIdentifyPhysicalMemory @ 0x1406E0DF8 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x1406ED4E8 (MmRelocatePfnList.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
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
