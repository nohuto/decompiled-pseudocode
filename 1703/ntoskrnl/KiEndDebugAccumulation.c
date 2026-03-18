/*
 * XREFs of KiEndDebugAccumulation @ 0x140203640
 * Callers:
 *     KeThawExecution @ 0x1402034E8 (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1402036D4 (KiFreezeTargetExecution.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x140167AAC (PoGetFrequencyBucket.c)
 *     KiBeginCounterAccumulation @ 0x140201F5C (KiBeginCounterAccumulation.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    v5 = __rdtsc();
    v6 = v5 - *(_QWORD *)(a1 + 23488);
    *(_QWORD *)(a1 + 23672) += v6;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2LL) & 0x20) != 0 )
    {
      v7 = *(unsigned __int8 *)(a1 + 23986)
         + 2LL * (unsigned int)PoGetFrequencyBucket(a1, (unsigned __int64)HIDWORD(v5) << 32, a3, a4);
      *(_QWORD *)(a1 + 8 * v7 + 23680) += v6;
    }
    v8 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 23488) += v6;
    if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v8, 0);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
