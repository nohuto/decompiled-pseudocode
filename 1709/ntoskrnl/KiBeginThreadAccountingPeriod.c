/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x1400AC3B0
 * Callers:
 *     KiChainedDispatch @ 0x1401823B0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140182B50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140182DA0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140182FF0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140183240 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183480 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140187990 (KiIpiInterrupt.c)
 *     SwapContext @ 0x140188250 (SwapContext.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x1400AB178 (KiInsertDeferredPreemptionApc.c)
 *     KiBeginCounterAccumulation @ 0x14020852C (KiBeginCounterAccumulation.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r9
  UCHAR Size; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v14; // rcx

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
    v8 = *(_QWORD *)(a1 + 24176);
    v9 = *(_QWORD *)(a1 + 24184);
    if ( v8 && v9 )
    {
      if ( *(_BYTE *)(v9 + 100) )
      {
        v10 = *(_DWORD *)(v9 + 116);
      }
      else
      {
        v10 = *(_DWORD *)(v9 + 72);
        if ( v10 >= *(_DWORD *)(v8 + 368) )
          v10 = *(_DWORD *)(v8 + 368);
      }
    }
    else
    {
      v10 = 100;
    }
    if ( v10 >= 0x4B )
      v11 = 3;
    else
      v11 = v10 / 0x19;
    a2 = (struct _KTHREAD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2952LL + 2LL * v11));
    *(_QWORD *)&a2->Header.Lock += a3;
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
        v12 = *(&CurrentThread->MiscFlags + 1);
        if ( (v12 & 0x800) != 0 )
        {
LABEL_30:
          KiInsertDeferredPreemptionApc(a1, (__int64)CurrentThread, 1);
          return;
        }
        if ( (v12 & 0x600) == 0 )
        {
          SchedulingGroup = CurrentThread->SchedulingGroup;
          if ( SchedulingGroup )
          {
            v14 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216);
            if ( v14 )
            {
              while ( (v14[112] & 2) == 0 )
              {
                v14 = (char *)*((_QWORD *)v14 + 51);
                if ( !v14 )
                  return;
              }
              goto LABEL_30;
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
