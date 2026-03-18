/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x14000B2A0
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 * Callees:
 *     KiAttachProcess @ 0x140007F44 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiAttachSession @ 0x140070CAC (MiAttachSession.c)
 *     MiDetachProcessFromSession @ 0x140070DA4 (MiDetachProcessFromSession.c)
 *     MiQueuePageAccessLog @ 0x14007A164 (MiQueuePageAccessLog.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x14007AB38 (MmFreeAccessPfnBuffer.c)
 *     MiEmptyWorkingSetInitiate @ 0x1400839D0 (MiEmptyWorkingSetInitiate.c)
 *     MiPreUnlockWorkingSetShared @ 0x140083B98 (MiPreUnlockWorkingSetShared.c)
 *     MiTrimWorkingSet @ 0x140083D80 (MiTrimWorkingSet.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiLoadDirectoryTableBase @ 0x1400ADCA0 (KiLoadDirectoryTableBase.c)
 *     PfLogForegroundProcess @ 0x1400C3840 (PfLogForegroundProcess.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14016A1C8 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiComputeTrimAmount @ 0x1402595A0 (MiComputeTrimAmount.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, unsigned __int8 *a2, __int64 CurrentThread)
{
  bool v3; // zf
  unsigned int v4; // r15d
  char v6; // al
  __int64 v7; // rbp
  char v8; // al
  _KPROCESS *v9; // r13
  unsigned __int8 v10; // al
  struct _KTHREAD *v11; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  $5F1408DF39311D54C4C08723EECFE20B *v14; // rsi
  struct _KTHREAD *Flink; // rcx
  struct _KTHREAD *v16; // r8
  _LIST_ENTRY *v17; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  struct _KPRCB *v20; // rcx
  _KPROCESS *Process; // rsi
  unsigned __int64 GroupIndex; // rbp
  __int64 v23; // rdi
  volatile signed __int32 *v24; // rsi
  unsigned __int8 v25; // al
  LONG *v26; // rdi
  __int64 v27; // r13
  struct _KPRCB *v28; // r10
  _DWORD *v29; // rcx
  signed __int32 v30; // ett
  unsigned int v31; // ebp
  int v32; // r14d
  unsigned int v33; // edi
  unsigned int v34; // eax
  unsigned __int8 *v35; // rdx
  __int64 v36; // r13
  char v37; // cl
  LONG *v38; // rbp
  char v39; // cl
  LONG *v40; // r14
  LONG *v41; // rax
  LONG *v42; // rcx
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  struct _KPRCB *v46; // rcx
  int v47; // eax
  struct _KPRCB *v48; // rcx
  char v49; // al
  _QWORD *v50; // r12
  void *v52; // rcx
  struct _LIST_ENTRY *v53; // rcx
  __int64 v54; // rdx
  int v55; // eax
  struct _LIST_ENTRY *Blink; // rax
  int v57; // eax
  int v58; // eax
  unsigned __int8 *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // eax
  int v63; // eax
  signed __int32 v64[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int8 *v65; // [rsp+30h] [rbp-98h]
  __int64 CurrentIrql; // [rsp+38h] [rbp-90h]
  __int64 v67; // [rsp+40h] [rbp-88h]
  int v68; // [rsp+48h] [rbp-80h] BYREF
  char v69[32]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v70; // [rsp+70h] [rbp-58h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v3 = *(_BYTE *)(a1 + 186) == 2;
  v4 = CurrentThread;
  v65 = a2;
  if ( v3 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    PfLogForegroundProcess();
  v6 = *(_BYTE *)(a1 + 184);
  v7 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 6768LL);
  v67 = v7;
  v8 = v6 & 7;
  if ( v8 )
  {
    if ( v8 == 1 )
      MiAttachSession(a1 - 3008);
  }
  else
  {
    v9 = (_KPROCESS *)(a1 - 1280);
    if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1280) )
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      v10 = *(_BYTE *)(CurrentThread + 586);
      if ( v10 )
        KeBugCheckEx(5u, a1 - 1280, *(_QWORD *)(CurrentThread + 184), v10, 0LL);
      v11 = KeGetCurrentThread();
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&v9->0 & 0x40000000) != 0 )
        KeBugCheckEx(
          5u,
          a1 - 1280,
          (ULONG_PTR)v11->ApcState.Process,
          v11->ApcStateIndex,
          KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
      if ( v11->ApcState.Process == v9 )
      {
        v70 = 1LL;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        v68 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v55 = SchedulerAssist[5];
            SchedulerAssist[5] = v55 + 1;
            if ( v55 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v11->ThreadLock, 0LL) )
        {
          KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
          do
            KeYieldProcessorEx(&v68);
          while ( v11->ThreadLock );
          LOBYTE(v54) = 1;
          KiSetVpThreadSpinLockCount(CurrentPrcb, v54);
        }
        if ( v11->ApcStateIndex )
        {
          KiAttachProcess((__int64)v11, a1 - 1280, CurrentIrql, 1LL, (__int64)v69);
        }
        else
        {
          v14 = &v11->600;
          v11->SavedApcState.Process = v11->ApcState.Process;
          v11->SavedApcState.InProgressFlags = v11->ApcState.InProgressFlags;
          v11->SavedApcState.KernelApcPending = v11->ApcState.KernelApcPending;
          v11->SavedApcState.UserApcPending = v11->ApcState.UserApcPending;
          Flink = (struct _KTHREAD *)v11->ApcState.ApcListHead[0].Flink;
          if ( Flink == (struct _KTHREAD *)&v11->152 )
          {
            v11->SavedApcState.ApcListHead[0].Blink = v11->SavedApcState.ApcListHead;
            v14->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v14;
            v11->SavedApcState.KernelApcPending = 0;
          }
          else
          {
            Blink = v11->ApcState.ApcListHead[0].Blink;
            v14->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
            v11->SavedApcState.ApcListHead[0].Blink = Blink;
            Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v14;
            Blink->Flink = (struct _LIST_ENTRY *)v14;
          }
          v16 = (struct _KTHREAD *)v11->ApcState.ApcListHead[1].Flink;
          v17 = &v11->SavedApcState.ApcListHead[1];
          if ( v16 == (struct _KTHREAD *)&v11->ApcStateFill[16] )
          {
            v11->SavedApcState.ApcListHead[1].Blink = &v11->SavedApcState.ApcListHead[1];
            v17->Flink = v17;
            v11->SavedApcState.UserApcPending = 0;
          }
          else
          {
            v53 = v11->ApcState.ApcListHead[1].Blink;
            v17->Flink = (struct _LIST_ENTRY *)v16;
            v11->SavedApcState.ApcListHead[1].Blink = v53;
            v16->Header.WaitListHead.Flink = v17;
            v53->Flink = v17;
          }
          v11->ApcState.ApcListHead[0].Blink = v11->ApcState.ApcListHead;
          v11->ApcState.ApcListHead[0].Flink = v11->ApcState.ApcListHead;
          v11->ApcState.ApcListHead[1].Blink = &v11->ApcState.ApcListHead[1];
          v11->ApcState.ApcListHead[1].Flink = &v11->ApcState.ApcListHead[1];
          v11->MiscFlags |= 0x800u;
          *(_WORD *)&v11->ApcStateFill[40] = 0;
          v11->ApcState.UserApcPending = 0;
          v11->ApcStateIndex = 1;
          v11->ApcState.Process = v9;
          v11->ThreadLock = 0LL;
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          if ( v19 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v57 = v19[5] - 1;
              v19[5] = v57;
              if ( !v57 && !*((_BYTE *)v19 + 25) && !*((_BYTE *)v19 + 27) )
                KiPerformUnboostKick(v18);
            }
          }
          v20 = KeGetCurrentPrcb();
          Process = v11->SavedApcState.Process;
          GroupIndex = v20->GroupIndex;
          v23 = 8LL * v20->Group + 280;
          _interlockedbittestandset64((volatile signed __int32 *)((char *)&v9->Header.Lock + v23), GroupIndex);
          KiLoadDirectoryTableBase(a1 - 1280, v9->DirectoryTableBase);
          _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v23), GroupIndex);
          v11->MiscFlags &= ~0x800u;
          __writecr8((unsigned __int8)CurrentIrql);
          v7 = v67;
          v70 = 0LL;
        }
      }
    }
  }
  if ( (v4 & 4) != 0 )
    MiEmptyWorkingSetInitiate(a1, 0LL, 0LL, -1LL);
  v24 = &dword_1403CCD40;
  v25 = *(_BYTE *)(a1 + 184) & 7;
  if ( v25 >= 6u )
  {
    v27 = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  else
  {
    if ( v25 == 2 )
      v26 = &dword_1403CCD40;
    else
      v26 = (LONG *)(a1 + 192);
    v27 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v26, (unsigned __int8)v27);
    }
    else
    {
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v58 = v29[5];
          v29[5] = v58 + 1;
          if ( v58 == -1 && !*((_BYTE *)v29 + 25) && !*((_BYTE *)v29 + 27) )
            KiPerformUnboostKick(v28);
        }
      }
      _m_prefetchw(v26);
      v30 = *v26 & 0x7FFFFFFF;
      if ( v30 != _InterlockedCompareExchange(v26, v30 + 1, v30) )
      {
        KiSetVpThreadSpinLockCount(v28, 0LL);
        ExpWaitForSpinLockSharedAndAcquire(v26, (unsigned __int8)v27);
      }
    }
    if ( v26[1] )
      _InterlockedExchange(v26 + 1, 0);
  }
  CurrentIrql = v27;
  if ( (v4 & 0x20) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), (unsigned __int8)v27, 0, 2);
  if ( (v4 & 0x100) != 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), (unsigned __int8)v27, 0, 4);
  v31 = *(unsigned __int16 *)(v7 + 2354);
  v32 = 0;
  v33 = 0;
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 2) != 0 )
    {
      v32 = 1;
      v33 = MiAgeWorkingSet(a1, (unsigned __int8)v27, 1LL, v31);
      if ( v33 || *(_BYTE *)(v67 + 55) != 1 || v31 - 1 > 8 )
        goto LABEL_38;
      v34 = MiAgeWorkingSet(a1, (unsigned __int8)v27, 2LL, 10LL);
      goto LABEL_37;
    }
    if ( (v4 & 0x40) != 0 )
    {
      v34 = MiAgeWorkingSet(a1, (unsigned __int8)v27, 1LL, v31);
      v32 = 1;
      goto LABEL_37;
    }
    if ( (v4 & 0x80u) == 0 )
      goto LABEL_38;
    CurrentThread = 2LL;
LABEL_91:
    v34 = MiAgeWorkingSet(a1, (unsigned __int8)v27, CurrentThread, v31);
    v32 = 1;
LABEL_37:
    v33 = v34;
LABEL_38:
    v35 = v65;
    goto LABEL_39;
  }
  v59 = v65;
  v65[1] = MiTrimPassToAge[*v65 & 0x7F];
  v60 = MiComputeTrimAmount(v59, a1);
  if ( v60 )
  {
    v61 = MiTrimWorkingSet(a1, v60, (unsigned __int8)v27, v65[1], 17);
    v35 = v65;
    *((_QWORD *)v65 + 12) += v61;
  }
  else
  {
    v35 = v65;
  }
  CurrentThread = 0LL;
  if ( ((*v35 & 0x7F) == 0 && (*v35 & 0x80u) == 0 || (*v35 & 0x7F) == 4) && *(_WORD *)(v67 + 2354) )
    CurrentThread = 1LL;
  if ( v35[4] == 1 )
    goto LABEL_91;
LABEL_39:
  v36 = 0LL;
  if ( v33 != 1 )
  {
    if ( v32 == 1 )
    {
      v37 = 3;
      if ( *(_BYTE *)(a1 + 186) != 2 )
        v37 = 1;
      *((_QWORD *)v35 + 1) += *(_QWORD *)(a1 + 40) >> v37;
      *((_QWORD *)v35 + 2) += *(_QWORD *)(a1 + 48) >> v37;
      *((_QWORD *)v35 + 3) += *(_QWORD *)(a1 + 56) >> v37;
      *((_QWORD *)v35 + 4) += *(_QWORD *)(a1 + 64) >> v37;
      *((_QWORD *)v35 + 5) += *(_QWORD *)(a1 + 72) >> v37;
      *((_QWORD *)v35 + 6) += *(_QWORD *)(a1 + 80) >> v37;
      *((_QWORD *)v35 + 7) += *(_QWORD *)(a1 + 88) >> v37;
      *((_QWORD *)v35 + 8) += *(_QWORD *)(a1 + 96) >> v37;
    }
    if ( (v4 & 0x10) != 0 || (v4 & 8) != 0 )
      MiCaptureAndResetWorkingSetAccessBits(a1, (unsigned __int8)CurrentIrql, v4);
    v38 = (LONG *)(a1 + 192);
    v36 = MEMORY[0xFFFFF78000000320];
    v39 = *(_BYTE *)(a1 + 184) & 7;
    if ( v39 == 2 )
      v40 = &dword_1403CCD40;
    else
      v40 = (LONG *)(a1 + 192);
    if ( *((_QWORD *)v40 + 6) )
    {
      v41 = (LONG *)(a1 + 192);
      LOBYTE(v35) = -1;
      if ( v39 == 2 )
        v41 = &dword_1403CCD40;
      v42 = v41 + 10;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v42, v35);
      else
        ExpAcquireSpinLockExclusive(v42, v35);
      v43 = (_QWORD *)*((_QWORD *)v40 + 6);
      if ( v43 )
      {
        v44 = (_QWORD *)*v43;
        v45 = (_QWORD *)*((_QWORD *)v40 + 6);
        if ( *v43 )
        {
          do
          {
            v45 = v44;
            v44 = (_QWORD *)*v44;
          }
          while ( v44 );
        }
        if ( v36 - v45[2] > (unsigned __int64)PfKernelGlobals )
        {
          MiEmptyPageAccessLog(v43);
          *((_QWORD *)v40 + 6) = 0LL;
        }
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        v38 = &dword_1403CCD40;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v38 + 10, retaddr);
      else
        v38[10] = 0;
      v46 = KeGetCurrentPrcb();
      v35 = (unsigned __int8 *)v46->SchedulerAssist;
      if ( v35 )
      {
        if ( v46->NestingLevel <= 1u )
        {
          v62 = *((_DWORD *)v35 + 5) - 1;
          *((_DWORD *)v35 + 5) = v62;
          if ( !v62 )
          {
            CurrentThread = v35[27];
            if ( !v35[25] && !(_BYTE)CurrentThread )
              KiPerformUnboostKick(v46);
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 184) & 7u) <= 5 )
  {
    v47 = *(_DWORD *)(a1 + 184);
    if ( (v47 & 0x8000000) != 0 || (v47 & 0x4000000) != 0 || (v47 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(a1, (unsigned __int8)CurrentIrql, CurrentThread);
      LOBYTE(v47) = *(_BYTE *)(a1 + 184);
    }
    if ( (v47 & 7) != 2 )
      v24 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v24, retaddr);
    }
    else
    {
      _InterlockedAnd(v24, 0xBFFFFFFF);
      _InterlockedDecrement(v24);
    }
    v48 = KeGetCurrentPrcb();
    v35 = (unsigned __int8 *)v48->SchedulerAssist;
    if ( v35 )
    {
      if ( v48->NestingLevel <= 1u )
      {
        v63 = *((_DWORD *)v35 + 5) - 1;
        *((_DWORD *)v35 + 5) = v63;
        if ( !v63 && !v35[25] && !v35[27] )
          KiPerformUnboostKick(v48);
      }
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  v49 = *(_BYTE *)(a1 + 184) & 7;
  if ( v49 )
  {
    if ( v49 == 1 )
    {
      MiDetachProcessFromSession(1LL, v35);
      _InterlockedOr(v64, 0);
      dword_1403CB5E0 = KiTbFlushTimeStamp;
    }
  }
  else if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1280) )
  {
    KiDetachProcess((__int64 *)&KeGetCurrentThread()->600, 1);
  }
  if ( !v33 )
  {
    if ( qword_1403CBF00 )
    {
      v50 = (_QWORD *)_InterlockedExchange64(&qword_1403CBF00, 0LL);
      if ( v50 )
      {
        if ( v36 - v50[2] > (unsigned __int64)PfKernelGlobals || (v4 & 0x18) != 0 )
        {
          v52 = v50;
        }
        else
        {
          if ( !qword_1403CBF00 && !_InterlockedCompareExchange64(&qword_1403CBF00, (signed __int64)v50, 0LL) )
            return v33;
          v52 = v50;
          if ( (_QWORD *)v50[4] == v50 + 9 )
          {
            MmFreeAccessPfnBuffer(v50);
            return v33;
          }
        }
        MiQueuePageAccessLog(v52);
      }
    }
  }
  return v33;
}
