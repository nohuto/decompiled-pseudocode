/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x14006AA44
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x14006A9FC (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14006B24C (KiSetBasePriorityAndClearDecrement.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KeSetQuantumProcess @ 0x14006B758 (KeSetQuantumProcess.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400AF234 (KiPriQueueThreadPriorityChanged.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1402AF09C (EtwTracePriority.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  unsigned int v7; // esi
  int v8; // r15d
  int v9; // r13d
  char v10; // r12
  struct _KPRCB *CurrentPrcb; // r14
  char v12; // si
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // rdi
  struct _KPRCB *v20; // rsi
  int v21; // r15d
  int v22; // eax
  char v23; // cl
  int v24; // eax
  unsigned __int64 updated; // rcx
  unsigned __int64 v26; // rdx
  bool v27; // zf
  unsigned int v28; // r13d
  char v29; // si
  char v30; // al
  _BYTE *v31; // rcx
  __int64 v32; // rdx
  unsigned __int8 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rdx
  struct _KPRCB *v36; // rsi
  __int64 v37; // r8
  unsigned int v38; // r15d
  __int64 v39; // rdi
  struct _KPRCB *v40; // rsi
  int v41; // ecx
  int v42; // esi
  char v43; // al
  bool v44; // sf
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  _BYTE *v47; // rcx
  _KTHREAD *NextThread; // rsi
  unsigned int v49; // [rsp+30h] [rbp-41h]
  unsigned int v50; // [rsp+30h] [rbp-41h]
  int v51; // [rsp+34h] [rbp-3Dh]
  int v52; // [rsp+38h] [rbp-39h]
  _QWORD *v53; // [rsp+40h] [rbp-31h]
  int v54; // [rsp+48h] [rbp-29h]
  __int64 v55; // [rsp+4Ch] [rbp-25h] BYREF
  int v56; // [rsp+54h] [rbp-1Dh]
  int v57; // [rsp+58h] [rbp-19h] BYREF
  int v58; // [rsp+5Ch] [rbp-15h] BYREF
  int v59; // [rsp+60h] [rbp-11h] BYREF
  _KTHREAD *CurrentThread; // [rsp+68h] [rbp-9h]
  _QWORD *v61; // [rsp+70h] [rbp-1h]
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp+7h]
  __int64 CurrentIrql; // [rsp+80h] [rbp+Fh]
  int v64; // [rsp+D0h] [rbp+5Fh] BYREF
  char v65; // [rsp+D8h] [rbp+67h]
  char v66; // [rsp+E0h] [rbp+6Fh]
  unsigned int v67; // [rsp+E8h] [rbp+77h]

  v67 = a4;
  v66 = a3;
  result = (unsigned int)*(char *)(a1 + 444);
  v7 = a2;
  if ( (_DWORD)result == (_DWORD)a2 && (a4 == a5 || (int)a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(a2) = a3;
      KeSetQuantumProcess(a1, a2);
    }
    return v7;
  }
  else if ( (_UNKNOWN *)a1 != &KiInitialProcess )
  {
    v8 = 1;
    if ( (_DWORD)a2 )
      v8 = a2;
    v9 = 0;
    v49 = 0;
    v10 = 0;
    v51 = 0;
    v56 = 0;
    v65 = 0;
    v55 = WORD2(PerfGlobalGroupMask) & 0x2000;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    v12 = v66;
    if ( v66 )
      *(_BYTE *)(a1 + 445) = v66;
    v13 = (unsigned int)*(char *)(a1 + 444);
    v14 = v8 - v13;
    v52 = *(char *)(a1 + 444);
    LOBYTE(v13) = 1;
    v54 = v14;
    *(_BYTE *)(a1 + 444) = v8;
    KeFlushProcessWriteBuffers(v13);
    v16 = (_QWORD *)(a1 + 48);
    v17 = *(_QWORD **)(a1 + 48);
    v53 = v17;
    v61 = (_QWORD *)(a1 + 48);
    if ( v8 < 16 )
    {
      if ( v17 != v16 )
      {
        v18 = v67;
        while ( 1 )
        {
          v19 = (__int64)(v17 - 95);
          if ( v12 )
            *(_BYTE *)(v19 + 651) = v12;
          v20 = KeGetCurrentPrcb();
          v58 = 0;
          while ( 1 )
          {
            LOBYTE(v15) = 1;
            KiSetVpThreadSpinLockCount(v20, v15);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v20, 0LL);
            do
              KeYieldProcessorEx(&v58);
            while ( *(_QWORD *)(v19 + 64) );
          }
          v21 = *(char *)(v19 + 563);
          if ( v21 <= v52 || v21 < 16 )
            break;
          KiReleaseThreadLockSafe(v19);
LABEL_45:
          v12 = v66;
          v17 = (_QWORD *)*v53;
          v53 = v17;
          if ( v17 == v61 )
            goto LABEL_46;
        }
        v22 = v21 + v54;
        if ( v21 + v54 >= 16 )
        {
          v64 = 15;
        }
        else
        {
          if ( v22 <= 0 )
            v22 = 1;
          v64 = v22;
        }
        v23 = *(_BYTE *)(v19 + 645);
        if ( !v23 )
          goto LABEL_26;
        if ( v52 < 16LL )
        {
          KiReleaseThreadLockSafe(v19);
          v29 = 0;
LABEL_44:
          if ( (_DWORD)v55 )
          {
            if ( v65 )
            {
              v65 = 0;
              EtwTracePriority(v19, 1328, v51, v49, 0LL);
            }
            if ( v29 && v21 != v64 )
              EtwTracePriority(v19, 1329, v21, v64, (__int64)&v64);
          }
          goto LABEL_45;
        }
        if ( v23 > 0 )
        {
          v64 = 15;
        }
        else
        {
LABEL_26:
          v24 = v64;
          if ( v23 < 0 )
            v24 = 1;
          v64 = v24;
        }
        if ( (_KTHREAD *)v19 != CurrentThread || CurrentPrcb->NestingLevel )
        {
          updated = *(_QWORD *)(v19 + 72);
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v19, 0LL);
          _enable();
        }
        v26 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v19 + 651);
        if ( (*(_DWORD *)(v19 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v19 + 120), 5u);
        v27 = a5 == 0;
        *(_QWORD *)(v19 + 32) = v26;
        if ( v27 || (v29 = 0, v64 != v21) )
        {
          v28 = KiSetBasePriorityAndClearDecrement(v19, &v64, v18);
          v49 = v28;
          v29 = 1;
        }
        else
        {
          v28 = v49;
        }
        v30 = 0;
        if ( a5 )
          v30 = KiApplyForegroundBoostThread(v19, (char *)&v55 + 4);
        if ( !v29 )
          goto LABEL_43;
        if ( !v30 )
        {
          v51 = *(char *)(v19 + 195);
          if ( (unsigned __int8)KiSetPriorityThread(v19, (char *)&v55 + 4, v28) )
          {
            v49 = *(char *)(v19 + 195);
            v65 = 1;
          }
        }
        v31 = *(_BYTE **)(v19 + 232);
        if ( v31 && (*v31 & 0x7F) == 0x15 )
          KiPriQueueThreadPriorityChanged(v31, v19);
        else
LABEL_43:
          KiReleaseThreadLockSafe(v19);
        goto LABEL_44;
      }
LABEL_46:
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      KiReadyDeferredReadyList(CurrentPrcb, (char *)&v55 + 4);
      v33 = CurrentIrql;
      if ( (unsigned __int8)CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        {
          LOBYTE(v32) = 2;
          KiRequestSoftwareInterrupt(CurrentPrcb, v32);
        }
        return (unsigned int)v52;
      }
      v34 = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v36 = KeGetCurrentPrcb();
        v59 = 0;
        while ( 1 )
        {
          LOBYTE(v35) = 1;
          KiSetVpThreadSpinLockCount(v36, v35);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v36, 0LL);
          do
            KeYieldProcessorEx(&v59);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v34, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
          NextThread->ReadyTime = NextThread->ReadyTime
                                - NextThread->WaitBlock[2].SpareLong
                                + MEMORY[0xFFFFF78000000320];
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v34 + 643) = 32;
        *(_BYTE *)(v34 + 390) = v33;
        KiQueueReadyThread(CurrentPrcb, v34);
        LOBYTE(v37) = v33;
        if ( !(unsigned __int8)KiSwapContext(v34, NextThread, v37) )
          goto LABEL_49;
      }
      else if ( (*(_DWORD *)(v34 + 116) & 0x40) == 0 )
      {
LABEL_49:
        __writecr8(v33);
        return (unsigned int)v52;
      }
      __writecr8(1uLL);
      *(_DWORD *)(v34 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_49;
    }
    if ( v17 == v16 )
      goto LABEL_46;
    v38 = 0;
    while ( 1 )
    {
      v39 = (__int64)(v17 - 95);
      if ( v12 )
        *(_BYTE *)(v39 + 651) = v12;
      v40 = KeGetCurrentPrcb();
      v57 = 0;
      while ( 1 )
      {
        LOBYTE(v15) = 1;
        KiSetVpThreadSpinLockCount(v40, v15);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v39 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v40, 0LL);
        do
          KeYieldProcessorEx(&v57);
        while ( *(_QWORD *)(v39 + 64) );
      }
      v41 = *(char *)(v39 + 563);
      v42 = v41 + v54;
      if ( v41 + v54 >= 16 )
      {
        if ( v42 > 31 )
          v42 = 31;
        v64 = v42;
      }
      else
      {
        v42 = 16;
        v64 = 16;
      }
      v43 = *(_BYTE *)(v39 + 645);
      v44 = v43 < 0;
      if ( !v43 )
        goto LABEL_92;
      if ( v52 < 16LL )
        break;
      KiReleaseThreadLockSafe(v39);
LABEL_108:
      if ( (_DWORD)v55 )
      {
        if ( v65 )
        {
          v65 = 0;
          EtwTracePriority(v39, 1328, v51, v38, 0LL);
        }
        if ( v10 )
        {
          v10 = 0;
          if ( v9 != v42 )
            EtwTracePriority(v39, 1329, v9, v42, (__int64)&v64);
        }
      }
      v12 = v66;
      v17 = (_QWORD *)*v53;
      v53 = v17;
      if ( v17 == v61 )
        goto LABEL_46;
    }
    v44 = v43 < 0;
    if ( v43 <= 0 )
    {
LABEL_92:
      if ( v44 )
        v42 = 16;
      v64 = v42;
    }
    else
    {
      v64 = 31;
    }
    v9 = v41;
    if ( (_KTHREAD *)v39 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      v45 = *(_QWORD *)(v39 + 72);
    }
    else
    {
      _disable();
      v45 = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v39, 0LL);
      _enable();
    }
    v46 = v45 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v39 + 651);
    if ( (*(_DWORD *)(v39 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v39 + 120), 5u);
    *(_QWORD *)(v39 + 32) = v46;
    v50 = KiSetBasePriorityAndClearDecrement(v39, &v64, 0LL);
    v51 = *(char *)(v39 + 195);
    v10 = 1;
    if ( (unsigned __int8)KiSetPriorityThread(v39, (char *)&v55 + 4, v50) )
    {
      v50 = *(char *)(v39 + 195);
      v65 = 1;
    }
    v47 = *(_BYTE **)(v39 + 232);
    if ( v47 && (*v47 & 0x7F) == 0x15 )
      KiPriQueueThreadPriorityChanged(v47, v39);
    else
      KiReleaseThreadLockSafe(v39);
    v38 = v50;
    v42 = v64;
    goto LABEL_108;
  }
  return result;
}
