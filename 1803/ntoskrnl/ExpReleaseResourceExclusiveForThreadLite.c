/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x140103050
 * Callers:
 *     ExpReleaseResourceForThreadLite @ 0x14005E960 (ExpReleaseResourceForThreadLite.c)
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     ExReleaseResourceForThreadLite @ 0x1400AA7B0 (ExReleaseResourceForThreadLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1401027C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiSignalThread @ 0x14002F9B0 (KiSignalThread.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiRemoveBoostThread @ 0x1400EE080 (KiRemoveBoostThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1402B1954 (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 **a3)
{
  bool v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // edi
  int v8; // eax
  signed __int64 v9; // rdi
  unsigned __int8 v10; // di
  unsigned int v11; // r13d
  int v12; // ecx
  int v13; // ecx
  char v14; // al
  int v15; // r12d
  __int64 v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  int v20; // edi
  char v21; // r14
  unsigned int v22; // ebp
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _KPRCB *v25; // r11
  volatile signed __int32 *v26; // rax
  volatile signed __int32 *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 *v30; // rcx
  char v31; // al
  struct _KPRCB *v32; // rdx
  __int64 v33; // rax
  _DWORD *v34; // rcx
  char v35; // r10
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  bool v38; // zf
  char v39; // al
  volatile signed __int32 *v40; // rdx
  int v41; // edx
  int v42; // eax
  volatile signed __int32 *v43; // rax
  __int64 v44; // r8
  volatile signed __int32 **v45; // rcx
  volatile signed __int32 *v46; // r13
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v52; // r9
  __int64 v53; // r10
  _QWORD *v54; // r8
  __int64 v55; // rcx
  char v56; // al
  int v57; // r10d
  __int64 *v58; // r9
  volatile signed __int32 *v59; // [rsp+30h] [rbp-98h]
  volatile signed __int32 *v60; // [rsp+38h] [rbp-90h]
  __int64 i; // [rsp+40h] [rbp-88h]
  __int64 v62; // [rsp+48h] [rbp-80h]
  __int64 v63; // [rsp+50h] [rbp-78h]
  volatile signed __int32 *v64; // [rsp+58h] [rbp-70h]
  __int64 v65; // [rsp+60h] [rbp-68h]
  struct _KPRCB *v66; // [rsp+60h] [rbp-68h]
  int v67; // [rsp+68h] [rbp-60h] BYREF
  int v68; // [rsp+6Ch] [rbp-5Ch] BYREF
  int v69; // [rsp+70h] [rbp-58h]
  __int64 v70; // [rsp+78h] [rbp-50h]
  __int64 v71; // [rsp+80h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+88h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h]
  __int64 v74; // [rsp+D0h] [rbp+8h]
  unsigned int v75; // [rsp+E8h] [rbp+20h]

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
        v8 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v8 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 1804));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
        v8 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v8 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v9);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
      }
    }
LABEL_13:
    v10 = 0;
    *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
    v11 = *(_DWORD *)(BugCheckParameter1 + 68);
    v75 = v11;
    if ( *(_DWORD *)(BugCheckParameter1 + 72) )
    {
      v43 = *(volatile signed __int32 **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v41 = *(_DWORD *)(BugCheckParameter1 + 72);
      v60 = v43;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      if ( !v41 )
        goto LABEL_16;
    }
    else
    {
      v12 = *(_DWORD *)(BugCheckParameter1 + 76);
      v60 = 0LL;
      if ( !v12 )
      {
        *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
LABEL_16:
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
        v13 = 0;
LABEL_17:
        *(_DWORD *)(BugCheckParameter1 + 64) = v13;
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
        v14 = *(_BYTE *)(BugCheckParameter1 + 26);
        v15 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        v69 = v15;
        if ( v14 < 0 )
        {
          v42 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = 1LL;
          *(_DWORD *)(BugCheckParameter1 + 56) = v42 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
          goto LABEL_25;
        }
        _m_prefetchw(a3);
        v16 = (__int64)*a3;
        if ( !*a3 )
        {
          if ( a3 == (volatile signed __int64 **)_InterlockedCompareExchange64(a3[1], 0LL, (signed __int64)a3) )
          {
LABEL_25:
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v47 = SchedulerAssist[5] - 1;
                SchedulerAssist[5] = v47;
                if ( !v47 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
                  KiPerformUnboostKick(CurrentPrcb);
              }
            }
            _enable();
            result = v10;
            v20 = 1;
            v21 = 2 * result + 1;
            if ( !v60 )
              goto LABEL_27;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v25 = KeGetCurrentPrcb();
            v26 = v60;
            for ( i = (__int64)v25; ; v25 = (struct _KPRCB *)i )
            {
              v27 = v26;
              v59 = v26;
              v26 = *(volatile signed __int32 **)v26;
              v67 = 0;
              v64 = v26;
              if ( _interlockedbittestandset(v27 + 4, 7u) )
              {
                v46 = v27;
                do
                {
                  do
                    KeYieldProcessorEx(&v67);
                  while ( (*((_DWORD *)v46 + 4) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset(v46 + 4, 7u) );
                v11 = v75;
                v27 = v59;
                v25 = (struct _KPRCB *)i;
                v26 = v64;
              }
              *((_DWORD *)v27 + 5) = 1;
              v28 = *((_QWORD *)v27 + 3);
              if ( (volatile signed __int32 *)v28 != v27 + 6 )
                break;
LABEL_50:
              _InterlockedAnd(v27 + 4, 0xFFFFFF7F);
              if ( v26 == v60 )
              {
                v39 = KiRemoveBoostThread(i, *(_QWORD *)(i + 8));
                if ( v15 )
                {
                  v20 = 2;
                  if ( v39 > (char)v15 )
                    LOBYTE(v15) = v39;
                }
                if ( (v21 & 2) != 0 && v20 == 1 )
                  LOBYTE(v15) = 1;
                result = KiExitDispatcher(i, 0, v20, v15, CurrentIrql);
LABEL_27:
                v22 = 65570;
                v7 = 0;
                goto LABEL_28;
              }
            }
            while ( 1 )
            {
              v29 = *(_QWORD *)v28;
              v30 = *(__int64 **)(v28 + 8);
              v63 = v28;
              v71 = v29;
              if ( *(_QWORD *)(v29 + 8) != v28 || *v30 != v28 )
                __fastfail(3u);
              *v30 = v29;
              *(_QWORD *)(v29 + 8) = v30;
              v31 = *(_BYTE *)(v28 + 16);
              if ( v31 != 1 )
                break;
              v32 = KeGetCurrentPrcb();
              v33 = *(_QWORD *)(v28 + 24);
              v70 = *(unsigned __int16 *)(v28 + 18);
              v34 = v32->SchedulerAssist;
              v62 = v33;
              v65 = (__int64)v32;
              v68 = 0;
              if ( v34 )
              {
                if ( v32->NestingLevel <= 1u )
                {
                  v48 = v34[5];
                  v34[5] = v48 + 1;
                  if ( v48 == -1 && !*((_BYTE *)v34 + 25) && !*((_BYTE *)v34 + 27) )
                    KiPerformUnboostKick(v32);
                }
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 64), 0LL) )
              {
                KiSetVpThreadSpinLockCount(v65, 0);
                do
                  KeYieldProcessorEx(&v68);
                while ( *(_QWORD *)(v62 + 64) );
                KiSetVpThreadSpinLockCount(v65, 1);
              }
              v15 = v69;
              v11 = v75;
              if ( *(_BYTE *)(v62 + 388) == 5 )
                v35 = KiSignalThread(i, v62, v70, v63);
              else
                v35 = 0;
              *(_QWORD *)(v62 + 64) = 0LL;
              v36 = KeGetCurrentPrcb();
              v37 = v36->SchedulerAssist;
              if ( v37 )
              {
                if ( v36->NestingLevel <= 1u )
                {
                  v49 = v37[5] - 1;
                  v37[5] = v49;
                  if ( !v49 && !*((_BYTE *)v37 + 25) && !*((_BYTE *)v37 + 27) )
                    KiPerformUnboostKick(v36);
                }
              }
              ++*(_BYTE *)(v63 + 17);
              v27 = v59;
              if ( v35 )
              {
                v38 = (*((_DWORD *)v59 + 5))-- == 1;
                if ( v38 )
                {
LABEL_49:
                  v26 = v64;
                  goto LABEL_50;
                }
              }
LABEL_125:
              v28 = v71;
              if ( (volatile signed __int32 *)v71 == v27 + 6 )
                goto LABEL_49;
              v25 = (struct _KPRCB *)i;
            }
            if ( v31 != 2 )
            {
              KiTryUnwaitThread((__int64)v25, v28, 256LL, 0LL);
              v27 = v59;
              goto LABEL_125;
            }
            *(_BYTE *)(v28 + 17) = 5;
            v74 = *(_QWORD *)(v28 + 24);
            *(_QWORD *)v28 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v66 = KeGetCurrentPrcb();
            CurrentThread = (__int64)v66->CurrentThread;
            v70 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v52, v53, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v74);
            v54 = (_QWORD *)(v74 + 8);
            v55 = v74;
            if ( (_QWORD *)*v54 != v54
              && *(_DWORD *)(v74 + 40) < *(_DWORD *)(v74 + 44)
              && (*(_QWORD *)(v70 + 232) != v74 || *(_BYTE *)(v70 + 643) != 15) )
            {
              v56 = KiWakeQueueWaiter((__int64)v66, v74, v63);
              v55 = v74;
              if ( v56 )
                goto LABEL_122;
              v54 = (_QWORD *)(v74 + 8);
            }
            v57 = *(_DWORD *)(v55 + 4);
            *(_DWORD *)(v55 + 4) = v57 + 1;
            v58 = *(__int64 **)(v55 + 32);
            if ( *v58 != v55 + 24 )
              __fastfail(3u);
            *(_QWORD *)v63 = v55 + 24;
            *(_QWORD *)(v63 + 8) = v58;
            *v58 = v63;
            *(_QWORD *)(v55 + 32) = v63;
            if ( !v57 && (_QWORD *)*v54 != v54 )
            {
              KiWakeOtherQueueWaiters((__int64)v66, v55);
              v55 = v74;
            }
LABEL_122:
            _InterlockedAnd((volatile signed __int32 *)v55, 0xFFFFFF7F);
            v27 = v59;
            v38 = (*((_DWORD *)v59 + 5))-- == 1;
            if ( v38 )
              goto LABEL_49;
            goto LABEL_125;
          }
          v16 = KxWaitForLockChainValid((__int64 *)a3);
        }
        *a3 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
        goto LABEL_25;
      }
      v40 = *(volatile signed __int32 **)(BugCheckParameter1 + 40);
      if ( v40 )
      {
        if ( *(volatile signed __int32 **)v40 == v40 )
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = *(_QWORD *)v40;
          v44 = *(_QWORD *)v40;
          v45 = (volatile signed __int32 **)*((_QWORD *)v40 + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)v40 + 8LL) != v40 || *v45 != v40 )
            __fastfail(3u);
          *v45 = (volatile signed __int32 *)v44;
          *(_QWORD *)(v44 + 8) = v45;
        }
        *((_QWORD *)v40 + 1) = v40;
        *(_QWORD *)v40 = v40;
        v12 = *(_DWORD *)(BugCheckParameter1 + 76);
        v60 = v40;
      }
      v41 = 1;
      v10 = 1;
      *(_DWORD *)(BugCheckParameter1 + 76) = v12 - 1;
    }
    v13 = v41 + *(_DWORD *)(BugCheckParameter1 + 64) - 1;
    goto LABEL_17;
  }
  v22 = 65586;
  v11 = *(_DWORD *)(BugCheckParameter1 + 68);
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
        goto LABEL_34;
      result = KxWaitForLockChainValid((__int64 *)a3);
    }
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_34:
  v23 = KeGetCurrentPrcb();
  v24 = v23->SchedulerAssist;
  if ( v24 )
  {
    if ( v23->NestingLevel <= 1u )
    {
      result = (unsigned int)(v24[5] - 1);
      v24[5] = result;
      if ( !(_DWORD)result )
      {
        result = *((unsigned __int8 *)v24 + 25);
        if ( !(_BYTE)result && !*((_BYTE *)v24 + 27) )
          result = KiPerformUnboostKick(v23);
      }
    }
  }
  _enable();
LABEL_28:
  __incgsdword(0x636Cu);
  if ( v5 )
    return PerfLogExecutiveResourceRelease(v22, BugCheckParameter1, v7, v11);
  return result;
}
