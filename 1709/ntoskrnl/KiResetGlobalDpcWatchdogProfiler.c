/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424
 * Callers:
 *     MiQueryAddressSpan @ 0x14003EDF0 (MiQueryAddressSpan.c)
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     KeAccumulateTicks @ 0x1400987C0 (KeAccumulateTicks.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     KiExpireTimer2 @ 0x1400E2E30 (KiExpireTimer2.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x140129830 (KiDpcWatchdog.c)
 *     KeRelaxTimingConstraints @ 0x1402024BC (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void *__fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  void *v1; // r9
  void *result; // rax
  __int64 v3; // r8

  v1 = *(void **)(a1 + 25000);
  if ( v1 && *(void **)(a1 + 25008) != v1 )
  {
    result = (void *)*(unsigned int *)(a1 + 22772);
    if ( *(_DWORD *)(a1 + 22764) < (int)result )
    {
      v3 = (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v1;
      return memset(v1, 0, 8 * v3);
    }
  }
  return result;
}
