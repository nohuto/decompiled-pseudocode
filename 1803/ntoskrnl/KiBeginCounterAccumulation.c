/*
 * XREFs of KiBeginCounterAccumulation @ 0x14024615C
 * Callers:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiChooseTargetProcessor @ 0x1400FC8B0 (KiChooseTargetProcessor.c)
 *     KiRetireDpcList @ 0x1401073A0 (KiRetireDpcList.c)
 *     KiEndDebugAccumulation @ 0x1402474FC (KiEndDebugAccumulation.c)
 *     KeEnableProfiling @ 0x140742338 (KeEnableProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiBeginCounterAccumulation(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned int *v5; // r10
  __int64 v6; // rsi
  _QWORD *v7; // r11
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 360);
  v3 = *(_QWORD *)(v2 + 32);
  if ( v3 )
  {
    v4 = 1LL;
    if ( KiHwCountersCount )
    {
      v5 = (unsigned int *)&KiHwCounters;
      v6 = (unsigned int)KiHwCountersCount;
      v7 = (_QWORD *)(v2 + 48);
      do
      {
        if ( (v4 & v3) != 0 )
          *v7 = __readpmc(*v5);
        v4 *= 2LL;
        v7 += 3;
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
  result = *(unsigned int *)(v2 + 16);
  if ( (result & 1) != 0 )
  {
    if ( a2 )
    {
      ++*(_DWORD *)(v2 + 20);
      result = *(unsigned __int8 *)(a1 + 643);
      *(_QWORD *)v2 |= 1LL << result;
    }
  }
  return result;
}
