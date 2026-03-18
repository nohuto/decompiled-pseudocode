/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x140012970 (LdrpKrnGetDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1400EF2B0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x14011AB70 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiComputePriorityFloor @ 0x140042E58 (KiComputePriorityFloor.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x140255ECC (PerfLogExecutiveResourceRelease.c)
 */

void __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 **a3)
{
  bool v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // ebx
  char v8; // al
  bool v9; // zf
  signed __int64 v10; // rbx
  char v11; // r15
  _QWORD *v12; // rbx
  unsigned int v13; // r13d
  __int64 v14; // rax
  char v15; // r14
  unsigned int v16; // r15d
  unsigned int v17; // r15d
  unsigned int v18; // ebp
  unsigned int v19; // ebx
  __int64 v20; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _QWORD *v22; // rdx
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rax
  char v27; // al
  __int64 v28; // rbx
  char v29; // al
  __int64 v30; // rdx
  char v31; // cl
  char v32; // r8
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r11
  __int64 v37; // rbx
  char v38; // dl
  unsigned __int8 v39; // cl
  char v40; // al
  char v41; // r8
  char v42; // cl
  char v43; // al
  _KTHREAD *v44; // rax
  _KTHREAD *v45; // r8
  unsigned __int8 v46; // al
  char v47; // al
  _QWORD *v48; // rax
  int v49; // ecx
  int v50; // eax
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rcx
  char Priority; // cl
  __int64 v55; // rbx
  __int64 v56; // r8
  _QWORD *v57; // rcx
  _KTHREAD *CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v60; // r9
  __int64 v61; // r11
  _QWORD *v62; // r9
  __int64 v63; // rcx
  char v64; // al
  int v65; // r10d
  __int64 *v66; // r8
  char IsThreadRankNonZero; // al
  struct _KPRCB *v68; // [rsp+30h] [rbp-98h]
  __int64 v69; // [rsp+38h] [rbp-90h]
  _KTHREAD *v70; // [rsp+38h] [rbp-90h]
  _QWORD *v71; // [rsp+40h] [rbp-88h]
  __int64 v72; // [rsp+48h] [rbp-80h]
  struct _KPRCB *v73; // [rsp+48h] [rbp-80h]
  _QWORD *v74; // [rsp+50h] [rbp-78h]
  int v75; // [rsp+58h] [rbp-70h] BYREF
  int v76; // [rsp+5Ch] [rbp-6Ch] BYREF
  int v77; // [rsp+60h] [rbp-68h] BYREF
  int v78; // [rsp+64h] [rbp-64h] BYREF
  int v79; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v80; // [rsp+6Ch] [rbp-5Ch]
  _QWORD *v81; // [rsp+70h] [rbp-58h]
  _KTHREAD *v82; // [rsp+78h] [rbp-50h]
  __int64 v83; // [rsp+80h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+88h] [rbp-40h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  __int64 v86; // [rsp+D0h] [rbp+8h]
  char v87; // [rsp+D0h] [rbp+8h]
  __int64 v88; // [rsp+D0h] [rbp+8h]
  __int64 v89; // [rsp+E8h] [rbp+20h]
  char v90; // [rsp+E8h] [rbp+20h]

  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((*(_BYTE *)(BugCheckParameter1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
  {
    KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  }
  v6 = *(_DWORD *)(BugCheckParameter1 + 56);
  v7 = v6 & 7 | (8 * (v6 >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v7;
  if ( ((8 * (v6 >> 3) - 8) & 0xFFFFFFF8) == 0 )
  {
    v8 = v6 & 7 | (8 * (v6 >> 3) - 8);
    v9 = (v7 & 2) == 0;
    v10 = *(_QWORD *)(BugCheckParameter1 + 48);
    if ( v9 )
    {
      if ( (v10 & 3) != 0 )
        goto LABEL_13;
    }
    else
    {
      v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( v10 )
    {
      if ( (v8 & 1) != 0 )
      {
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIo(v10, BugCheckParameter2);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1796));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v10);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
      }
    }
LABEL_13:
    v11 = 0;
    *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
    v80 = *(_DWORD *)(BugCheckParameter1 + 68);
    if ( *(_DWORD *)(BugCheckParameter1 + 72) )
    {
      v12 = *(_QWORD **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v49 = *(_DWORD *)(BugCheckParameter1 + 72);
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      v71 = v12;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      if ( !v49 )
        goto LABEL_16;
    }
    else
    {
      v12 = 0LL;
      v71 = 0LL;
      if ( !*(_DWORD *)(BugCheckParameter1 + 76) )
      {
        *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
LABEL_16:
        *(_DWORD *)(BugCheckParameter1 + 64) = 0;
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
LABEL_17:
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
        v13 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        if ( *(char *)(BugCheckParameter1 + 26) < 0 )
        {
          v50 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = 1LL;
          *(_DWORD *)(BugCheckParameter1 + 56) = v50 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
          goto LABEL_26;
        }
        _m_prefetchw(a3);
        v14 = (__int64)*a3;
        if ( !*a3 )
        {
          if ( a3 == (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
          {
LABEL_25:
            v12 = v71;
LABEL_26:
            _enable();
            v15 = 1;
            if ( v11 )
              v15 = 3;
            v16 = 1;
            if ( !v12 )
              goto LABEL_29;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = v71;
            v68 = CurrentPrcb;
            do
            {
              v23 = v22;
              v81 = v22;
              v22 = (_QWORD *)*v22;
              v75 = 0;
              v74 = v22;
              if ( _interlockedbittestandset((volatile signed __int32 *)v23 + 4, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v75);
                  while ( (*((_DWORD *)v23 + 4) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset((volatile signed __int32 *)v23 + 4, 7u) );
                v22 = v74;
                CurrentPrcb = v68;
              }
              *((_DWORD *)v23 + 5) = 1;
              v24 = v23[3];
              if ( (_QWORD *)v24 != v23 + 3 )
              {
                while ( 1 )
                {
                  v89 = v24;
                  v83 = *(_QWORD *)v24;
                  v25 = *(_QWORD *)v24;
                  v26 = *(__int64 **)(v24 + 8);
                  if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 || *v26 != v24 )
                    __fastfail(3u);
                  *v26 = v25;
                  *(_QWORD *)(v25 + 8) = v26;
                  v27 = *(_BYTE *)(v24 + 16);
                  if ( v27 != 1 )
                  {
                    if ( v27 != 2 )
                    {
                      KiTryUnwaitThread((__int64)CurrentPrcb, v24, 256LL, 0LL);
                      CurrentPrcb = v68;
                      goto LABEL_118;
                    }
                    *(_BYTE *)(v24 + 17) = 5;
                    v88 = *(_QWORD *)(v24 + 24);
                    *(_QWORD *)v24 = 0LL;
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v73 = KeGetCurrentPrcb();
                    CurrentThread = v73->CurrentThread;
                    v82 = CurrentThread;
                    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                    {
                      IsThreadRunning = KeIsThreadRunning(CurrentThread);
                      EtwTraceEnqueueWork(v60, v61, IsThreadRunning);
                    }
                    KiAcquireKobjectLockSafe((volatile signed __int32 *)v88);
                    v62 = (_QWORD *)(v88 + 8);
                    v63 = v88;
                    if ( (_QWORD *)*v62 == v62
                      || *(_DWORD *)(v88 + 40) >= *(_DWORD *)(v88 + 44)
                      || v82->Queue == (_DISPATCHER_HEADER *volatile)v88 && v82->WaitReason == 15 )
                    {
LABEL_148:
                      v65 = *(_DWORD *)(v63 + 4);
                      *(_DWORD *)(v63 + 4) = v65 + 1;
                      v66 = *(__int64 **)(v63 + 32);
                      if ( *v66 != v63 + 24 )
                        __fastfail(3u);
                      *(_QWORD *)v89 = v63 + 24;
                      *(_QWORD *)(v89 + 8) = v66;
                      *v66 = v89;
                      *(_QWORD *)(v63 + 32) = v89;
                      if ( !v65 && (_QWORD *)*v62 != v62 )
                      {
                        KiWakeOtherQueueWaiters((__int64)v73, v63);
                        v63 = v88;
                      }
                    }
                    else
                    {
                      v64 = KiWakeQueueWaiter((__int64)v73, v88, v89);
                      v63 = v88;
                      if ( !v64 )
                      {
                        v62 = (_QWORD *)(v88 + 8);
                        goto LABEL_148;
                      }
                    }
                    _InterlockedAnd((volatile signed __int32 *)v63, 0xFFFFFF7F);
                    v9 = (*((_DWORD *)v23 + 5))-- == 1;
                    CurrentPrcb = v68;
                    if ( v9 )
                      goto LABEL_54;
                    goto LABEL_118;
                  }
                  v28 = *(_QWORD *)(v24 + 24);
                  v69 = *(unsigned __int16 *)(v24 + 18);
                  v72 = v28;
                  v76 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 64), 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v76);
                    while ( *(_QWORD *)(v28 + 64) );
                  }
                  v29 = *(_BYTE *)(v28 + 388);
                  v23 = v81;
                  v30 = v72;
                  if ( v29 != 5 )
                  {
                    v32 = 0;
                    goto LABEL_117;
                  }
                  v31 = *(_BYTE *)(v72 + 112);
                  v32 = 0;
                  v33 = v31 & 7;
                  if ( v33 == 1 || v33 == 4 )
                  {
                    v34 = *(_QWORD *)(v72 + 232);
                    if ( v34 )
                    {
                      if ( (*(_BYTE *)v34 & 0x7F) == 0x15 )
                      {
                        v53 = (unsigned __int8)*(_DWORD *)(v72 + 540);
                        *(_DWORD *)(v72 + 540) = v53;
                        _InterlockedIncrement((volatile signed __int32 *)(v34 + 4 * v53 + 536));
                      }
                      else
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(v34 + 40));
                      }
                    }
                    v35 = *(_QWORD *)(v72 + 712);
                    v86 = v35;
                    if ( v35 )
                    {
                      v77 = 0;
                      v55 = v35;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 22800), 0LL) )
                      {
                        do
                          KeYieldProcessorEx(&v77);
                        while ( *(_QWORD *)(v55 + 22800) );
                      }
                      v30 = v72;
                      v23 = v81;
                      if ( *(_QWORD *)(v72 + 712) )
                      {
                        v56 = *(_QWORD *)(v72 + 216);
                        v57 = *(_QWORD **)(v72 + 224);
                        if ( *(_QWORD *)(v56 + 8) != v72 + 216 || *v57 != v72 + 216 )
                          __fastfail(3u);
                        *v57 = v56;
                        *(_QWORD *)(v56 + 8) = v57;
                        *(_QWORD *)(v72 + 712) = 0LL;
                      }
                      _InterlockedAnd64((volatile signed __int64 *)(v86 + 22800), 0LL);
                    }
                    CurrentPrcb = v68;
                    v36 = v89;
                    v32 = 1;
                    *(_BYTE *)(v30 + 388) = 7;
                    *(_QWORD *)(v30 + 216) = v68->DeferredReadyListHead.Next;
                    v68->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v30 + 216);
                    *(_QWORD *)(v30 + 200) = v69;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(v72 + 112) & 7) == 0 )
                    {
                      v36 = v89;
                      *(_BYTE *)(v72 + 112) = v31 & 0xF8 | 2;
                      v32 = 1;
                      *(_QWORD *)(v72 + 200) = v69;
                      *(_BYTE *)(v89 + 17) = 0;
                      goto LABEL_107;
                    }
                    if ( v33 == 5 )
                    {
                      *(_BYTE *)(v72 + 112) = v31 & 0xF8 | 6;
LABEL_117:
                      v36 = v89;
LABEL_107:
                      CurrentPrcb = v68;
                      goto LABEL_52;
                    }
                    v36 = v89;
                    CurrentPrcb = v68;
                    if ( v33 == 3 )
                      *(_BYTE *)(v89 + 17) = 2;
                  }
LABEL_52:
                  *(_QWORD *)(v30 + 64) = 0LL;
                  ++*(_BYTE *)(v36 + 17);
                  if ( v32 )
                  {
                    v9 = (*((_DWORD *)v23 + 5))-- == 1;
                    if ( v9 )
                    {
LABEL_54:
                      v22 = v74;
                      break;
                    }
                  }
LABEL_118:
                  v24 = v83;
                  if ( (_QWORD *)v83 == v23 + 3 )
                    goto LABEL_54;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v23 + 4, 0xFFFFFF7F);
            }
            while ( v22 != v71 );
            v37 = (__int64)CurrentPrcb->CurrentThread;
            if ( !*(_BYTE *)(v37 + 564) )
            {
              v47 = *(_BYTE *)(v37 + 195) + 1;
LABEL_71:
              if ( v13 )
              {
                v16 = 2;
                if ( v47 > (char)v13 )
                  v13 = v47;
              }
              if ( (v15 & 2) != 0 && v16 == 1 )
                v13 = 1;
              KiExitDispatcher((__int64)CurrentPrcb, 0, v16, v13, CurrentIrql);
LABEL_29:
              v17 = v80;
              v18 = 65570;
              v19 = 0;
              goto LABEL_30;
            }
            v78 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 64), 0LL) )
            {
              do
                KeYieldProcessorEx(&v78);
              while ( *(_QWORD *)(v37 + 64) );
            }
            v38 = *(_BYTE *)(v37 + 195);
            v39 = *(_BYTE *)(v37 + 564);
            v40 = v38;
            v87 = v38;
            v41 = v39 & 0xF;
            if ( (v39 & 0xF) != 0 )
            {
              v40 = v38 - v41;
              v87 = v38 - v41;
            }
            v42 = v39 >> 4;
            if ( !v42 )
            {
              CurrentPrcb = v68;
              v47 = v40 + 1;
              goto LABEL_70;
            }
            *(_BYTE *)(v37 + 564) = v41;
            v43 = KiComputePriorityFloor(v37, v38 - v42);
            CurrentPrcb = v68;
            v90 = v43;
            if ( v43 == *(_BYTE *)(v37 + 195) )
            {
LABEL_69:
              v47 = v87;
LABEL_70:
              *(_QWORD *)(v37 + 64) = 0LL;
              goto LABEL_71;
            }
            v79 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              do
              {
                KeYieldProcessorEx(&v79);
                CurrentPrcb = v68;
              }
              while ( v68->PrcbLock );
            }
            if ( !CurrentPrcb->NextThread )
            {
              v44 = (_KTHREAD *)KiSelectReadyThreadEx(CurrentPrcb, (_KTHREAD *)v37, (_QWORD *)1);
              v70 = v44;
              v45 = v44;
              if ( !v44 )
              {
                CurrentPrcb = v68;
                v46 = 1;
LABEL_68:
                KiUpdateThreadPriority(CurrentPrcb, v37, (unsigned int)v90, v46);
                CurrentPrcb = v68;
                _InterlockedAnd64((volatile signed __int64 *)&v68->PrcbLock, 0LL);
                goto LABEL_69;
              }
              if ( (v44->Header.Size & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(v44, v68);
                v45 = v70;
                Priority = 1;
                if ( !IsThreadRankNonZero )
                  Priority = v70->Priority;
              }
              else
              {
                Priority = v44->Priority;
              }
              CurrentPrcb = v68;
              *v68->PriorityState = Priority;
              v68->NextThread = v45;
              if ( v45->WaitBlockFill6[68] == 1 )
                v45->ReadyTime = v45->ReadyTime - v45->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
              v45->WaitBlockFill6[68] = 3;
            }
            v46 = 0;
            goto LABEL_68;
          }
          v14 = KxWaitForLockChainValid(a3);
        }
        *a3 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
        goto LABEL_25;
      }
      v48 = *(_QWORD **)(BugCheckParameter1 + 40);
      if ( v48 )
      {
        if ( (_QWORD *)*v48 == v48 )
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = *v48;
          v51 = *v48;
          v52 = (_QWORD *)v48[1];
          if ( *(_QWORD **)(*v48 + 8LL) != v48 || (_QWORD *)*v52 != v48 )
            __fastfail(3u);
          *v52 = v51;
          *(_QWORD *)(v51 + 8) = v52;
        }
        v48[1] = v48;
        *v48 = v48;
        v12 = v48;
        v71 = v48;
      }
      --*(_DWORD *)(BugCheckParameter1 + 76);
      v49 = 1;
      v11 = 1;
    }
    *(_DWORD *)(BugCheckParameter1 + 64) += v49 - 1;
    goto LABEL_17;
  }
  v17 = *(_DWORD *)(BugCheckParameter1 + 68);
  v18 = 65586;
  v19 = v7 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
    goto LABEL_36;
  }
  _m_prefetchw(a3);
  v20 = (__int64)*a3;
  if ( *a3 )
    goto LABEL_103;
  if ( a3 != (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
  {
    v20 = KxWaitForLockChainValid(a3);
LABEL_103:
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v20 + 8), 1uLL);
  }
LABEL_36:
  _enable();
LABEL_30:
  __incgsdword(0x64ACu);
  if ( v5 )
    PerfLogExecutiveResourceRelease(v18, BugCheckParameter1, v19, v17);
}
