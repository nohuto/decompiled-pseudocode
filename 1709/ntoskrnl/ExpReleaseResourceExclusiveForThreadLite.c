/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14001F020 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     ExpReleaseResourceForThreadLite @ 0x14006A2D0 (ExpReleaseResourceForThreadLite.c)
 *     ExReleaseResourceForThreadLite @ 0x14007D110 (ExReleaseResourceForThreadLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KiSelectReadyThreadEx @ 0x14008B420 (KiSelectReadyThreadEx.c)
 *     KiComputePriorityFloor @ 0x14008C7D8 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x14027E788 (PerfLogExecutiveResourceRelease.c)
 */

void __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 **a3)
{
  bool v5; // r12
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  int v8; // eax
  signed __int64 v9; // rbx
  char v10; // bp
  _QWORD *v11; // rbx
  unsigned int v12; // r13d
  __int64 v13; // rax
  char v14; // al
  int v15; // ebp
  char v16; // r14
  unsigned int v17; // r15d
  unsigned int v18; // ebp
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _QWORD *v21; // r8
  _QWORD *v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // r11
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  char v27; // al
  __int64 v28; // rbx
  char v29; // al
  __int64 v30; // rdx
  char v31; // cl
  char v32; // r8
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r11
  bool v37; // zf
  _KTHREAD *v38; // rbx
  __int64 Priority; // rdx
  unsigned __int8 PriorityDecrement; // cl
  char v41; // al
  char v42; // r8
  char v43; // cl
  char v44; // al
  __int64 ready; // rax
  __int64 v46; // r8
  unsigned __int8 v47; // al
  char v48; // al
  _QWORD *v49; // rax
  int v50; // ecx
  int v51; // eax
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  char v54; // cl
  _DWORD *SchedulerAssist; // rdx
  _BYTE *v56; // rax
  char IsThreadRankNonZero; // al
  __int64 v58; // rbx
  __int64 v59; // r8
  _QWORD *v60; // rcx
  _KTHREAD *CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v63; // r9
  __int64 v64; // r11
  _QWORD *v65; // r8
  __int64 v66; // rcx
  char v67; // al
  int v68; // r10d
  __int64 *v69; // r9
  struct _KPRCB *v70; // [rsp+30h] [rbp-98h]
  __int64 v71; // [rsp+38h] [rbp-90h]
  __int64 v72; // [rsp+38h] [rbp-90h]
  _QWORD *v73; // [rsp+40h] [rbp-88h]
  __int64 v74; // [rsp+48h] [rbp-80h]
  struct _KPRCB *v75; // [rsp+48h] [rbp-80h]
  _QWORD *v76; // [rsp+50h] [rbp-78h]
  int v77; // [rsp+58h] [rbp-70h] BYREF
  int v78; // [rsp+5Ch] [rbp-6Ch] BYREF
  int v79; // [rsp+60h] [rbp-68h] BYREF
  int v80; // [rsp+64h] [rbp-64h] BYREF
  int v81; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v82; // [rsp+6Ch] [rbp-5Ch]
  _QWORD *v83; // [rsp+70h] [rbp-58h]
  _KTHREAD *v84; // [rsp+78h] [rbp-50h]
  _QWORD *v85; // [rsp+80h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+88h] [rbp-40h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  __int64 v88; // [rsp+D0h] [rbp+8h]
  char v89; // [rsp+D0h] [rbp+8h]
  __int64 v90; // [rsp+D0h] [rbp+8h]
  __int64 v91; // [rsp+E8h] [rbp+20h]
  char v92; // [rsp+E8h] [rbp+20h]

  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((*(_BYTE *)(BugCheckParameter1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
  {
    KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  }
  v6 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v6;
  v7 = v6 >> 3;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(BugCheckParameter1 + 56);
    v9 = *(_QWORD *)(BugCheckParameter1 + 48);
    if ( (v8 & 2) != 0 )
    {
      v9 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v9 & 3) != 0 )
    {
      goto LABEL_13;
    }
    if ( v9 )
    {
      if ( (v8 & 1) != 0 )
      {
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIo(v9, BugCheckParameter2);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 1804));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v9);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
      }
    }
LABEL_13:
    v10 = 0;
    *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
    v82 = *(_DWORD *)(BugCheckParameter1 + 68);
    if ( *(_DWORD *)(BugCheckParameter1 + 72) )
    {
      v11 = *(_QWORD **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v50 = *(_DWORD *)(BugCheckParameter1 + 72);
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      v73 = v11;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      if ( !v50 )
        goto LABEL_16;
    }
    else
    {
      v11 = 0LL;
      v73 = 0LL;
      if ( !*(_DWORD *)(BugCheckParameter1 + 76) )
      {
        *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
LABEL_16:
        *(_DWORD *)(BugCheckParameter1 + 64) = 0;
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
LABEL_17:
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
        v12 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        if ( *(char *)(BugCheckParameter1 + 26) < 0 )
        {
          v51 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = 1LL;
          *(_DWORD *)(BugCheckParameter1 + 56) = v51 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
          goto LABEL_26;
        }
        _m_prefetchw(a3);
        v13 = (__int64)*a3;
        if ( !*a3 )
        {
          if ( a3 == (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
          {
LABEL_25:
            v11 = v73;
LABEL_26:
            _enable();
            v14 = v10;
            v15 = 1;
            v16 = 2 * v14 + 1;
            if ( !v11 )
            {
LABEL_27:
              v17 = v82;
              v18 = 65570;
              v7 = 0;
              goto LABEL_28;
            }
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = v73;
            v70 = CurrentPrcb;
            do
            {
              v22 = v21;
              v77 = 0;
              v21 = (_QWORD *)*v21;
              v83 = v22;
              v76 = v21;
              if ( _interlockedbittestandset((volatile signed __int32 *)v22 + 4, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v77);
                  while ( (*((_DWORD *)v22 + 4) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset((volatile signed __int32 *)v22 + 4, 7u) );
                CurrentPrcb = v70;
                v21 = v76;
              }
              *((_DWORD *)v22 + 5) = 1;
              v23 = (_QWORD *)v22[3];
              if ( v23 != v22 + 3 )
              {
                while ( 1 )
                {
                  v24 = (__int64)v23;
                  v91 = (__int64)v23;
                  v85 = (_QWORD *)*v23;
                  v25 = (_QWORD *)*v23;
                  v26 = (_QWORD *)v23[1];
                  if ( v25[1] != v24 || *v26 != v24 )
                    __fastfail(3u);
                  *v26 = v25;
                  v25[1] = v26;
                  v27 = *(_BYTE *)(v24 + 16);
                  if ( v27 != 1 )
                  {
                    if ( v27 != 2 )
                    {
                      KiTryUnwaitThread((__int64)CurrentPrcb, v24, 256LL, 0LL);
                      CurrentPrcb = v70;
                      goto LABEL_120;
                    }
                    *(_BYTE *)(v24 + 17) = 5;
                    v90 = *(_QWORD *)(v24 + 24);
                    *(_QWORD *)v24 = 0LL;
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v75 = KeGetCurrentPrcb();
                    CurrentThread = v75->CurrentThread;
                    v84 = CurrentThread;
                    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                    {
                      IsThreadRunning = KeIsThreadRunning(CurrentThread);
                      EtwTraceEnqueueWork(v63, v64, IsThreadRunning);
                    }
                    KiAcquireKobjectLockSafe(v90);
                    v65 = (_QWORD *)(v90 + 8);
                    v66 = v90;
                    if ( (_QWORD *)*v65 == v65
                      || *(_DWORD *)(v90 + 40) >= *(_DWORD *)(v90 + 44)
                      || v84->Queue == (_DISPATCHER_HEADER *volatile)v90 && v84->WaitReason == 15 )
                    {
LABEL_152:
                      v68 = *(_DWORD *)(v66 + 4);
                      *(_DWORD *)(v66 + 4) = v68 + 1;
                      v69 = *(__int64 **)(v66 + 32);
                      if ( *v69 != v66 + 24 )
                        __fastfail(3u);
                      *(_QWORD *)v91 = v66 + 24;
                      *(_QWORD *)(v91 + 8) = v69;
                      *v69 = v91;
                      *(_QWORD *)(v66 + 32) = v91;
                      if ( !v68 && (_QWORD *)*v65 != v65 )
                      {
                        KiWakeOtherQueueWaiters((__int64)v75, v66);
                        v66 = v90;
                      }
                    }
                    else
                    {
                      v67 = KiWakeQueueWaiter((__int64)v75, v90, v91);
                      v66 = v90;
                      if ( !v67 )
                      {
                        v65 = (_QWORD *)(v90 + 8);
                        goto LABEL_152;
                      }
                    }
                    _InterlockedAnd((volatile signed __int32 *)v66, 0xFFFFFF7F);
                    v37 = (*((_DWORD *)v22 + 5))-- == 1;
                    CurrentPrcb = v70;
                    if ( v37 )
                      goto LABEL_52;
                    goto LABEL_120;
                  }
                  v28 = *(_QWORD *)(v24 + 24);
                  v71 = *(unsigned __int16 *)(v24 + 18);
                  v74 = v28;
                  v78 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 64), 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v78);
                    while ( *(_QWORD *)(v28 + 64) );
                  }
                  v29 = *(_BYTE *)(v28 + 388);
                  v22 = v83;
                  v30 = v74;
                  if ( v29 != 5 )
                  {
                    v32 = 0;
                    goto LABEL_119;
                  }
                  v31 = *(_BYTE *)(v74 + 112);
                  v32 = 0;
                  v33 = v31 & 7;
                  if ( v33 == 1 || v33 == 4 )
                  {
                    v34 = *(_QWORD *)(v74 + 232);
                    if ( v34 )
                    {
                      if ( (*(_BYTE *)v34 & 0x7F) == 0x15 )
                      {
                        *(_DWORD *)(v74 + 540) = (unsigned __int8)*(_DWORD *)(v74 + 540);
                        _InterlockedIncrement((volatile signed __int32 *)(v34 + 4LL * *(unsigned int *)(v74 + 540) + 536));
                      }
                      else
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(v34 + 40));
                      }
                    }
                    v35 = *(_QWORD *)(v74 + 712);
                    v88 = v35;
                    if ( v35 )
                    {
                      v79 = 0;
                      v58 = v35;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v58 + 22800), 0LL) )
                      {
                        do
                          KeYieldProcessorEx(&v79);
                        while ( *(_QWORD *)(v58 + 22800) );
                      }
                      v30 = v74;
                      v22 = v83;
                      if ( *(_QWORD *)(v74 + 712) )
                      {
                        v59 = *(_QWORD *)(v74 + 216);
                        v60 = *(_QWORD **)(v74 + 224);
                        if ( *(_QWORD *)(v59 + 8) != v74 + 216 || *v60 != v74 + 216 )
                          __fastfail(3u);
                        *v60 = v59;
                        *(_QWORD *)(v59 + 8) = v60;
                        *(_QWORD *)(v74 + 712) = 0LL;
                      }
                      _InterlockedAnd64((volatile signed __int64 *)(v88 + 22800), 0LL);
                    }
                    CurrentPrcb = v70;
                    v36 = v91;
                    v32 = 1;
                    *(_BYTE *)(v30 + 388) = 7;
                    *(_QWORD *)(v30 + 216) = v70->DeferredReadyListHead.Next;
                    v70->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v30 + 216);
                    *(_QWORD *)(v30 + 200) = v71;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(v74 + 112) & 7) == 0 )
                    {
                      v36 = v91;
                      *(_BYTE *)(v74 + 112) = v31 & 0xF8 | 2;
                      v32 = 1;
                      *(_QWORD *)(v74 + 200) = v71;
                      *(_BYTE *)(v91 + 17) = 0;
                      goto LABEL_105;
                    }
                    if ( v33 == 5 )
                    {
                      *(_BYTE *)(v74 + 112) = v31 & 0xF8 | 6;
LABEL_119:
                      v36 = v91;
LABEL_105:
                      CurrentPrcb = v70;
                      goto LABEL_50;
                    }
                    v36 = v91;
                    CurrentPrcb = v70;
                    if ( v33 == 3 )
                      *(_BYTE *)(v91 + 17) = 2;
                  }
LABEL_50:
                  *(_QWORD *)(v30 + 64) = 0LL;
                  ++*(_BYTE *)(v36 + 17);
                  if ( v32 )
                  {
                    v37 = (*((_DWORD *)v22 + 5))-- == 1;
                    if ( v37 )
                    {
LABEL_52:
                      v21 = v76;
                      break;
                    }
                  }
LABEL_120:
                  v23 = v85;
                  if ( v85 == v22 + 3 )
                    goto LABEL_52;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v22 + 4, 0xFFFFFF7F);
            }
            while ( v21 != v73 );
            v38 = CurrentPrcb->CurrentThread;
            if ( !v38->PriorityDecrement )
            {
              v48 = v38->Priority + 1;
LABEL_69:
              if ( v12 )
              {
                v15 = 2;
                if ( v48 > (char)v12 )
                  v12 = v48;
              }
              if ( (v16 & 2) != 0 && v15 == 1 )
                v12 = 1;
              KiExitDispatcher((__int64)CurrentPrcb, 0LL, v15, v12, CurrentIrql);
              goto LABEL_27;
            }
            v80 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v38->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v80);
              while ( v38->ThreadLock );
            }
            Priority = (unsigned __int8)v38->Priority;
            PriorityDecrement = v38->PriorityDecrement;
            v41 = v38->Priority;
            v89 = v41;
            v42 = PriorityDecrement & 0xF;
            if ( (PriorityDecrement & 0xF) != 0 )
            {
              v41 -= v42;
              v89 = v41;
            }
            v43 = PriorityDecrement >> 4;
            if ( !v43 )
            {
              CurrentPrcb = v70;
              v48 = v41 + 1;
              goto LABEL_68;
            }
            LOBYTE(Priority) = Priority - v43;
            v38->PriorityDecrement = v42;
            v44 = KiComputePriorityFloor(v38, Priority);
            CurrentPrcb = v70;
            v92 = v44;
            if ( v44 == v38->Priority )
            {
LABEL_67:
              v48 = v89;
LABEL_68:
              v38->ThreadLock = 0LL;
              goto LABEL_69;
            }
            v81 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              do
              {
                KeYieldProcessorEx(&v81);
                CurrentPrcb = v70;
              }
              while ( v70->PrcbLock );
            }
            if ( !CurrentPrcb->NextThread )
            {
              ready = KiSelectReadyThreadEx(CurrentPrcb, v38, 1LL);
              v72 = ready;
              v46 = ready;
              if ( !ready )
              {
                CurrentPrcb = v70;
                v47 = 1;
LABEL_66:
                KiUpdateThreadPriority(CurrentPrcb, v38, (unsigned int)v92, v47);
                CurrentPrcb = v70;
                _InterlockedAnd64((volatile signed __int64 *)&v70->PrcbLock, 0LL);
                goto LABEL_67;
              }
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v70);
                v46 = v72;
                v54 = 1;
                if ( !IsThreadRankNonZero )
                  v54 = *(_BYTE *)(v72 + 195);
              }
              else
              {
                v54 = *(_BYTE *)(ready + 195);
              }
              CurrentPrcb = v70;
              *v70->PriorityState = v54;
              SchedulerAssist = v70->SchedulerAssist;
              if ( SchedulerAssist )
                *SchedulerAssist = v54;
              v70->NextThread = (_KTHREAD *)v46;
              v56 = v70->SchedulerAssist;
              if ( v56 )
                v56[8] = (_KTHREAD *)v46 == v70->IdleThread;
              if ( *(_BYTE *)(v46 + 388) == 1 )
                *(_DWORD *)(v46 + 132) = *(_DWORD *)(v46 + 132) - *(_DWORD *)(v46 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v46 + 388) = 3;
            }
            v47 = 0;
            goto LABEL_66;
          }
          v13 = KxWaitForLockChainValid(a3);
        }
        *a3 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
        goto LABEL_25;
      }
      v49 = *(_QWORD **)(BugCheckParameter1 + 40);
      if ( v49 )
      {
        if ( (_QWORD *)*v49 == v49 )
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = *v49;
          v52 = *v49;
          v53 = (_QWORD *)v49[1];
          if ( *(_QWORD **)(*v49 + 8LL) != v49 || (_QWORD *)*v53 != v49 )
            __fastfail(3u);
          *v53 = v52;
          *(_QWORD *)(v52 + 8) = v53;
        }
        v49[1] = v49;
        *v49 = v49;
        v11 = v49;
        v73 = v49;
      }
      --*(_DWORD *)(BugCheckParameter1 + 76);
      v50 = 1;
      v10 = 1;
    }
    *(_DWORD *)(BugCheckParameter1 + 64) += v50 - 1;
    goto LABEL_17;
  }
  v18 = 65586;
  v17 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
    goto LABEL_34;
  }
  _m_prefetchw(a3);
  v19 = (__int64)*a3;
  if ( *a3 )
    goto LABEL_101;
  if ( a3 != (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
  {
    v19 = KxWaitForLockChainValid(a3);
LABEL_101:
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
  }
LABEL_34:
  _enable();
LABEL_28:
  __incgsdword(0x636Cu);
  if ( v5 )
    PerfLogExecutiveResourceRelease(v18, BugCheckParameter1, v7, v17);
}
