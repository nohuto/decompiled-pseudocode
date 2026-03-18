/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x14003F570
 * Callers:
 *     KiChainedDispatch @ 0x140182930 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401830D0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140183320 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140183570 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401837C0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183A00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140184490 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140185950 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x140185EF0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140186420 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401869B0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140186F40 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401874D0 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140187EE0 (KiIpiInterrupt.c)
 *     SwapContext @ 0x1401887A0 (SwapContext.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x140167AAC (PoGetFrequencyBucket.c)
 *     KiBeginCounterAccumulation @ 0x140201F5C (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r11
  UCHAR Size; // r10
  int v8; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v10; // rax

  v3 = a3;
  CurrentThread = a2;
  if ( a2 )
  {
    v6 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x10) != 0 )
    *(_QWORD *)(a1 + 23496) = *(_QWORD *)(a1 + 23488);
  if ( (Size & 0x20) != 0 )
  {
    a2 = (struct _KTHREAD *)(a1
                           + 8
                           * (*(unsigned __int8 *)(a1 + 23986) + 2960LL + 2LL * (unsigned int)PoGetFrequencyBucket()));
    *(_QWORD *)&a2->Header.Lock += v3;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v6 )
  {
    if ( (Size & 0x36) != 0 )
    {
      if ( CurrentThread->WaitBlock[0].SparePtr )
      {
        LOBYTE(a2) = 1;
        KiBeginCounterAccumulation(CurrentThread, a2);
      }
      _enable();
      if ( (CurrentThread->Header.Size & 4) != 0 )
      {
        v8 = *(&CurrentThread->MiscFlags + 1);
        if ( (v8 & 0x400) != 0 )
        {
LABEL_19:
          LOBYTE(a3) = 1;
          KiInsertDeferredPreemptionApc(a1, CurrentThread, a3);
          return;
        }
        if ( (v8 & 0x200) == 0 )
        {
          SchedulingGroup = CurrentThread->SchedulingGroup;
          if ( SchedulingGroup )
          {
            v10 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216);
            if ( v10 )
            {
              while ( (v10[112] & 2) == 0 )
              {
                v10 = (char *)*((_QWORD *)v10 + 51);
                if ( !v10 )
                  return;
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
    else
    {
      _enable();
    }
  }
  else if ( (Size & 2) != 0 )
  {
    KiBeginCounterAccumulation(CurrentThread, 0LL);
  }
}
