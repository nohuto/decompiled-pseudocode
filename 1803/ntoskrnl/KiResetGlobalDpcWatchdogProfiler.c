/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1400A9E68
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1400A9E40 (KiDpcWatchdog.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 *     KeAccumulateTicks @ 0x14010D530 (KeAccumulateTicks.c)
 *     KeRelaxTimingConstraints @ 0x14023F5C4 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
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
