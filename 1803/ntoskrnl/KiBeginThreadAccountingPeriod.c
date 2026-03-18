/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x14009E860
 * Callers:
 *     KiChainedDispatch @ 0x1401AC000 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401AC7A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401AC9F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401ACC40 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401ACE90 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401AD0D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401ADB60 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401AF010 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401AF5C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401AFAF0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401B0080 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401B0610 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401B0BA0 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x1401B15B0 (KiIpiInterrupt.c)
 *     SwapContext @ 0x1401B1E80 (SwapContext.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x1400439A8 (KiInsertDeferredPreemptionApc.c)
 *     KiBeginCounterAccumulation @ 0x14024615C (KiBeginCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v5; // si
  UCHAR Size; // r11
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v13; // rcx

  CurrentThread = a2;
  if ( a2 )
  {
    v5 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x10) != 0 )
    *(_QWORD *)(a1 + 23496) = *(_QWORD *)(a1 + 23488);
  if ( (Size & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 24176);
    v8 = *(_QWORD *)(a1 + 24184);
    if ( v7 && v8 )
    {
      if ( *(_BYTE *)(v8 + 100) )
      {
        v9 = *(_DWORD *)(v8 + 116);
      }
      else
      {
        v9 = *(_DWORD *)(v8 + 72);
        if ( v9 >= *(_DWORD *)(v7 + 368) )
          v9 = *(_DWORD *)(v7 + 368);
      }
    }
    else
    {
      v9 = 100;
    }
    if ( v9 >= 0x4B )
      v10 = 3;
    else
      v10 = v9 / 0x19;
    a2 = (struct _KTHREAD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2952LL + 2LL * v10));
    *(_QWORD *)&a2->Header.Lock += a3;
  }
  if ( (Size & 0x40) != 0 )
    KiSetVpThreadSystemWork(a1, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  if ( v5 )
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
        v11 = *(&CurrentThread->MiscFlags + 1);
        if ( (v11 & 0x800) != 0 )
        {
LABEL_32:
          KiInsertDeferredPreemptionApc(a1, (__int64)CurrentThread, 1);
          return;
        }
        if ( (v11 & 0x600) == 0 )
        {
          SchedulingGroup = CurrentThread->SchedulingGroup;
          if ( SchedulingGroup )
          {
            v13 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216);
            if ( v13 )
            {
              while ( (v13[112] & 2) == 0 )
              {
                v13 = (char *)*((_QWORD *)v13 + 51);
                if ( !v13 )
                  return;
              }
              goto LABEL_32;
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
