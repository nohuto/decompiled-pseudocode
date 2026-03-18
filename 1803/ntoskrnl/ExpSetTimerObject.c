/*
 * XREFs of ExpSetTimerObject @ 0x14005B0B0
 * Callers:
 *     NtSetTimerEx @ 0x14005AE80 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x14014A734 (ExpSetTimer.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KiCancelTimer @ 0x14005B820 (KiCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     PoDestroyReasonContext @ 0x14007624C (PoDestroyReasonContext.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     PsInsertVirtualizedTimer @ 0x1400C3F10 (PsInsertVirtualizedTimer.c)
 *     KeRemoveQueueApc @ 0x1400C6B54 (KeRemoveQueueApc.c)
 *     KiRemoveEntryTimer @ 0x1400C825C (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KiInsertTimerTable @ 0x1400F87E0 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KeInitializeApc @ 0x140132910 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiTraceSetTimer @ 0x14024ADF0 (KiTraceSetTimer.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ExpCheckWakeTimerAccess @ 0x1406128DC (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        unsigned int a9,
        _BYTE *a10)
{
  char v12; // r12
  _KPROCESS *Process; // rbx
  char v14; // r13
  __int64 CurrentIrql; // r14
  __int64 v16; // rdx
  volatile signed __int32 *v17; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v20; // r13d
  unsigned __int8 v21; // bl
  unsigned int v22; // r12d
  unsigned int v23; // r8d
  ULONG_PTR v24; // rdx
  __int64 v25; // rbx
  _KPROCESS *v26; // r11
  __int64 v27; // rcx
  unsigned __int8 v28; // r13
  __int64 v29; // r14
  char v30; // cl
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _KPRCB *v33; // rbx
  __int64 v34; // rbx
  void *v35; // r14
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v39; // rdx
  __int64 ProcessTimerDelay; // rcx
  unsigned __int64 v42; // r13
  unsigned int v43; // r13d
  struct _KTHREAD *v44; // rbx
  KSPIN_LOCK *p_StackLimit; // r12
  char *v46; // rax
  void **p_StackBase; // rbx
  char **v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rbx
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  char v53; // al
  unsigned int v54; // ebx
  int v55; // eax
  KSPIN_LOCK *v56; // rbx
  __int64 v57; // rax
  __int64 v58; // r14
  KSPIN_LOCK *v59; // rcx
  unsigned __int8 v60; // al
  __int64 v61; // rbx
  __int64 v62; // r8
  _QWORD *v63; // rdx
  unsigned int v64; // edx
  unsigned int v65; // eax
  unsigned int v66; // eax
  __int64 v67; // rdx
  volatile signed __int32 *v68; // r15
  struct _KPRCB *v69; // r14
  __int64 v70; // rdx
  int v71; // eax
  _QWORD *v72; // rax
  __int64 v73; // rdx
  _QWORD *v74; // rcx
  __int64 v75; // rcx
  char v76; // [rsp+40h] [rbp-F8h]
  char v77; // [rsp+41h] [rbp-F7h]
  unsigned int v79; // [rsp+44h] [rbp-F4h]
  ULONG_PTR v80; // [rsp+48h] [rbp-F0h]
  __int64 v82; // [rsp+50h] [rbp-E8h]
  struct _KPRCB *v83; // [rsp+50h] [rbp-E8h]
  int v84; // [rsp+58h] [rbp-E0h]
  _KPROCESS *Object; // [rsp+60h] [rbp-D8h]
  __int64 v86; // [rsp+68h] [rbp-D0h]
  __int64 v88; // [rsp+70h] [rbp-C8h]
  int v89; // [rsp+7Ch] [rbp-BCh] BYREF
  int v90; // [rsp+80h] [rbp-B8h] BYREF
  int v91; // [rsp+84h] [rbp-B4h] BYREF
  unsigned int v92; // [rsp+88h] [rbp-B0h]
  volatile signed __int32 *v93; // [rsp+90h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-A0h]
  __int64 v95; // [rsp+A0h] [rbp-98h]
  int v96; // [rsp+A8h] [rbp-90h]
  int v97; // [rsp+C0h] [rbp-78h]
  struct _KPRCB *v98; // [rsp+C8h] [rbp-70h]
  __int64 v99; // [rsp+D0h] [rbp-68h]
  ULONG_PTR v100; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v101; // [rsp+E0h] [rbp-58h]
  _BYTE *v102; // [rsp+E8h] [rbp-50h]
  _QWORD v103[2]; // [rsp+F0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  v102 = a10;
  v79 = 0;
  v12 = 0;
  v77 = 0;
  CurrentThread = 0LL;
  v86 = a6;
  if ( a6 )
  {
    if ( a7 )
    {
      v54 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->gap0[10]);
      v79 = v54;
      if ( v54 )
      {
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        return v54;
      }
    }
    if ( (int)qword_1403AABA0 >= 2 || byte_1403AAB73 )
    {
      v12 = 1;
      v77 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v49 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
      v50 = v49;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v49, (ULONG_PTR)&ExpWakeTimerLock);
      if ( v50 )
        *(_BYTE *)(v50 + 26) |= 1u;
    }
    else
    {
      v79 = 1073741861;
      v86 = 0LL;
    }
  }
  v80 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = Process;
  v14 = 0;
  v76 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v95 = CurrentIrql;
  v16 = 2LL;
  __writecr8(2uLL);
  if ( a2 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[16]);
    v14 = 1;
    v76 = 1;
    v16 = 2LL;
  }
  v17 = (volatile signed __int32 *)(BugCheckParameter2 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(BugCheckParameter2 + 64);
LABEL_92:
    v16 = 2LL;
    goto LABEL_8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v55 = SchedulerAssist[5];
      SchedulerAssist[5] = v55 + 1;
      if ( v55 == -1 )
      {
        if ( !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
        v16 = 2LL;
      }
    }
  }
  if ( _interlockedbittestandset64(v17, 0LL) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    KxWaitForSpinLockAndAcquire(BugCheckParameter2 + 64);
    goto LABEL_92;
  }
LABEL_8:
  if ( !v12 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
    v56 = (KSPIN_LOCK *)&Process[2].IdealNode[16];
    if ( v14 )
      KxReleaseSpinLock(v56);
    __writecr8((unsigned __int8)CurrentIrql);
    v77 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v57 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
    v58 = v57;
    v59 = v56;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v57, (ULONG_PTR)&ExpWakeTimerLock);
      v59 = v56;
    }
    if ( v58 )
    {
      *(_BYTE *)(v58 + 26) |= 1u;
      v59 = v56;
    }
    v60 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v95) = v60;
    if ( v14 )
      KxAcquireSpinLock(v59);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
    v16 = 2LL;
  }
  v20 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v61 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v61 + 1568));
    v62 = *(_QWORD *)(BugCheckParameter2 + 224);
    v63 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v62 + 8) != BugCheckParameter2 + 224 || *v63 != BugCheckParameter2 + 224 )
      __fastfail(3u);
    *v63 = v62;
    *(_QWORD *)(v62 + 8) = v63;
    KxReleaseSpinLock((PKSPIN_LOCK)(v61 + 1568));
    *(_BYTE *)(BugCheckParameter2 + 304) &= ~1u;
    if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || KeRemoveQueueDpcEx((int *)(BugCheckParameter2 + 160), 0) )
    {
      v20 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc(BugCheckParameter2 + 72) )
      ++v20;
  }
  else
  {
    v21 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v16) = 1;
    KiCancelTimer(BugCheckParameter2, v16);
    __writecr8(v21);
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v22 = v20 + 1;
  v84 = *(_DWORD *)(BugCheckParameter2 + 4);
  v23 = a8;
  *(_QWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( a4 )
  {
    v44 = KeGetCurrentThread();
    KeInitializeApc(BugCheckParameter2 + 72, (_DWORD)v44, 2, (unsigned int)ExpTimerApcRoutine, 0LL, a4, a2, a5);
    p_StackLimit = (KSPIN_LOCK *)&v44[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v44[1].StackLimit);
    v46 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v44[1].StackBase;
    v48 = (char **)p_StackBase[1];
    if ( *v48 != (char *)p_StackBase )
      __fastfail(3u);
    *(_QWORD *)v46 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v48;
    *v48 = v46;
    p_StackBase[1] = v46;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v24 = BugCheckParameter2 + 160;
    v80 = BugCheckParameter2 + 160;
    v22 = v20;
    v23 = 0;
    a8 = 0;
  }
  else
  {
    v24 = 0LL;
  }
  v25 = *a3;
  v82 = *a3;
  v26 = Object;
  if ( v76 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v23 = a8;
      v26 = Object;
      v24 = v80;
    }
    _InterlockedIncrement((volatile signed __int32 *)&v26[2].IdealNode[8]);
    if ( (*(_DWORD *)&v26->0 & 0x10) != 0 )
    {
      ProcessTimerDelay = v26->ProcessTimerDelay;
      if ( (_DWORD)ProcessTimerDelay )
      {
        v25 = *a3;
        if ( *a3 >= 0 )
        {
          if ( (unsigned __int64)v25 <= MEMORY[0xFFFFF78000000014] )
            v25 = MEMORY[0xFFFFF78000000014];
          v25 += ProcessTimerDelay;
          if ( v25 < *a3 )
            v25 = *a3;
        }
        else if ( v25 - ProcessTimerDelay <= v25 )
        {
          v25 -= ProcessTimerDelay;
        }
        HIDWORD(v82) = HIDWORD(v25);
        v64 = (unsigned int)ProcessTimerDelay / 0x2710;
        if ( v23 && (v65 = v64 + v23, v64 + v23 > v23) )
        {
          v23 += v64;
          a8 = v65;
          *(_DWORD *)(BugCheckParameter2 + 240) += v64;
        }
        else
        {
          v66 = *(_DWORD *)(BugCheckParameter2 + 240);
          if ( !v66 || v66 + v64 <= v66 )
            goto LABEL_128;
          *(_DWORD *)(BugCheckParameter2 + 240) = v66 + v64;
        }
        *(_DWORD *)(BugCheckParameter2 + 244) = v64;
LABEL_128:
        v24 = v80;
      }
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) == 0 )
  {
    v27 = v25;
    v28 = 0;
    if ( !a9 )
    {
LABEL_17:
      v29 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v24 ^ KiWaitAlways), KiWaitNever);
      v99 = v29;
      v101 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v83 = KeGetCurrentPrcb();
      while ( 1 )
      {
        v89 = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
        {
          do
            KeYieldProcessorEx(&v89);
          while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
        }
        if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
        {
          v30 = 0;
          goto LABEL_21;
        }
        v67 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
        v92 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
        v88 = KiProcessorBlock[*(unsigned int *)(BugCheckParameter2 + 56)] + 13952;
        v93 = (volatile signed __int32 *)(v88 + 32 * (v67 + 16));
        v98 = KeGetCurrentPrcb();
        v90 = 0;
        LOBYTE(v67) = 1;
        KiSetVpThreadSpinLockCount(v98, v67);
        v68 = v93;
        v69 = v98;
        while ( _interlockedbittestandset64(v68, 0LL) )
        {
          KiSetVpThreadSpinLockCount(v69, 0LL);
          do
            KeYieldProcessorEx(&v90);
          while ( *(_QWORD *)v68 );
          LOBYTE(v70) = 1;
          KiSetVpThreadSpinLockCount(v69, v70);
        }
        v29 = v99;
        v17 = (volatile signed __int32 *)(BugCheckParameter2 + 64);
        if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)v93, 0LL);
        KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
        if ( _InterlockedExchange64((volatile __int64 *)(v88 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
        {
          _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
          v30 = 1;
          goto LABEL_21;
        }
        _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
        v91 = 0;
        while ( *(char *)(BugCheckParameter2 + 3) < 0 )
          KeYieldProcessorEx(&v91);
      }
      KiRemoveEntryTimer(v88, BugCheckParameter2, v92);
      _InterlockedAnd64((volatile signed __int64 *)v93, 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
      v30 = 1;
LABEL_21:
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v30 )
      {
        v100 = BugCheckParameter2;
        v103[0] = &v100;
        v103[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v103, 1, 1073872896, 3925, 1538);
      }
      *(_QWORD *)(BugCheckParameter2 + 48) = v29;
      *(_DWORD *)(BugCheckParameter2 + 60) = a8;
      v96 = *(_DWORD *)BugCheckParameter2;
      BYTE1(v96) = v28;
      if ( v25 < 0 || (v28 |= 1u, BYTE1(v96) = v28, v25 = MEMORY[0xFFFFF78000000014] - v25, v25 < 0) )
      {
        v31 = 0LL;
        if ( v28 >= 4u )
          v31 = (unsigned __int8)(v28 & 0xFC) << 16;
        v32 = MEMORY[0xFFFFF78000000008] - v25;
        *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v25;
        v97 = (unsigned __int8)((unsigned __int64)(v31 + v32) >> 18);
        HIBYTE(v96) |= 0x40u;
        BYTE2(v96) = (unsigned __int64)(v31 + v32) >> 18;
        *(_DWORD *)BugCheckParameter2 = v96;
        *(_DWORD *)(BugCheckParameter2 + 4) = 0;
        v33 = v83;
        if ( (unsigned __int8)KiInsertTimerTable(
                                (_DWORD)v83,
                                BugCheckParameter2,
                                v80,
                                (unsigned __int8)((unsigned __int64)(v31 + v32) >> 18),
                                0LL) )
        {
          if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
            KiTraceSetTimer(BugCheckParameter2, v80, 0LL);
          else
            _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_28:
          KiExitDispatcher((_DWORD)v33, 0, 1, 0, v101);
          v34 = v86;
          v26 = Object;
          if ( v86 )
            _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
          goto LABEL_30;
        }
      }
      else
      {
        *(_DWORD *)BugCheckParameter2 = v96;
        *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
        v33 = v83;
      }
      KiTimerWaitTest(v33, BugCheckParameter2, 0LL);
      goto LABEL_28;
    }
    v42 = 10000LL * a9;
    if ( v42 > 0xFC0000 )
    {
      v42 -= 16515072LL;
      if ( v25 >= 0 )
      {
        v25 += v42;
        if ( v25 < v27 )
          v25 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v25 -= v42;
        if ( v25 > v27 )
          v25 = 0x8000000000000000uLL;
      }
      if ( v23 )
      {
        if ( v23 + (int)v42 / 10000 >= v23 )
        {
          a8 = v23 + (int)v42 / 10000;
          LODWORD(v42) = 16515072;
          goto LABEL_51;
        }
        a8 = -1;
      }
      LODWORD(v42) = 16515072;
    }
LABEL_51:
    v43 = (unsigned int)v42 >> 18;
    if ( v43 > 0x3F )
      LOBYTE(v43) = 63;
    v28 = 4 * v43;
    v24 = v80;
    goto LABEL_17;
  }
  *(_QWORD *)(BugCheckParameter2 + 312) = v25;
  v34 = v86;
  if ( v82 < 0 )
    *(_BYTE *)(BugCheckParameter2 + 248) = (v86 != 0) + 2;
  else
    *(_BYTE *)(BugCheckParameter2 + 248) = 1;
LABEL_30:
  v35 = *(void **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v34;
  *(_BYTE *)(BugCheckParameter2 + 304) ^= (*(_BYTE *)(BugCheckParameter2 + 304) ^ (4 * a7)) & 4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v17, retaddr);
    v26 = Object;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
  }
  v36 = KeGetCurrentPrcb();
  v37 = v36->SchedulerAssist;
  if ( v37 )
  {
    if ( v36->NestingLevel <= 1u )
    {
      v71 = v37[5] - 1;
      v37[5] = v71;
      if ( !v71 && !*((_BYTE *)v37 + 25) && !*((_BYTE *)v37 + 27) )
        KiPerformUnboostKick(v36);
    }
  }
  if ( v76 )
    KxReleaseSpinLock((PKSPIN_LOCK)&v26[2].IdealNode[16]);
  __writecr8((unsigned __int8)v95);
  if ( v77 )
  {
    if ( v35 )
    {
      if ( !v34 )
      {
        v72 = (_QWORD *)(BugCheckParameter2 + 264);
        v73 = *(_QWORD *)(BugCheckParameter2 + 264);
        v74 = *(_QWORD **)(BugCheckParameter2 + 272);
        if ( *(_QWORD *)(v73 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v74 != v72 )
          __fastfail(3u);
        *v74 = v73;
        *(_QWORD *)(v73 + 8) = v74;
        *v72 = 0LL;
      }
    }
    else if ( v34 )
    {
      v51 = (_QWORD *)(BugCheckParameter2 + 264);
      v52 = (_QWORD *)qword_14039ED88;
      if ( *(__int64 **)qword_14039ED88 != &ExpWakeTimerList )
        __fastfail(3u);
      *v51 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v52;
      *v52 = v51;
      qword_14039ED88 = BugCheckParameter2 + 264;
    }
    v53 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v53 & 2) != 0 && (v53 & 4) == 0 )
      ExfTryToWakePushLock(&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KeLeaveCriticalRegionThread(CurrentThread);
    if ( v35 )
      PoDestroyReasonContext(v35);
  }
  if ( v22 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(BugCheckParameter2 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -v22) - v22;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter2 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
          BugCheckParameter2,
          6uLL,
          *(_QWORD *)(BugCheckParameter2 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
  }
  v39 = v102;
  if ( !v102 )
    return v79;
  if ( !a2 )
  {
    *v102 = v84;
    return v79;
  }
  v75 = (__int64)v102;
  if ( (unsigned __int64)v102 >= 0x7FFFFFFF0000LL )
    v75 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v75 = *(_BYTE *)v75;
  *v39 = v84;
  return v79;
}
