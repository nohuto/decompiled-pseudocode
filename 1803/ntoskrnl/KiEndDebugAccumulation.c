/*
 * XREFs of KiEndDebugAccumulation @ 0x1402474FC
 * Callers:
 *     KeThawExecution @ 0x14024738C (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1402475A0 (KiFreezeTargetExecution.c)
 * Callees:
 *     KiBeginCounterAccumulation @ 0x14024615C (KiBeginCounterAccumulation.c)
 *     PoGetFrequencyBucket @ 0x140271730 (PoGetFrequencyBucket.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // rdx

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    v2 = *(_QWORD *)(a1 + 8);
    v3 = __rdtsc();
    v4 = *(_QWORD *)(a1 + 23488);
    v5 = v3 - v4;
    *(_QWORD *)(a1 + 23608) += v5;
    if ( (*(_BYTE *)(v2 + 2) & 0x20) != 0 )
    {
      v6 = *(unsigned __int8 *)(a1 + 23858) + 2LL * (unsigned int)PoGetFrequencyBucket();
      *(_QWORD *)(a1 + 8 * v6 + 23616) += v5;
      v4 = *(_QWORD *)(a1 + 23488);
      v2 = *(_QWORD *)(a1 + 8);
    }
    *(_QWORD *)(a1 + 23488) = v5 + v4;
    if ( (*(_BYTE *)(v2 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v2, 0);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
