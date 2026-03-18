/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x1400D34C8
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PsSetProcessPriorityByClass @ 0x14050B380 (PsSetProcessPriorityByClass.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiApplyForegroundBoostThread @ 0x1400AAB38 (KiApplyForegroundBoostThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D3C50 (KiSetBasePriorityAndClearDecrement.c)
 *     KeSetQuantumProcess @ 0x1400D4194 (KeSetQuantumProcess.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140122D70 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14027B720 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  unsigned int v6; // esi
  int v8; // r13d
  char v9; // r12
  int v10; // r15d
  struct _KPRCB *CurrentPrcb; // r14
  char v12; // si
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // r12d
  __int64 v16; // rdi
  int v17; // r15d
  int v18; // eax
  char v19; // cl
  int v20; // eax
  unsigned __int64 updated; // rcx
  unsigned __int64 v22; // rdx
  int v23; // eax
  unsigned __int8 v24; // r13
  char v25; // si
  char v26; // al
  _BYTE *v27; // rcx
  __int64 v28; // r8
  unsigned __int8 v29; // r15
  __int64 v30; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v32; // r8
  __int64 v33; // r8
  int v34; // r15d
  __int64 v35; // rdi
  int v36; // ecx
  int v37; // esi
  char v38; // al
  bool v39; // sf
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  _BYTE *v42; // rcx
  int v43; // [rsp+30h] [rbp-51h]
  int v44; // [rsp+30h] [rbp-51h]
  int v45; // [rsp+34h] [rbp-4Dh]
  unsigned int v46; // [rsp+38h] [rbp-49h]
  _QWORD *v47; // [rsp+40h] [rbp-41h]
  unsigned int v48; // [rsp+48h] [rbp-39h]
  int v49; // [rsp+4Ch] [rbp-35h]
  _QWORD *v50; // [rsp+50h] [rbp-31h] BYREF
  int v51; // [rsp+58h] [rbp-29h] BYREF
  int v52; // [rsp+5Ch] [rbp-25h] BYREF
  int v53; // [rsp+60h] [rbp-21h] BYREF
  _KTHREAD *CurrentThread; // [rsp+68h] [rbp-19h]
  _QWORD *v55; // [rsp+70h] [rbp-11h]
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp-9h]
  __int64 CurrentIrql; // [rsp+80h] [rbp-1h]
  int v58; // [rsp+E0h] [rbp+5Fh] BYREF
  char v59; // [rsp+E8h] [rbp+67h]
  char v60; // [rsp+F0h] [rbp+6Fh]
  unsigned int v61; // [rsp+F8h] [rbp+77h]

  v61 = a4;
  v60 = a3;
  result = (unsigned int)*(char *)(a1 + 444);
  v6 = a2;
  if ( (_DWORD)result == (_DWORD)a2 && (a4 == a5 || (int)a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(a2) = a3;
      KeSetQuantumProcess(a1, a2);
    }
    return v6;
  }
  else if ( (_UNKNOWN *)a1 != &KiInitialProcess )
  {
    v43 = 0;
    v8 = 0;
    v45 = 0;
    v9 = 0;
    v59 = 0;
    v10 = 1;
    v50 = 0LL;
    if ( (_DWORD)a2 )
      v10 = a2;
    v49 = WORD2(PerfGlobalGroupMask) & 0x2000;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    v12 = v60;
    if ( v60 )
      *(_BYTE *)(a1 + 445) = v60;
    v46 = *(char *)(a1 + 444);
    v48 = v10 - v46;
    *(_BYTE *)(a1 + 444) = v10;
    KeFlushProcessWriteBuffers(1);
    v13 = (_QWORD *)(a1 + 48);
    v14 = *(_QWORD **)(a1 + 48);
    v47 = v14;
    v55 = (_QWORD *)(a1 + 48);
    if ( v10 < 16 )
    {
      if ( v14 != v13 )
      {
        v15 = v61;
        while ( 1 )
        {
          v16 = (__int64)(v14 - 95);
          if ( v12 )
            *(_BYTE *)(v16 + 651) = v12;
          v52 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v52);
            while ( *(_QWORD *)(v16 + 64) );
          }
          v17 = *(char *)(v16 + 563);
          if ( v17 <= (int)v46 || v17 < 16 )
            break;
          *(_QWORD *)(v16 + 64) = 0LL;
LABEL_46:
          v14 = (_QWORD *)*v47;
          v47 = v14;
          if ( v14 == v55 )
            goto LABEL_47;
        }
        v18 = v17 + v48;
        if ( (int)(v17 + v48) >= 16 )
        {
          v58 = 15;
        }
        else
        {
          if ( v18 <= 0 )
            v18 = 1;
          v58 = v18;
        }
        v19 = *(_BYTE *)(v16 + 645);
        if ( !v19 )
          goto LABEL_26;
        if ( (int)v46 < 16LL )
        {
          v25 = 0;
          goto LABEL_43;
        }
        if ( v19 > 0 )
        {
          v58 = 15;
        }
        else
        {
LABEL_26:
          v20 = v58;
          if ( v19 < 0 )
            v20 = 1;
          v58 = v20;
        }
        if ( (_KTHREAD *)v16 != CurrentThread || CurrentPrcb->NestingLevel )
        {
          updated = *(_QWORD *)(v16 + 72);
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v16, 0LL);
          _enable();
        }
        v22 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v16 + 651);
        if ( (*(_DWORD *)(v16 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v16 + 120), 5u);
        *(_QWORD *)(v16 + 32) = v22;
        if ( a5 && (v25 = 0, v58 == v17) )
        {
          v24 = v43;
        }
        else
        {
          v23 = KiSetBasePriorityAndClearDecrement(v16, &v58, v15);
          v24 = v23;
          v43 = v23;
          v25 = 1;
        }
        v26 = 0;
        if ( a5 )
          v26 = KiApplyForegroundBoostThread(v16, &v50);
        if ( v25 )
        {
          if ( !v26 )
          {
            v45 = *(char *)(v16 + 195);
            if ( KiSetPriorityThread(v16, &v50, v24) )
            {
              v43 = *(char *)(v16 + 195);
              v59 = 1;
            }
          }
          v27 = *(_BYTE **)(v16 + 232);
          if ( v27 )
          {
            if ( (*v27 & 0x7F) == 0x15 )
            {
              KiPriQueueThreadPriorityChanged(v27, v16);
              goto LABEL_44;
            }
          }
        }
LABEL_43:
        *(_QWORD *)(v16 + 64) = 0LL;
LABEL_44:
        if ( v49 )
        {
          if ( v59 )
          {
            v59 = 0;
            EtwTracePriority(v16, 1328, v45, v43, 0LL);
          }
          if ( v25 && v17 != v58 )
            EtwTracePriority(v16, 1329, v17, v58, (__int64)&v58);
        }
        v12 = v60;
        goto LABEL_46;
      }
LABEL_47:
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      KiReadyDeferredReadyList((__int64)CurrentPrcb, &v50, v28);
      v29 = CurrentIrql;
      if ( (unsigned __int8)CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
          KiRequestSoftwareInterrupt(CurrentPrcb, 2);
        return v46;
      }
      v30 = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
        v53 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v53);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v30, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
        {
          v32 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v32 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v30 + 643) = 32;
        *(_BYTE *)(v30 + 390) = v29;
        KiQueueReadyThread((__int64)CurrentPrcb, v30, v32);
        LOBYTE(v33) = v29;
        if ( !(unsigned __int8)KiSwapContext(v30, NextThread, v33) )
          goto LABEL_50;
      }
      else if ( (*(_DWORD *)(v30 + 116) & 0x40) == 0 )
      {
LABEL_50:
        __writecr8(v29);
        return v46;
      }
      __writecr8(1uLL);
      *(_DWORD *)(v30 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
      goto LABEL_50;
    }
    if ( v14 == v13 )
      goto LABEL_47;
    v34 = 0;
    while ( 1 )
    {
      v35 = (__int64)(v14 - 95);
      if ( v12 )
        *(_BYTE *)(v35 + 651) = v12;
      v51 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v51);
        while ( *(_QWORD *)(v35 + 64) );
      }
      v36 = *(char *)(v35 + 563);
      v37 = v36 + v48;
      if ( (int)(v36 + v48) >= 16 )
      {
        if ( v37 > 31 )
          v37 = 31;
        v58 = v37;
      }
      else
      {
        v37 = 16;
        v58 = 16;
      }
      v38 = *(_BYTE *)(v35 + 645);
      v39 = v38 < 0;
      if ( !v38 )
        goto LABEL_91;
      if ( (int)v46 >= 16LL )
        goto LABEL_106;
      v39 = v38 < 0;
      if ( v38 > 0 )
      {
        v58 = 31;
      }
      else
      {
LABEL_91:
        if ( v39 )
          v37 = 16;
        v58 = v37;
      }
      v8 = v36;
      if ( (_KTHREAD *)v35 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        v40 = *(_QWORD *)(v35 + 72);
      }
      else
      {
        _disable();
        v40 = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v35, 0LL);
        _enable();
      }
      v41 = v40 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v35 + 651);
      if ( (*(_DWORD *)(v35 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v35 + 120), 5u);
      *(_QWORD *)(v35 + 32) = v41;
      v44 = KiSetBasePriorityAndClearDecrement(v35, &v58, 0LL);
      v45 = *(char *)(v35 + 195);
      v9 = 1;
      if ( KiSetPriorityThread(v35, &v50, v44) )
      {
        v44 = *(char *)(v35 + 195);
        v59 = 1;
      }
      v42 = *(_BYTE **)(v35 + 232);
      if ( !v42 || (*v42 & 0x7F) != 0x15 )
      {
        v37 = v58;
        v34 = v44;
LABEL_106:
        *(_QWORD *)(v35 + 64) = 0LL;
        goto LABEL_107;
      }
      KiPriQueueThreadPriorityChanged(v42, v35);
      v37 = v58;
      v34 = v44;
LABEL_107:
      if ( v49 )
      {
        if ( v59 )
        {
          v59 = 0;
          EtwTracePriority(v35, 1328, v45, v34, 0LL);
        }
        if ( v9 )
        {
          v9 = 0;
          if ( v8 != v37 )
            EtwTracePriority(v35, 1329, v8, v37, (__int64)&v58);
        }
      }
      v12 = v60;
      v14 = (_QWORD *)*v47;
      v47 = v14;
      if ( v14 == v55 )
        goto LABEL_47;
    }
  }
  return result;
}
