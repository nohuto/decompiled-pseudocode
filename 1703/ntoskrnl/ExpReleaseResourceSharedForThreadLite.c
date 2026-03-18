/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0
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
 *     KiRemoveBoostThread @ 0x1400414C0 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiSignalThread @ 0x1400E2F70 (KiSignalThread.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x140255ECC (PerfLogExecutiveResourceRelease.c)
 */

void __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 **a3)
{
  bool v5; // bp
  ULONG_PTR v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // rax
  ULONG_PTR v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // esi
  char v12; // al
  bool v13; // zf
  signed __int64 v14; // rsi
  char v15; // si
  unsigned int v16; // r13d
  _QWORD *v17; // rbx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // r12d
  __int64 v21; // rax
  char v22; // r14
  unsigned int v23; // esi
  unsigned int v24; // ebx
  unsigned int v25; // esi
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // eax
  struct _KPRCB *CurrentPrcb; // r15
  _QWORD *v32; // rax
  _QWORD *v33; // rbx
  _QWORD *v34; // rcx
  __int64 v35; // r15
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  char v38; // al
  __int64 v39; // rbx
  char v40; // al
  char v41; // r8
  char v42; // al
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  ULONG_PTR v45; // r11
  unsigned __int64 v46; // r10
  unsigned __int8 IsThreadRunning; // al
  __int64 v48; // r9
  _QWORD *v49; // r8
  __int64 v50; // rcx
  char v51; // al
  int v52; // r9d
  __int64 *v53; // rdx
  __int64 v54; // rdx
  _QWORD *v55; // [rsp+30h] [rbp-88h]
  __int64 v56; // [rsp+38h] [rbp-80h]
  __int64 v57; // [rsp+40h] [rbp-78h]
  _QWORD *v58; // [rsp+48h] [rbp-70h]
  __int64 v59; // [rsp+50h] [rbp-68h]
  struct _KPRCB *v60; // [rsp+50h] [rbp-68h]
  _QWORD *v61; // [rsp+58h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+60h] [rbp-58h]
  _QWORD *v63; // [rsp+68h] [rbp-50h]
  unsigned __int8 CurrentIrql; // [rsp+70h] [rbp-48h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v66; // [rsp+C0h] [rbp+8h]
  int v67; // [rsp+C8h] [rbp+10h] BYREF
  int v68; // [rsp+D8h] [rbp+20h] BYREF

  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v6 = 0LL;
  if ( (BugCheckParameter2 & 3) != 0 )
    v7 = 0;
  else
    v7 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
  v8 = *(_QWORD *)(BugCheckParameter1 + 48);
  v9 = BugCheckParameter1 + 48;
  if ( v8 != BugCheckParameter2 )
  {
    v26 = 0LL;
    if ( v8 )
      v26 = 1LL;
    else
      v6 = BugCheckParameter1 + 48;
    if ( !v7
      || (v27 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v7 >= *(_DWORD *)(v27 + 8)
      || (v9 = v27 + 16LL * v7, *(_QWORD *)v9 != BugCheckParameter2) )
    {
      v45 = *(_QWORD *)(BugCheckParameter1 + 16);
      v46 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v45 || (v9 = v45 + 16, v26 >= v46) )
LABEL_102:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v45, 2uLL);
      while ( *(_QWORD *)v9 != BugCheckParameter2 )
      {
        if ( *(_QWORD *)v9 )
        {
          if ( ++v26 == v46 )
            goto LABEL_102;
        }
        else if ( !v6 )
        {
          v6 = v9;
        }
        v9 += 16LL;
        if ( v9 == v45 + 16LL * *(unsigned int *)(v45 + 8) )
          goto LABEL_102;
      }
      KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v9 - v45) >> 4;
    }
  }
  v10 = *(_DWORD *)(v9 + 8);
  v11 = v10 & 7 | (8 * (v10 >> 3) - 8);
  *(_DWORD *)(v9 + 8) = v11;
  if ( ((8 * (v10 >> 3) - 8) & 0xFFFFFFF8) == 0 )
  {
    v12 = v10 & 7 | (8 * (v10 >> 3) - 8);
    v13 = (v11 & 2) == 0;
    v14 = *(_QWORD *)v9;
    if ( v13 )
    {
      if ( (v14 & 3) != 0 )
      {
LABEL_14:
        *(_QWORD *)v9 = 0LL;
        v15 = 0;
        v16 = *(_DWORD *)(BugCheckParameter1 + 68);
        if ( *(_DWORD *)(BugCheckParameter1 + 64) > 1u )
          goto LABEL_17;
        if ( *(_DWORD *)(BugCheckParameter1 + 76) )
        {
          v29 = *(_QWORD **)(BugCheckParameter1 + 40);
          v17 = 0LL;
          v55 = 0LL;
          if ( v29 )
          {
            if ( (_QWORD *)*v29 == v29 )
            {
              *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
            }
            else
            {
              *(_QWORD *)(BugCheckParameter1 + 40) = *v29;
              v43 = *v29;
              v44 = (_QWORD *)v29[1];
              if ( *(_QWORD **)(*v29 + 8LL) != v29 || (_QWORD *)*v44 != v29 )
                __fastfail(3u);
              *v44 = v43;
              *(_QWORD *)(v43 + 8) = v44;
            }
            v29[1] = v29;
            *v29 = v29;
            v17 = v29;
            v55 = v29;
          }
          --*(_DWORD *)(BugCheckParameter1 + 76);
          v18 = 1;
          v15 = 1;
          *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
LABEL_19:
          v19 = v18 - 1;
          v13 = v19 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
          *(_DWORD *)(BugCheckParameter1 + 64) += v19;
          if ( v13 )
            *(_WORD *)(BugCheckParameter1 + 24) = 0;
          if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
            *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
          v20 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
          if ( *(char *)(BugCheckParameter1 + 26) < 0 )
          {
            v30 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
            *(_QWORD *)(BugCheckParameter1 + 48) = 1LL;
            *(_DWORD *)(BugCheckParameter1 + 56) = v30 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
LABEL_30:
            _enable();
            v22 = 1;
            if ( v15 )
              v22 = 3;
            v23 = 1;
            if ( !v17 )
              goto LABEL_33;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            v32 = v55;
            v56 = (__int64)CurrentPrcb;
            while ( 1 )
            {
              v33 = v32;
              v61 = v32;
              v32 = (_QWORD *)*v32;
              v67 = 0;
              v58 = v32;
              if ( _interlockedbittestandset((volatile signed __int32 *)v33 + 4, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v67);
                  while ( (*((_DWORD *)v33 + 4) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset((volatile signed __int32 *)v33 + 4, 7u) );
                v32 = v58;
              }
              *((_DWORD *)v33 + 5) = 1;
              v34 = (_QWORD *)v33[3];
              if ( v34 != v33 + 3 )
                break;
LABEL_69:
              _InterlockedAnd((volatile signed __int32 *)v33 + 4, 0xFFFFFF7F);
              if ( v32 == v55 )
              {
                v42 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
                if ( v20 )
                {
                  v23 = 2;
                  if ( v42 > (char)v20 )
                    v20 = v42;
                }
                if ( (v22 & 2) != 0 && v23 == 1 )
                  v20 = 1;
                KiExitDispatcher((__int64)CurrentPrcb, 0, v23, v20, CurrentIrql);
LABEL_33:
                v24 = 65602;
                v25 = 0;
                goto LABEL_34;
              }
            }
            while ( 1 )
            {
              v35 = (__int64)v34;
              v63 = (_QWORD *)*v34;
              v36 = (_QWORD *)*v34;
              v37 = *(_QWORD **)(v35 + 8);
              if ( v36[1] != v35 || *v37 != v35 )
                __fastfail(3u);
              *v37 = v36;
              v36[1] = v37;
              v38 = *(_BYTE *)(v35 + 16);
              if ( v38 != 1 )
                break;
              v39 = *(_QWORD *)(v35 + 24);
              v59 = *(unsigned __int16 *)(v35 + 18);
              v57 = v39;
              v68 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 64), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v68);
                while ( *(_QWORD *)(v39 + 64) );
              }
              v40 = *(_BYTE *)(v39 + 388);
              v33 = v61;
              if ( v40 == 5 )
                v41 = KiSignalThread(v56, v57, v59, v35);
              else
                v41 = 0;
              *(_QWORD *)(v57 + 64) = 0LL;
              ++*(_BYTE *)(v35 + 17);
              CurrentPrcb = (struct _KPRCB *)v56;
              if ( v41 )
              {
                v13 = (*((_DWORD *)v61 + 5))-- == 1;
                if ( v13 )
                {
LABEL_68:
                  v32 = v58;
                  goto LABEL_69;
                }
              }
LABEL_100:
              v34 = v63;
              if ( v63 == v33 + 3 )
                goto LABEL_68;
            }
            if ( v38 != 2 )
            {
              v54 = v35;
              CurrentPrcb = (struct _KPRCB *)v56;
              KiTryUnwaitThread(v56, v54, 256LL, 0LL);
              goto LABEL_100;
            }
            *(_BYTE *)(v35 + 17) = 5;
            v66 = *(_QWORD *)(v35 + 24);
            *(_QWORD *)v35 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v60 = KeGetCurrentPrcb();
            CurrentThread = v60->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v60->CurrentThread);
              EtwTraceEnqueueWork(v48, v35, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v66);
            v49 = (_QWORD *)(v66 + 8);
            v50 = v66;
            if ( (_QWORD *)*v49 != v49
              && *(_DWORD *)(v66 + 40) < *(_DWORD *)(v66 + 44)
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v66 || CurrentThread->WaitReason != 15) )
            {
              v51 = KiWakeQueueWaiter((__int64)v60, v66, v35);
              v50 = v66;
              if ( v51 )
                goto LABEL_120;
              v49 = (_QWORD *)(v66 + 8);
            }
            v52 = *(_DWORD *)(v50 + 4);
            *(_DWORD *)(v50 + 4) = v52 + 1;
            v53 = *(__int64 **)(v50 + 32);
            if ( *v53 != v50 + 24 )
              __fastfail(3u);
            *(_QWORD *)v35 = v50 + 24;
            *(_QWORD *)(v35 + 8) = v53;
            *v53 = v35;
            *(_QWORD *)(v50 + 32) = v35;
            if ( !v52 && (_QWORD *)*v49 != v49 )
            {
              KiWakeOtherQueueWaiters((__int64)v60, v50);
              v50 = v66;
            }
LABEL_120:
            _InterlockedAnd((volatile signed __int32 *)v50, 0xFFFFFF7F);
            v13 = (*((_DWORD *)v33 + 5))-- == 1;
            CurrentPrcb = (struct _KPRCB *)v56;
            if ( v13 )
              goto LABEL_68;
            goto LABEL_100;
          }
          _m_prefetchw(a3);
          v21 = (__int64)*a3;
          if ( !*a3 )
          {
            if ( a3 == (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
            {
LABEL_29:
              v17 = v55;
              goto LABEL_30;
            }
            v21 = KxWaitForLockChainValid(a3);
          }
          *a3 = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
          goto LABEL_29;
        }
        if ( *(_DWORD *)(BugCheckParameter1 + 72) )
        {
          v17 = *(_QWORD **)(BugCheckParameter1 + 32);
          *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
          v18 = *(_DWORD *)(BugCheckParameter1 + 72);
          *(_DWORD *)(BugCheckParameter1 + 72) = 0;
        }
        else
        {
LABEL_17:
          v17 = 0LL;
          v18 = 0;
        }
        v55 = v17;
        goto LABEL_19;
      }
    }
    else
    {
      v14 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( v14 )
    {
      if ( (v12 & 1) != 0 )
      {
        PsBoostThreadIo(v14, 1LL);
        *(_DWORD *)(v9 + 8) &= ~1u;
      }
      if ( (*(_DWORD *)(v9 + 8) & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v14 + 1796));
        *(_DWORD *)(v9 + 8) &= ~4u;
      }
      if ( (*(_DWORD *)(v9 + 8) & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v14);
        *(_DWORD *)(v9 + 8) &= ~2u;
      }
    }
    goto LABEL_14;
  }
  v16 = *(_DWORD *)(BugCheckParameter1 + 68);
  v24 = 65618;
  v25 = v11 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
    goto LABEL_48;
  }
  _m_prefetchw(a3);
  v28 = (__int64)*a3;
  if ( *a3 )
    goto LABEL_95;
  if ( a3 != (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
  {
    v28 = KxWaitForLockChainValid(a3);
LABEL_95:
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v28 + 8), 1uLL);
  }
LABEL_48:
  _enable();
LABEL_34:
  __incgsdword(0x64B0u);
  if ( v5 )
    PerfLogExecutiveResourceRelease(v24, BugCheckParameter1, v25, v16);
}
