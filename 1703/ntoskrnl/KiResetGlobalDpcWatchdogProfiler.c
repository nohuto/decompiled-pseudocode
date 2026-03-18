/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x14000D778
 * Callers:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x14000D750 (KiDpcWatchdog.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x1400D1790 (MiQueryAddressSpan.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiWalkPageTablesRecursively @ 0x1400D4D00 (MiWalkPageTablesRecursively.c)
 *     KeAccumulateTicks @ 0x1400F6700 (KeAccumulateTicks.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     KeRelaxTimingConstraints @ 0x1401FC72C (KeRelaxTimingConstraints.c)
 * Callees:
 *     <none>
 */

void *__fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  void *v1; // r9
  void *result; // rax
  __int64 v3; // r8

  v1 = *(void **)(a1 + 25256);
  if ( v1 && *(void **)(a1 + 25264) != v1 )
  {
    result = (void *)*(unsigned int *)(a1 + 22772);
    if ( *(_DWORD *)(a1 + 22764) < (int)result )
    {
      v3 = (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25264) = v1;
      return memset(v1, 0, 8 * v3);
    }
  }
  return result;
}
