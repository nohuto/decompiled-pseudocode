/*
 * XREFs of MiArbitraryCodeBlocked @ 0x14007D6D0
 * Callers:
 *     MiAllowProtectionChange @ 0x14007D578 (MiAllowProtectionChange.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x14007D6F8 (EtwTraceMemoryAcg.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x400) == 0 || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0 )
  {
    EtwTraceMemoryAcg(0LL);
    return 0LL;
  }
  else
  {
    EtwTraceMemoryAcg(0x80000000LL);
    return 3221227012LL;
  }
}
