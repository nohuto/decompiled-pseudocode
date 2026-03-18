/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x140102B20
 * Callers:
 *     ExpReleaseResourceForThreadLite @ 0x14005E960 (ExpReleaseResourceForThreadLite.c)
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     ExReleaseResourceForThreadLite @ 0x1400AA7B0 (ExReleaseResourceForThreadLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1401027C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveBoostThread @ 0x1400EE080 (KiRemoveBoostThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1402B1954 (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 **a3)
{
  bool v5; // r15
  unsigned int v6; // ecx
  __int64 v7; // rax
  ULONG_PTR v8; // rsi
  unsigned int v9; // edi
  signed __int64 v10; // rbp
  int v11; // eax
  char v12; // di
  int v13; // r10d
  int v14; // edx
  volatile signed __int32 *v15; // rax
  int v16; // ecx
  bool v17; // zf
  int v18; // r13d
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v22; // esi
  char v23; // bp
  unsigned int v24; // ebp
  __int64 result; // rax
  unsigned int v26; // edi
  unsigned int v27; // esi
  ULONG_PTR v28; // r8
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  ULONG_PTR v31; // rbp
  unsigned __int64 v32; // r10
  ULONG_PTR v33; // rdi
  ULONG_PTR v34; // r11
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  volatile signed __int32 *v37; // rcx
  int v38; // eax
  struct _KPRCB *v39; // r12
  volatile signed __int32 *v40; // rax
  volatile signed __int32 *v41; // rdi
  volatile signed __int32 *v42; // r14
  volatile signed __int32 *v43; // rax
  __int64 v44; // rdi
  volatile signed __int32 *v45; // rax
  volatile signed __int32 **v46; // rcx
  char v47; // al
  char v48; // al
  __int64 v49; // r8
  volatile signed __int32 **v50; // rdx
  int v51; // eax
  unsigned __int8 IsThreadRunning; // al
  __int64 v53; // r9
  _QWORD *v54; // r8
  __int64 v55; // rcx
  char v56; // al
  int v57; // r9d
  __int64 *v58; // rdx
  struct _KPRCB *v59; // [rsp+38h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-58h]
  volatile signed __int32 *v61; // [rsp+48h] [rbp-50h]
  volatile signed __int32 *v62; // [rsp+50h] [rbp-48h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v65; // [rsp+A0h] [rbp+8h]
  volatile signed __int32 *v66; // [rsp+A8h] [rbp+10h]
  __int64 v67; // [rsp+B8h] [rbp+20h]

  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v6 = 0;
  else
    v6 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
  v7 = *(_QWORD *)(BugCheckParameter1 + 48);
  v8 = BugCheckParameter1 + 48;
  if ( v7 != BugCheckParameter2 )
  {
    v28 = BugCheckParameter1 + 48;
    v29 = 0LL;
    if ( v7 )
      v28 = 0LL;
    LOBYTE(v29) = v7 != 0;
    if ( !v6
      || (v30 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v6 >= *(_DWORD *)(v30 + 8)
      || (v8 = v30 + 16LL * v6, *(_QWORD *)v8 != BugCheckParameter2) )
    {
      v31 = *(_QWORD *)(BugCheckParameter1 + 16);
      v32 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v31 || (v8 = v31 + 16, v29 >= v32) )
LABEL_90:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v31, 2uLL);
      while ( 1 )
      {
        v33 = v28;
        v34 = v28;
        if ( *(_QWORD *)v8 == BugCheckParameter2 )
          break;
        if ( *(_QWORD *)v8 )
        {
          if ( ++v29 == v32 )
            goto LABEL_90;
        }
        else
        {
          v28 = v8;
          if ( v34 )
            v28 = v33;
        }
        v8 += 16LL;
        if ( v8 == v31 + 16LL * *(unsigned int *)(v31 + 8) )
          goto LABEL_90;
      }
      KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v8 - v31) >> 4;
    }
  }
  v9 = *(_DWORD *)(v8 + 8) & 7 | (8 * (*(_DWORD *)(v8 + 8) >> 3) - 8);
  *(_DWORD *)(v8 + 8) = v9;
  if ( v9 < 8 )
  {
    v10 = *(_QWORD *)v8;
    if ( (v9 & 2) != 0 )
    {
      v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v10 & 3) != 0 )
    {
LABEL_14:
      *(_QWORD *)v8 = 0LL;
      v12 = 0;
      v13 = 1;
      v65 = *(_DWORD *)(BugCheckParameter1 + 68);
      if ( *(_DWORD *)(BugCheckParameter1 + 64) > 1u )
        goto LABEL_17;
      v14 = *(_DWORD *)(BugCheckParameter1 + 76);
      if ( v14 )
      {
        v37 = *(volatile signed __int32 **)(BugCheckParameter1 + 40);
        v66 = 0LL;
        if ( v37 )
        {
          if ( *(volatile signed __int32 **)v37 == v37 )
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
          }
          else
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = *(_QWORD *)v37;
            v49 = *(_QWORD *)v37;
            v50 = (volatile signed __int32 **)*((_QWORD *)v37 + 1);
            if ( *(volatile signed __int32 **)(*(_QWORD *)v37 + 8LL) != v37 || *v50 != v37 )
              __fastfail(3u);
            *v50 = (volatile signed __int32 *)v49;
            *(_QWORD *)(v49 + 8) = v50;
          }
          *((_QWORD *)v37 + 1) = v37;
          *(_QWORD *)v37 = v37;
          v14 = *(_DWORD *)(BugCheckParameter1 + 76);
          v66 = v37;
        }
        v16 = 1;
        *(_DWORD *)(BugCheckParameter1 + 76) = v14 - 1;
        v12 = 1;
        *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
LABEL_19:
        v17 = v16 - 1 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
        *(_DWORD *)(BugCheckParameter1 + 64) += v16 - 1;
        if ( v17 )
          *(_WORD *)(BugCheckParameter1 + 24) = 0;
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
        v18 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        if ( *(char *)(BugCheckParameter1 + 26) < 0 )
        {
          v38 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = 1LL;
          *(_DWORD *)(BugCheckParameter1 + 56) = v38 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
          v13 = 1;
          goto LABEL_29;
        }
        _m_prefetchw(a3);
        v19 = (__int64)*a3;
        if ( !*a3 )
        {
          if ( a3 == (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
          {
LABEL_29:
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v51 = SchedulerAssist[5] - 1;
                SchedulerAssist[5] = v51;
                if ( !v51 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
                  KiPerformUnboostKick(CurrentPrcb);
              }
            }
            _enable();
            v22 = v13;
            v23 = 2 * v12 + 1;
            if ( !v66 )
              goto LABEL_31;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v39 = KeGetCurrentPrcb();
            v40 = v66;
            while ( 1 )
            {
              v41 = v40;
              v42 = v40 + 4;
              v62 = *(volatile signed __int32 **)v40;
              KiAcquireKobjectLockSafe(v40 + 4);
              *((_DWORD *)v41 + 5) = 1;
              v43 = (volatile signed __int32 *)*((_QWORD *)v41 + 3);
              if ( v43 != v41 + 6 )
                break;
LABEL_69:
              _InterlockedAnd(v42, 0xFFFFFF7F);
              v40 = v62;
              if ( v62 == v66 )
              {
                v48 = KiRemoveBoostThread((__int64)v39, (__int64)v39->CurrentThread);
                if ( v18 )
                {
                  v22 = 2;
                  if ( v48 > (char)v18 )
                    LOBYTE(v18) = v48;
                }
                if ( (v23 & 2) != 0 && v22 == 1 )
                  LOBYTE(v18) = 1;
                KiExitDispatcher((__int64)v39, 0, v22, v18, CurrentIrql);
LABEL_31:
                v24 = v65;
                result = 0LL;
                v26 = 0;
                v27 = 65602;
                goto LABEL_32;
              }
            }
            while ( 1 )
            {
              v44 = (__int64)v43;
              v45 = *(volatile signed __int32 **)v43;
              v61 = v45;
              v46 = *(volatile signed __int32 ***)(v44 + 8);
              if ( *((_QWORD *)v45 + 1) != v44 || *v46 != (volatile signed __int32 *)v44 )
                __fastfail(3u);
              *v46 = v45;
              *((_QWORD *)v45 + 1) = v46;
              v47 = *(_BYTE *)(v44 + 16);
              if ( v47 != 1 )
                break;
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)v39, v44, *(unsigned __int16 *)(v44 + 18), 0LL) )
              {
                v17 = (*((_DWORD *)v42 + 1))-- == 1;
                if ( v17 )
                  goto LABEL_69;
              }
LABEL_87:
              v43 = v61;
              if ( v61 == v42 + 2 )
                goto LABEL_69;
            }
            if ( v47 != 2 )
            {
              KiTryUnwaitThread((__int64)v39, v44, 256LL, 0LL);
              goto LABEL_87;
            }
            *(_BYTE *)(v44 + 17) = 5;
            v67 = *(_QWORD *)(v44 + 24);
            *(_QWORD *)v44 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v59 = KeGetCurrentPrcb();
            CurrentThread = v59->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v59->CurrentThread);
              EtwTraceEnqueueWork(v53, v44, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v67);
            v54 = (_QWORD *)(v67 + 8);
            v55 = v67;
            if ( (_QWORD *)*v54 != v54
              && *(_DWORD *)(v67 + 40) < *(_DWORD *)(v67 + 44)
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v67 || CurrentThread->WaitReason != 15) )
            {
              v56 = KiWakeQueueWaiter((__int64)v59, v67, v44);
              v55 = v67;
              if ( v56 )
                goto LABEL_117;
              v54 = (_QWORD *)(v67 + 8);
            }
            v57 = *(_DWORD *)(v55 + 4);
            *(_DWORD *)(v55 + 4) = v57 + 1;
            v58 = *(__int64 **)(v55 + 32);
            if ( *v58 != v55 + 24 )
              __fastfail(3u);
            *(_QWORD *)v44 = v55 + 24;
            *(_QWORD *)(v44 + 8) = v58;
            *v58 = v44;
            *(_QWORD *)(v55 + 32) = v44;
            if ( !v57 && (_QWORD *)*v54 != v54 )
            {
              KiWakeOtherQueueWaiters((__int64)v59, v55);
              v55 = v67;
            }
LABEL_117:
            _InterlockedAnd((volatile signed __int32 *)v55, 0xFFFFFF7F);
            v17 = (*((_DWORD *)v42 + 1))-- == 1;
            if ( v17 )
              goto LABEL_69;
            goto LABEL_87;
          }
          v19 = KxWaitForLockChainValid((__int64 *)a3);
          v13 = 1;
        }
        *a3 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
        goto LABEL_29;
      }
      if ( *(_DWORD *)(BugCheckParameter1 + 72) )
      {
        v15 = *(volatile signed __int32 **)(BugCheckParameter1 + 32);
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
      v66 = v15;
      goto LABEL_19;
    }
    if ( v10 )
    {
      if ( (v9 & 1) != 0 )
      {
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIo(v10, BugCheckParameter2);
        *(_DWORD *)(v8 + 8) &= ~1u;
        v11 = *(_DWORD *)(v8 + 8);
      }
      else
      {
        LOBYTE(v11) = v9;
      }
      if ( (v11 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1804));
        *(_DWORD *)(v8 + 8) &= ~4u;
        v11 = *(_DWORD *)(v8 + 8);
      }
      if ( (v11 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v10);
        *(_DWORD *)(v8 + 8) &= ~2u;
      }
    }
    goto LABEL_14;
  }
  v24 = *(_DWORD *)(BugCheckParameter1 + 68);
  v27 = 65618;
  v26 = v9 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
  }
  else
  {
    _m_prefetchw(a3);
    result = (__int64)*a3;
    if ( !*a3 )
    {
      result = _InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3);
      if ( a3 == (volatile signed __int64 **)result )
        goto LABEL_51;
      result = KxWaitForLockChainValid((__int64 *)a3);
    }
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_51:
  v35 = KeGetCurrentPrcb();
  v36 = v35->SchedulerAssist;
  if ( v36 )
  {
    if ( v35->NestingLevel <= 1u )
    {
      result = (unsigned int)(v36[5] - 1);
      v36[5] = result;
      if ( !(_DWORD)result )
      {
        result = *((unsigned __int8 *)v36 + 25);
        if ( !(_BYTE)result && !*((_BYTE *)v36 + 27) )
          result = KiPerformUnboostKick(v35);
      }
    }
  }
  _enable();
LABEL_32:
  __incgsdword(0x6370u);
  if ( v5 )
    return PerfLogExecutiveResourceRelease(v27, BugCheckParameter1, v26, v24);
  return result;
}
