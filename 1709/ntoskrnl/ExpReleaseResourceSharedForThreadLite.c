/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x140083270
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14001F020 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpReleaseResourceForThreadLite @ 0x14006A2D0 (ExpReleaseResourceForThreadLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KiRemoveBoostThread @ 0x14008B160 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x14027E788 (PerfLogExecutiveResourceRelease.c)
 */

void __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 **a3)
{
  bool v5; // bp
  unsigned int v6; // ecx
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  unsigned int v9; // esi
  char v10; // al
  bool v11; // zf
  signed __int64 v12; // rsi
  char v13; // si
  unsigned int v14; // r13d
  _QWORD *v15; // rbx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // rax
  char v20; // al
  int v21; // esi
  char v22; // r14
  unsigned int v23; // ebx
  unsigned int v24; // esi
  unsigned __int64 v25; // r8
  ULONG_PTR v26; // r9
  __int64 v27; // rax
  ULONG_PTR v28; // r11
  unsigned __int64 v29; // r10
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  int v34; // eax
  struct _KPRCB *CurrentPrcb; // r15
  _QWORD *v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rcx
  _QWORD *v39; // r15
  __int64 v40; // rdx
  __int64 *v41; // rax
  char v42; // al
  char v43; // al
  unsigned __int8 IsThreadRunning; // al
  __int64 v45; // r9
  _QWORD *v46; // r8
  __int64 v47; // rcx
  char v48; // al
  int v49; // r9d
  _QWORD *v50; // rdx
  __int64 v51; // [rsp+30h] [rbp-78h]
  _QWORD *v52; // [rsp+38h] [rbp-70h]
  _QWORD *v53; // [rsp+40h] [rbp-68h]
  struct _KPRCB *v54; // [rsp+48h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int64 v56; // [rsp+58h] [rbp-50h]
  unsigned __int8 CurrentIrql; // [rsp+60h] [rbp-48h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v59; // [rsp+B0h] [rbp+8h] BYREF
  _QWORD *v60; // [rsp+B8h] [rbp+10h]
  __int64 v61; // [rsp+C8h] [rbp+20h]

  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v6 = 0;
  else
    v6 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
  v7 = *(_QWORD *)(BugCheckParameter1 + 48);
  v8 = BugCheckParameter1 + 48;
  if ( v7 != BugCheckParameter2 )
  {
    v25 = 0LL;
    if ( v7 )
      v8 = 0LL;
    LOBYTE(v25) = v7 != 0;
    v26 = v8;
    if ( !v6
      || (v27 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v6 >= *(_DWORD *)(v27 + 8)
      || (v8 = v27 + 16LL * v6, *(_QWORD *)v8 != BugCheckParameter2) )
    {
      v28 = *(_QWORD *)(BugCheckParameter1 + 16);
      v29 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v28 || (v8 = v28 + 16, v25 >= v29) )
LABEL_90:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v28, 2uLL);
      while ( *(_QWORD *)v8 != BugCheckParameter2 )
      {
        if ( *(_QWORD *)v8 )
        {
          if ( ++v25 == v29 )
            goto LABEL_90;
        }
        else if ( !v26 )
        {
          v26 = v8;
        }
        v8 += 16LL;
        if ( v8 == v28 + 16LL * *(unsigned int *)(v28 + 8) )
          goto LABEL_90;
      }
      KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v8 - v28) >> 4;
    }
  }
  v9 = *(_DWORD *)(v8 + 8) & 7 | (8 * (*(_DWORD *)(v8 + 8) >> 3) - 8);
  *(_DWORD *)(v8 + 8) = v9;
  if ( v9 < 8 )
  {
    v10 = v9;
    v11 = (v9 & 2) == 0;
    v12 = *(_QWORD *)v8;
    if ( v11 )
    {
      if ( (v12 & 3) != 0 )
      {
LABEL_14:
        *(_QWORD *)v8 = 0LL;
        v13 = 0;
        v14 = *(_DWORD *)(BugCheckParameter1 + 68);
        if ( *(_DWORD *)(BugCheckParameter1 + 64) > 1u )
          goto LABEL_17;
        if ( *(_DWORD *)(BugCheckParameter1 + 76) )
        {
          v31 = *(_QWORD **)(BugCheckParameter1 + 40);
          v15 = 0LL;
          v60 = 0LL;
          if ( v31 )
          {
            if ( (_QWORD *)*v31 == v31 )
            {
              *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
            }
            else
            {
              *(_QWORD *)(BugCheckParameter1 + 40) = *v31;
              v32 = *v31;
              v33 = (_QWORD *)v31[1];
              if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v33 != v31 )
                __fastfail(3u);
              *v33 = v32;
              *(_QWORD *)(v32 + 8) = v33;
            }
            v31[1] = v31;
            *v31 = v31;
            v15 = v31;
            v60 = v31;
          }
          --*(_DWORD *)(BugCheckParameter1 + 76);
          *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
          v16 = 1;
          v13 = 1;
LABEL_19:
          v17 = v16 - 1;
          v11 = v17 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
          *(_DWORD *)(BugCheckParameter1 + 64) += v17;
          if ( v11 )
            *(_WORD *)(BugCheckParameter1 + 24) = 0;
          if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
            *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
          v18 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
          if ( *(char *)(BugCheckParameter1 + 26) < 0 )
          {
            v34 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
            *(_QWORD *)(BugCheckParameter1 + 48) = 1LL;
            *(_DWORD *)(BugCheckParameter1 + 56) = v34 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
            goto LABEL_30;
          }
          _m_prefetchw(a3);
          v19 = (__int64)*a3;
          if ( !*a3 )
          {
            if ( a3 == (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
            {
LABEL_29:
              v15 = v60;
LABEL_30:
              _enable();
              v20 = v13;
              v21 = 1;
              v22 = 2 * v20 + 1;
              if ( !v15 )
              {
LABEL_31:
                v23 = 65602;
                v24 = 0;
                goto LABEL_32;
              }
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              CurrentPrcb = KeGetCurrentPrcb();
              v36 = v60;
              v51 = (__int64)CurrentPrcb;
              while ( 1 )
              {
                v37 = v36;
                v59 = 0;
                v36 = (_QWORD *)*v36;
                v52 = v36;
                if ( _interlockedbittestandset((volatile signed __int32 *)v37 + 4, 7u) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v59);
                    while ( (*((_DWORD *)v37 + 4) & 0x80u) != 0 );
                  }
                  while ( _interlockedbittestandset((volatile signed __int32 *)v37 + 4, 7u) );
                  v36 = v52;
                }
                *((_DWORD *)v37 + 5) = 1;
                v38 = v37[3];
                if ( (_QWORD *)v38 != v37 + 3 )
                  break;
LABEL_70:
                _InterlockedAnd((volatile signed __int32 *)v37 + 4, 0xFFFFFF7F);
                if ( v36 == v60 )
                {
                  v43 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
                  if ( v18 )
                  {
                    v21 = 2;
                    if ( v43 > (char)v18 )
                      v18 = v43;
                  }
                  if ( (v22 & 2) != 0 && v21 == 1 )
                    v18 = 1;
                  KiExitDispatcher((__int64)CurrentPrcb, 0LL, v21, v18, CurrentIrql);
                  goto LABEL_31;
                }
              }
              while ( 1 )
              {
                v39 = (_QWORD *)v38;
                v56 = *(_QWORD *)v38;
                v40 = *(_QWORD *)v38;
                v41 = *(__int64 **)(v38 + 8);
                if ( *(_QWORD **)(*v39 + 8LL) != v39 || *v41 != v38 )
                  __fastfail(3u);
                *v41 = v40;
                *(_QWORD *)(v40 + 8) = v41;
                v42 = *(_BYTE *)(v38 + 16);
                if ( v42 != 1 )
                  break;
                CurrentPrcb = (struct _KPRCB *)v51;
                if ( (unsigned __int8)KiTryUnwaitThread(v51, v38, *(unsigned __int16 *)(v38 + 18), 0LL) )
                {
                  v11 = (*((_DWORD *)v37 + 5))-- == 1;
                  if ( v11 )
                  {
LABEL_69:
                    v36 = v52;
                    goto LABEL_70;
                  }
                }
LABEL_87:
                v38 = v56;
                if ( (_QWORD *)v56 == v37 + 3 )
                  goto LABEL_69;
              }
              if ( v42 != 2 )
              {
                CurrentPrcb = (struct _KPRCB *)v51;
                KiTryUnwaitThread(v51, v38, 256LL, 0LL);
                goto LABEL_87;
              }
              *(_BYTE *)(v38 + 17) = 5;
              v61 = *(_QWORD *)(v38 + 24);
              v53 = (_QWORD *)(v61 + 8);
              *(_QWORD *)v38 = 0LL;
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v54 = KeGetCurrentPrcb();
              CurrentThread = v54->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v54->CurrentThread);
                EtwTraceEnqueueWork(v45, v39, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v61);
              v46 = v53;
              v47 = v61;
              if ( (_QWORD *)*v46 != v46
                && *(_DWORD *)(v61 + 40) < *(_DWORD *)(v61 + 44)
                && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v61 || CurrentThread->WaitReason != 15) )
              {
                v48 = KiWakeQueueWaiter((__int64)v54, v61, (__int64)v39);
                v47 = v61;
                if ( v48 )
                  goto LABEL_109;
                v46 = v53;
              }
              v49 = *(_DWORD *)(v47 + 4);
              *(_DWORD *)(v47 + 4) = v49 + 1;
              v50 = *(_QWORD **)(v47 + 32);
              if ( *v50 != v47 + 24 )
                __fastfail(3u);
              *v39 = v47 + 24;
              v39[1] = v50;
              *v50 = v39;
              *(_QWORD *)(v47 + 32) = v39;
              if ( !v49 && (_QWORD *)*v46 != v46 )
              {
                KiWakeOtherQueueWaiters((__int64)v54, v47);
                v47 = v61;
              }
LABEL_109:
              _InterlockedAnd((volatile signed __int32 *)v47, 0xFFFFFF7F);
              v11 = (*((_DWORD *)v37 + 5))-- == 1;
              CurrentPrcb = (struct _KPRCB *)v51;
              if ( v11 )
                goto LABEL_69;
              goto LABEL_87;
            }
            v19 = KxWaitForLockChainValid(a3);
          }
          *a3 = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
          goto LABEL_29;
        }
        if ( *(_DWORD *)(BugCheckParameter1 + 72) )
        {
          v15 = *(_QWORD **)(BugCheckParameter1 + 32);
          *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
          v16 = *(_DWORD *)(BugCheckParameter1 + 72);
          *(_DWORD *)(BugCheckParameter1 + 72) = 0;
        }
        else
        {
LABEL_17:
          v15 = 0LL;
          v16 = 0;
        }
        v60 = v15;
        goto LABEL_19;
      }
    }
    else
    {
      v12 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( v12 )
    {
      if ( (v10 & 1) != 0 )
      {
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIo(v12, BugCheckParameter2);
        *(_DWORD *)(v8 + 8) &= ~1u;
      }
      if ( (*(_DWORD *)(v8 + 8) & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 1804));
        *(_DWORD *)(v8 + 8) &= ~4u;
      }
      if ( (*(_DWORD *)(v8 + 8) & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v12);
        *(_DWORD *)(v8 + 8) &= ~2u;
      }
    }
    goto LABEL_14;
  }
  v14 = *(_DWORD *)(BugCheckParameter1 + 68);
  v23 = 65618;
  v24 = v9 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
    goto LABEL_53;
  }
  _m_prefetchw(a3);
  v30 = (__int64)*a3;
  if ( *a3 )
    goto LABEL_83;
  if ( a3 != (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
  {
    v30 = KxWaitForLockChainValid(a3);
LABEL_83:
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v30 + 8), 1uLL);
  }
LABEL_53:
  _enable();
LABEL_32:
  __incgsdword(0x6370u);
  if ( v5 )
    PerfLogExecutiveResourceRelease(v23, BugCheckParameter1, v24, v14);
}
