/*
 * XREFs of PoGetFrequencyBucket @ 0x140167AAC
 * Callers:
 *     KiBeginThreadAccountingPeriod @ 0x14003F570 (KiBeginThreadAccountingPeriod.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x140043E00 (KiEndThreadAccountingPeriod.c)
 *     KiChooseTargetProcessor @ 0x1400E11B0 (KiChooseTargetProcessor.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KiRetireDpcList @ 0x1400F18D0 (KiRetireDpcList.c)
 *     KiEndDebugAccumulation @ 0x140203640 (KiEndDebugAccumulation.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140167AD8 (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentFrequency; // r9d

  CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL, a3, a4);
  if ( CurrentFrequency < 0x4B )
    return CurrentFrequency / 0x19;
  else
    return 3;
}
