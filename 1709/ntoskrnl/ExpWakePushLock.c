/*
 * XREFs of ExpWakePushLock @ 0x1400A7F10
 * Callers:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExpOptimizePushLockList @ 0x14005F784 (ExpOptimizePushLockList.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400A7EC0 (ExfReleasePushLockExclusive.c)
 *     ExfReleasePushLockSharedEx @ 0x140103A5C (ExfReleasePushLockSharedEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

signed __int64 __fastcall ExpWakePushLock(volatile signed __int64 *a1, signed __int64 a2)
{
  int v2; // r9d
  _QWORD *v3; // r10
  __int64 v4; // rbx
  __int64 v5; // rax
  bool v6; // zf
  signed __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // esi
  struct _KPRCB *CurrentPrcb; // r13
  int v12; // eax
  _QWORD *v13; // r15
  __int64 v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // al
  char v18; // bp
  __int64 v19; // rsi
  char v20; // cl
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbp
  signed __int64 result; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rsi
  _QWORD *v29; // rbp
  unsigned __int8 IsThreadRunning; // al
  __int64 v31; // r9
  int v32; // r8d
  __int64 *v33; // rdx
  _QWORD *v34; // r15
  _QWORD *v35; // r14
  __int64 v36; // rsi
  char v37; // al
  __int64 v38; // r8
  __int64 v39; // rbp
  struct _KPRCB *v40; // rax
  _KTHREAD *v41; // r12
  unsigned __int8 v42; // al
  _QWORD *v43; // rcx
  __int64 v44; // r12
  int v45; // r8d
  __int64 *v46; // rdx
  __int64 v47; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v48; // [rsp+30h] [rbp-58h]
  __int64 v49; // [rsp+30h] [rbp-58h]
  signed __int64 CurrentIrql; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  unsigned __int8 v52; // [rsp+48h] [rbp-40h]
  int v53; // [rsp+98h] [rbp+10h] BYREF
  int v54; // [rsp+A0h] [rbp+18h] BYREF
  int v55; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 1;
  while ( 1 )
  {
    if ( (a2 & 1) != 0 )
    {
      do
      {
        result = _InterlockedCompareExchange64(a1, a2 - 4, a2);
        v6 = a2 == result;
        a2 = result;
        if ( v6 )
          return result;
      }
      while ( (result & 1) != 0 );
    }
    v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v4 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
    if ( !v4 )
    {
      do
      {
        v25 = v3;
        v3 = (_QWORD *)v3[3];
        v3[5] = v25;
        v4 = v3[4];
      }
      while ( !v4 );
      if ( v3 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v4;
    }
    if ( (*(_DWORD *)(v4 + 52) & 1) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( v5 )
        break;
    }
    v7 = _InterlockedCompareExchange64(a1, 0LL, a2);
    v6 = a2 == v7;
    a2 = v7;
    if ( v6 )
      goto LABEL_7;
  }
  *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v5;
  *(_QWORD *)(v4 + 40) = 0LL;
  _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
  v2 = 0;
LABEL_7:
  LOBYTE(CurrentIrql) = 2;
  if ( *(_QWORD *)(v4 + 40) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( !v2 )
  {
    v8 = *(_QWORD *)(v4 + 56);
    if ( v8 )
      KiAbApplyWakeupBoost((unsigned int)KeGetCurrentThread()->Priority, v8, 0LL);
  }
  while ( 2 )
  {
    v9 = *(_QWORD *)(v4 + 40);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 52), 1u) )
    {
      if ( (*(_BYTE *)v4 & 0x7F) != 0 )
      {
        v10 = 0;
        goto LABEL_15;
      }
      if ( *(_DWORD *)(v4 + 4) != 1 )
      {
        v10 = 1;
LABEL_15:
        v52 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        v53 = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)v4, 7u) )
        {
          do
            KeYieldProcessorEx(&v53);
          while ( (*(_DWORD *)v4 & 0x80u) != 0 );
        }
        v12 = *(_DWORD *)(v4 + 4);
        *(_DWORD *)(v4 + 4) = 1;
        if ( !v12 )
        {
          if ( !v10 )
          {
            v13 = *(_QWORD **)(v4 + 8);
            if ( v13 != (_QWORD *)(v4 + 8) )
            {
              while ( 1 )
              {
                v14 = (__int64)v13;
                v13 = (_QWORD *)*v13;
                v15 = *(_QWORD *)v14;
                v16 = *(_QWORD **)(v14 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
                  __fastfail(3u);
                *v16 = v15;
                *(_QWORD *)(v15 + 8) = v16;
                v17 = *(_BYTE *)(v14 + 16);
                if ( v17 == 1 )
                {
                  v18 = 0;
                  v19 = *(_QWORD *)(v14 + 24);
                  v47 = *(unsigned __int16 *)(v14 + 18);
                  v54 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v54);
                    while ( *(_QWORD *)(v19 + 64) );
                  }
                  if ( *(_BYTE *)(v19 + 388) == 5 )
                  {
                    v20 = *(_BYTE *)(v19 + 112);
                    v18 = 0;
                    v21 = v20 & 7;
                    if ( v21 == 1 || v21 == 4 )
                    {
                      v22 = *(_QWORD *)(v19 + 232);
                      if ( v22 )
                      {
                        if ( (*(_BYTE *)v22 & 0x7F) == 0x15 )
                        {
                          *(_DWORD *)(v19 + 540) = (unsigned __int8)*(_DWORD *)(v19 + 540);
                          _InterlockedIncrement((volatile signed __int32 *)(v22
                                                                          + 4LL * *(unsigned int *)(v19 + 540)
                                                                          + 536));
                        }
                        else
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v22 + 40));
                        }
                      }
                      v23 = *(_QWORD *)(v19 + 712);
                      if ( v23 )
                      {
                        v55 = 0;
                        while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 22800), 0LL) )
                        {
                          do
                            KeYieldProcessorEx(&v55);
                          while ( *(_QWORD *)(v23 + 22800) );
                        }
                        if ( *(_QWORD *)(v19 + 712) )
                        {
                          v26 = *(_QWORD *)(v19 + 216);
                          v27 = *(_QWORD **)(v19 + 224);
                          if ( *(_QWORD *)(v26 + 8) != v19 + 216 || *v27 != v19 + 216 )
                            __fastfail(3u);
                          *v27 = v26;
                          *(_QWORD *)(v26 + 8) = v27;
                          *(_QWORD *)(v19 + 712) = 0LL;
                        }
                        _InterlockedAnd64((volatile signed __int64 *)(v23 + 22800), 0LL);
                      }
                      *(_BYTE *)(v19 + 388) = 7;
                      v18 = 1;
                      *(_QWORD *)(v19 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
                      CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v19 + 216);
                      *(_QWORD *)(v19 + 200) = v47;
                    }
                    else if ( (*(_BYTE *)(v19 + 112) & 7) != 0 )
                    {
                      if ( v21 == 5 )
                      {
                        *(_BYTE *)(v19 + 112) = v20 & 0xF8 | 6;
                      }
                      else if ( v21 == 3 )
                      {
                        *(_BYTE *)(v14 + 17) = 2;
                      }
                    }
                    else
                    {
                      v18 = 1;
                      *(_BYTE *)(v19 + 112) = v20 & 0xF8 | 2;
                      *(_QWORD *)(v19 + 200) = v47;
                      *(_BYTE *)(v14 + 17) = 0;
                    }
                  }
                  *(_QWORD *)(v19 + 64) = 0LL;
                  ++*(_BYTE *)(v14 + 17);
                  if ( v18 )
                  {
                    v6 = (*(_DWORD *)(v4 + 4))-- == 1;
                    if ( v6 )
                      goto LABEL_33;
                  }
                }
                else if ( v17 == 2 )
                {
                  *(_BYTE *)(v14 + 17) = 5;
                  v28 = *(_QWORD *)(v14 + 24);
                  *(_QWORD *)v14 = 0LL;
                  v29 = (_QWORD *)(v28 + 8);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v48 = KeGetCurrentPrcb();
                  CurrentThread = v48->CurrentThread;
                  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                  {
                    IsThreadRunning = KeIsThreadRunning(v48->CurrentThread);
                    EtwTraceEnqueueWork(v31, v14, IsThreadRunning);
                  }
                  KiAcquireKobjectLockSafe(v28);
                  if ( (_QWORD *)*v29 == v29
                    || *(_DWORD *)(v28 + 40) >= *(_DWORD *)(v28 + 44)
                    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v28 && CurrentThread->WaitReason == 15
                    || !KiWakeQueueWaiter((__int64)v48, v28, v14) )
                  {
                    v32 = *(_DWORD *)(v28 + 4);
                    *(_DWORD *)(v28 + 4) = v32 + 1;
                    v33 = *(__int64 **)(v28 + 32);
                    if ( *v33 != v28 + 24 )
                      __fastfail(3u);
                    *(_QWORD *)v14 = v28 + 24;
                    *(_QWORD *)(v14 + 8) = v33;
                    *v33 = v14;
                    *(_QWORD *)(v28 + 32) = v14;
                    if ( !v32 && (_QWORD *)*v29 != v29 )
                      KiWakeOtherQueueWaiters((__int64)v48, v28);
                  }
                  _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
                  v6 = (*(_DWORD *)(v4 + 4))-- == 1;
                  if ( v6 )
                    goto LABEL_33;
                }
                else
                {
                  KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
                }
                if ( v13 == (_QWORD *)(v4 + 8) )
                  goto LABEL_33;
              }
            }
            goto LABEL_33;
          }
          v34 = *(_QWORD **)(v4 + 8);
          v35 = (_QWORD *)(v4 + 8);
          if ( v34 == (_QWORD *)(v4 + 8) )
          {
LABEL_108:
            *(_QWORD *)(v4 + 16) = v4 + 8;
            *v35 = v35;
            goto LABEL_33;
          }
          while ( 2 )
          {
            v36 = (__int64)v34;
            v34 = (_QWORD *)*v34;
            v37 = *(_BYTE *)(v36 + 16);
            if ( v37 == 1 )
            {
              v38 = *(unsigned __int16 *)(v36 + 18);
              goto LABEL_106;
            }
            if ( v37 == 2 )
            {
              *(_BYTE *)(v36 + 17) = 5;
              v39 = *(_QWORD *)(v36 + 24);
              *(_QWORD *)v36 = 0LL;
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v40 = KeGetCurrentPrcb();
              v49 = (__int64)v40;
              v41 = v40->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                v42 = KeIsThreadRunning(v40->CurrentThread);
                EtwTraceEnqueueWork(v41, v36, v42);
              }
              KiAcquireKobjectLockSafe(v39);
              v43 = (_QWORD *)(v39 + 8);
              if ( (_QWORD *)*v43 == v43
                || *(_DWORD *)(v39 + 40) >= *(_DWORD *)(v39 + 44)
                || v41->Queue == (_DISPATCHER_HEADER *volatile)v39 && v41->WaitReason == 15 )
              {
                v44 = v49;
LABEL_100:
                v45 = *(_DWORD *)(v39 + 4);
                *(_DWORD *)(v39 + 4) = v45 + 1;
                v46 = *(__int64 **)(v39 + 32);
                if ( *v46 != v39 + 24 )
                  __fastfail(3u);
                *(_QWORD *)v36 = v39 + 24;
                *(_QWORD *)(v36 + 8) = v46;
                *v46 = v36;
                *(_QWORD *)(v39 + 32) = v36;
                if ( !v45 && (_QWORD *)*v43 != v43 )
                  KiWakeOtherQueueWaiters(v44, v39);
              }
              else
              {
                v44 = v49;
                if ( !KiWakeQueueWaiter(v49, v39, v36) )
                {
                  v43 = (_QWORD *)(v39 + 8);
                  goto LABEL_100;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v39, 0xFFFFFF7F);
            }
            else
            {
              v38 = 256LL;
LABEL_106:
              KiTryUnwaitThread((__int64)CurrentPrcb, v36, v38, 0LL);
            }
            if ( v34 == v35 )
              goto LABEL_108;
            continue;
          }
        }
LABEL_33:
        _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
        KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, v52);
      }
    }
    v4 = v9;
    if ( v9 )
      continue;
    break;
  }
  result = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
  {
    result = (unsigned __int8)CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
