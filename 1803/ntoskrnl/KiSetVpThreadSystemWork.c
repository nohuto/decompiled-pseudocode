/*
 * XREFs of KiSetVpThreadSystemWork @ 0x140248FE0
 * Callers:
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400EE044 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiChooseTargetProcessor @ 0x1400FC8B0 (KiChooseTargetProcessor.c)
 *     KiRetireDpcList @ 0x1401073A0 (KiRetireDpcList.c)
 * Callees:
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

char __fastcall KiSetVpThreadSystemWork(_QWORD *a1, char a2)
{
  __int64 v2; // r8
  char v3; // r10

  v2 = a1[3127];
  v3 = 0;
  if ( *(_BYTE *)(v2 + 25) != a2 )
  {
    *(_BYTE *)(v2 + 25) = a2;
    v3 = 1;
  }
  if ( !a2 && !*(_DWORD *)(v2 + 20) && !*(_BYTE *)(v2 + 27) )
    KiPerformUnboostKick(a1);
  return v3;
}
