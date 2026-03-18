/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x140064A98
 * Callers:
 *     PsSetProcessPriorityByClass @ 0x1404A0ED0 (PsSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14002CE38 (KiPriQueueThreadPriorityChanged.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140064EC4 (KiSetBasePriorityAndClearDecrement.c)
 *     KiApplyForegroundBoostThread @ 0x14006515C (KiApplyForegroundBoostThread.c)
 *     KeSetQuantumProcess @ 0x1400653B4 (KeSetQuantumProcess.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140253A4C (EtwTracePriority.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, __int64 a2, UCHAR a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  UCHAR v6; // r15
  int v7; // edi
  int v9; // r12d
  int v10; // eax
  struct _KPRCB *CurrentPrcb; // r14
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r13
  _KTHREAD *v16; // rdi
  bool v17; // si
  int BasePriority; // r15d
  int v19; // eax
  char Saturation; // cl
  int v21; // eax
  __int64 CycleTime; // rcx
  __int64 v23; // rdx
  char v24; // si
  char v25; // al
  volatile signed __int32 *p_Lock; // rcx
  unsigned __int8 v27; // r15
  __int64 v28; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v30; // r8
  _KTHREAD *v31; // rdi
  bool v32; // r15
  int v33; // ecx
  int v34; // esi
  char v35; // al
  bool v36; // sf
  char v37; // r15
  __int64 updated; // rcx
  __int64 v39; // rdx
  volatile signed __int32 *v40; // rcx
  int v41; // [rsp+30h] [rbp-41h] BYREF
  int v42; // [rsp+34h] [rbp-3Dh]
  int Priority; // [rsp+38h] [rbp-39h]
  int v44; // [rsp+3Ch] [rbp-35h]
  int v45; // [rsp+40h] [rbp-31h]
  int v46; // [rsp+44h] [rbp-2Dh]
  __int64 v47; // [rsp+48h] [rbp-29h] BYREF
  int v48; // [rsp+50h] [rbp-21h] BYREF
  int v49; // [rsp+54h] [rbp-1Dh] BYREF
  int v50; // [rsp+58h] [rbp-19h] BYREF
  _KTHREAD *CurrentThread; // [rsp+60h] [rbp-11h]
  _QWORD *v52; // [rsp+68h] [rbp-9h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-1h]
  __int64 CurrentIrql; // [rsp+78h] [rbp+7h]
  char v55; // [rsp+D0h] [rbp+5Fh]
  char v56; // [rsp+D8h] [rbp+67h]

  result = (unsigned int)*(char *)(a1 + 444);
  v6 = a3;
  v7 = a2;
  if ( (_DWORD)result == (_DWORD)a2 && (a4 == a5 || (int)a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(a2) = a3;
      KeSetQuantumProcess(a1, a2);
    }
    return (unsigned int)v7;
  }
  else if ( (_UNKNOWN *)a1 != &KiInitialProcess )
  {
    v42 = 0;
    v9 = 0;
    Priority = 0;
    v55 = 0;
    v56 = 0;
    if ( !(_DWORD)a2 )
      v7 = 1;
    v47 = 0LL;
    v10 = DWORD1(PerfGlobalGroupMask) >> 13;
    LOBYTE(v10) = (WORD2(PerfGlobalGroupMask) & 0x2000) != 0;
    v46 = v10;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( v6 )
      *(_BYTE *)(a1 + 445) = v6;
    v12 = *(char *)(a1 + 444);
    v13 = (unsigned int)(v7 - v12);
    v44 = v12;
    v45 = v7 - v12;
    LOBYTE(v13) = 1;
    *(_BYTE *)(a1 + 444) = v7;
    KeFlushProcessWriteBuffers(v13);
    v14 = (_QWORD *)(a1 + 48);
    v15 = *(_QWORD **)(a1 + 48);
    v52 = (_QWORD *)(a1 + 48);
    if ( v7 < 16 )
    {
      if ( v15 != v14 )
      {
        while ( 1 )
        {
          v16 = (_KTHREAD *)(v15 - 95);
          if ( v6 )
            v16->SchedulerApc.SpareByte1 = v6;
          v49 = 0;
          v17 = v16 == CurrentThread;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v16->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v49);
            while ( v16->ThreadLock );
          }
          BasePriority = v16->BasePriority;
          if ( BasePriority <= v44 || BasePriority < 16 )
            break;
          v16->ThreadLock = 0LL;
LABEL_44:
          v15 = (_QWORD *)*v15;
          v6 = a3;
          if ( v15 == v52 )
            goto LABEL_45;
        }
        v19 = BasePriority + v45;
        if ( BasePriority + v45 >= 16 )
        {
          v41 = 15;
        }
        else
        {
          if ( v19 <= 0 )
            v19 = 1;
          v41 = v19;
        }
        Saturation = v16->Saturation;
        if ( !Saturation )
          goto LABEL_25;
        if ( v44 < 16LL )
        {
          v24 = 0;
          goto LABEL_42;
        }
        if ( Saturation > 0 )
        {
          v41 = 15;
        }
        else
        {
LABEL_25:
          v21 = v41;
          if ( Saturation < 0 )
            v21 = 1;
          v41 = v21;
        }
        if ( !v17 || CurrentPrcb->NestingLevel )
        {
          CycleTime = v16->CycleTime;
        }
        else
        {
          _disable();
          CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)(v15 - 95), 0LL);
          _enable();
        }
        v23 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v16->SchedulerApc.SpareByte1;
        if ( (*((_DWORD *)&v16->0 + 1) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&v16->116 + 1, 4u);
        v16->QuantumTarget = v23;
        if ( a5 && v41 == BasePriority )
        {
          v24 = 0;
        }
        else
        {
          v42 = KiSetBasePriorityAndClearDecrement(v15 - 95, &v41, a4);
          v24 = 1;
        }
        v25 = 0;
        if ( a5 )
          v25 = KiApplyForegroundBoostThread(v15 - 95, &v47);
        if ( v24 )
        {
          if ( !v25 )
          {
            Priority = v16->Priority;
            if ( KiSetPriorityThread((__int64)(v15 - 95), &v47, v42) )
            {
              v42 = v16->Priority;
              v56 = 1;
            }
          }
          p_Lock = &v16->Queue->Lock;
          if ( p_Lock )
          {
            if ( (*(_BYTE *)p_Lock & 0x7F) == 0x15 )
            {
              KiPriQueueThreadPriorityChanged(p_Lock, (__int64)(v15 - 95));
LABEL_43:
              if ( (_BYTE)v46 )
              {
                if ( v56 )
                {
                  v56 = 0;
                  EtwTracePriority((_DWORD)v15 - 760, 1328, Priority, v42, 0LL);
                }
                if ( v24 && BasePriority != v41 )
                  EtwTracePriority((_DWORD)v15 - 760, 1329, BasePriority, v41, (__int64)&v41);
              }
              goto LABEL_44;
            }
          }
        }
LABEL_42:
        v16->ThreadLock = 0LL;
        goto LABEL_43;
      }
LABEL_45:
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      KiReadyDeferredReadyList(CurrentPrcb, &v47);
      v27 = CurrentIrql;
      if ( (unsigned __int8)CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
          KiRequestSoftwareInterrupt(CurrentPrcb, 2);
        return (unsigned int)v44;
      }
      v28 = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v50 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v50);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v28, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
          NextThread->ReadyTime = NextThread->ReadyTime
                                - NextThread->WaitBlock[2].SpareLong
                                + MEMORY[0xFFFFF78000000320];
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v28 + 643) = 32;
        *(_BYTE *)(v28 + 390) = v27;
        KiQueueReadyThread(CurrentPrcb, v28);
        LOBYTE(v30) = v27;
        if ( !(unsigned __int8)KiSwapContext(v28, NextThread, v30) )
          goto LABEL_48;
      }
      else if ( (*(_DWORD *)(v28 + 116) & 0x40) == 0 )
      {
LABEL_48:
        __writecr8(v27);
        return (unsigned int)v44;
      }
      __writecr8(1uLL);
      *(_DWORD *)(v28 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_48;
    }
    if ( v15 == v14 )
      goto LABEL_45;
    while ( 1 )
    {
      v31 = (_KTHREAD *)(v15 - 95);
      if ( v6 )
        v31->SchedulerApc.SpareByte1 = v6;
      v48 = 0;
      v32 = v31 == CurrentThread;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v31->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v48);
        while ( v31->ThreadLock );
      }
      v33 = v31->BasePriority;
      v34 = v33 + v45;
      if ( v33 + v45 >= 16 )
      {
        if ( v34 > 31 )
          v34 = 31;
        v41 = v34;
      }
      else
      {
        v34 = 16;
        v41 = 16;
      }
      v35 = v31->Saturation;
      v36 = v35 < 0;
      if ( !v35 )
        goto LABEL_89;
      if ( v44 >= 16LL )
      {
        v37 = v55;
LABEL_104:
        v31->ThreadLock = 0LL;
        goto LABEL_105;
      }
      v36 = v35 < 0;
      if ( v35 > 0 )
      {
        v41 = 31;
      }
      else
      {
LABEL_89:
        if ( v36 )
          v34 = 16;
        v41 = v34;
      }
      v9 = v33;
      if ( !v32 || CurrentPrcb->NestingLevel )
      {
        updated = v31->CycleTime;
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)(v15 - 95), 0LL);
        _enable();
      }
      v39 = updated + KiCyclesPerClockQuantum * (unsigned int)v31->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&v31->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v31->116 + 1, 4u);
      v31->QuantumTarget = v39;
      v42 = KiSetBasePriorityAndClearDecrement(v15 - 95, &v41, 0LL);
      v37 = 1;
      Priority = v31->Priority;
      v55 = 1;
      if ( KiSetPriorityThread((__int64)(v15 - 95), &v47, v42) )
      {
        v42 = v31->Priority;
        v56 = 1;
      }
      v40 = &v31->Queue->Lock;
      if ( !v40 || (*(_BYTE *)v40 & 0x7F) != 0x15 )
      {
        v34 = v41;
        goto LABEL_104;
      }
      KiPriQueueThreadPriorityChanged(v40, (__int64)(v15 - 95));
      v34 = v41;
LABEL_105:
      if ( (_BYTE)v46 )
      {
        if ( v56 )
        {
          v56 = 0;
          EtwTracePriority((_DWORD)v15 - 760, 1328, Priority, v42, 0LL);
        }
        if ( v37 )
        {
          v55 = 0;
          if ( v9 != v34 )
            EtwTracePriority((_DWORD)v15 - 760, 1329, v9, v34, (__int64)&v41);
        }
      }
      v15 = (_QWORD *)*v15;
      v6 = a3;
      if ( v15 == v52 )
        goto LABEL_45;
    }
  }
  return result;
}
