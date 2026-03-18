/*
 * XREFs of KiEndDebugAccumulation @ 0x140209938
 * Callers:
 *     KeThawExecution @ 0x1402097E0 (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1402099CC (KiFreezeTargetExecution.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x1400035F4 (PoGetFrequencyBucket.c)
 *     KiBeginCounterAccumulation @ 0x14020852C (KiBeginCounterAccumulation.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1)
{
  unsigned __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    v2 = __rdtsc() - *(_QWORD *)(a1 + 23488);
    *(_QWORD *)(a1 + 23608) += v2;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2LL) & 0x20) != 0 )
    {
      v3 = *(unsigned __int8 *)(a1 + 23858) + 2LL * (unsigned int)PoGetFrequencyBucket(a1);
      *(_QWORD *)(a1 + 8 * v3 + 23616) += v2;
    }
    v4 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 23488) += v2;
    if ( (*(_BYTE *)(v4 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v4, 0);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
