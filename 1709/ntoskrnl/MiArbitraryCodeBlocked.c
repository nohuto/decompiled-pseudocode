/*
 * XREFs of MiArbitraryCodeBlocked @ 0x1404D5370
 * Callers:
 *     MiAllowProtectionChange @ 0x1400A64D8 (MiAllowProtectionChange.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfSection @ 0x1404CFC50 (MiMapViewOfSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x1400A67AC (EtwTraceMemoryAcg.c)
 *     EtwTimLogProhibitDynamicCode @ 0x140587EEC (EtwTimLogProhibitDynamicCode.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v3; // edx

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 2088);
  if ( (v3 & 0x100) == 0 || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) != 0 )
  {
    if ( (v3 & 0x800) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      EtwTimLogProhibitDynamicCode(1LL, a1);
    EtwTraceMemoryAcg(0);
    return 0LL;
  }
  else
  {
    EtwTraceMemoryAcg(0x80000000);
    EtwTimLogProhibitDynamicCode(2LL, a1);
    return 3221227012LL;
  }
}
