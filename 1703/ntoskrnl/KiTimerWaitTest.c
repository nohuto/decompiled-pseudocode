/*
 * XREFs of KiTimerWaitTest @ 0x1400E43F0
 * Callers:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KiProcessExpiredTimerList @ 0x1400E40B0 (KiProcessExpiredTimerList.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x140143C38 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiInsertTimerTable @ 0x1400EC830 (KiInsertTimerTable.c)
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

ULONG_PTR __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rcx
  ULONG_PTR v5; // rsi
  unsigned __int8 v7; // r15
  BOOL v8; // ebp
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // r12
  char v12; // al
  __int64 v13; // rbp
  char v14; // cl
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v21; // rbx
  __int64 v22; // r14
  int v23; // ecx
  _QWORD *v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  char v28; // al
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // r12
  _QWORD *v32; // rcx
  __int64 v33; // rbp
  _QWORD *v34; // rcx
  int v35; // r8d
  __int64 *v36; // rdx
  unsigned int v37; // ecx
  unsigned __int8 IsThreadRunning; // al
  __int64 v39; // r9
  unsigned __int8 v40; // al
  __int64 v41; // r9
  int v42; // r8d
  __int64 *v43; // rdx
  __int64 v44; // [rsp+30h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-78h]
  struct _KPRCB *v46; // [rsp+30h] [rbp-78h]
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-70h]
  _KTHREAD *v48; // [rsp+38h] [rbp-70h]
  int v49; // [rsp+48h] [rbp-60h]
  int v51; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v52; // [rsp+C0h] [rbp+18h]
  int v53; // [rsp+C8h] [rbp+20h] BYREF

  v52 = a3;
  v3 = a1;
  v4 = *(int *)(a2 + 60);
  v5 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a2 + 48), KiWaitNever));
  v7 = -1;
  v8 = (*(_BYTE *)a2 & 0x7F) == 8;
  if ( (_DWORD)v4 )
  {
    v7 = 0;
    v21 = -10000 * v4;
    if ( *(_BYTE *)(v3 + 11882) )
    {
      if ( ++*(_DWORD *)(v3 + 23464) >= 0xBB8u )
      {
        v37 = *(_DWORD *)(v3 + 23468);
        *(_DWORD *)(v3 + 23464) = 0;
        if ( v37 < 0x5F5E100 )
          *(_DWORD *)(v3 + 23468) = KeTimeIncrement + v37;
      }
      v21 -= *(unsigned int *)(v3 + 23468);
    }
    if ( v21 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v22 = 0LL;
    v49 = *(_DWORD *)a2;
    v23 = *(int *)a2 >> 8;
    if ( (*(_DWORD *)a2 & 0xFC00) != 0 )
      v22 = (unsigned __int8)(v23 & 0xFC) << 16;
    HIBYTE(v49) = 64;
    BYTE1(v49) = v23 & 0xFE;
    do
    {
      *(_QWORD *)(a2 + 24) -= v21;
      BYTE2(v49) = (unsigned __int64)(v22 + *(_QWORD *)(a2 + 24)) >> 18;
      *(_DWORD *)a2 = v49;
    }
    while ( !(unsigned __int8)KiInsertTimerTable(v3, a2, v5, BYTE2(v49), 0LL) );
  }
  *(_DWORD *)(a2 + 4) = 1;
  if ( !v8 )
  {
    v24 = *(_QWORD **)(a2 + 8);
    if ( v24 == (_QWORD *)(a2 + 8) )
      goto LABEL_22;
    while ( 1 )
    {
      v25 = (__int64)v24;
      v24 = (_QWORD *)*v24;
      v26 = *(_QWORD *)v25;
      v27 = *(_QWORD **)(v25 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 || *v27 != v25 )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v28 = *(_BYTE *)(v25 + 16);
      if ( v28 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(v3, v25, *(unsigned __int16 *)(v25 + 18), 0LL) )
        {
          v29 = (*(_DWORD *)(a2 + 4))-- == 1;
          if ( v29 )
            goto LABEL_22;
        }
      }
      else
      {
        if ( v28 == 2 )
        {
          *(_BYTE *)(v25 + 17) = 5;
          v31 = *(_QWORD *)(v25 + 24);
          *(_QWORD *)v25 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
            EtwTraceEnqueueWork(v39, v25, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v31);
          v32 = (_QWORD *)(v31 + 8);
          if ( (_QWORD *)*v32 != v32
            && *(_DWORD *)(v31 + 40) < *(_DWORD *)(v31 + 44)
            && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v31 || CurrentThread->WaitReason != 15) )
          {
            if ( KiWakeQueueWaiter((__int64)CurrentPrcb, v31, v25) )
              goto LABEL_58;
            v32 = (_QWORD *)(v31 + 8);
          }
          v35 = *(_DWORD *)(v31 + 4);
          *(_DWORD *)(v31 + 4) = v35 + 1;
          v36 = *(__int64 **)(v31 + 32);
          if ( *v36 != v31 + 24 )
            __fastfail(3u);
          *(_QWORD *)v25 = v31 + 24;
          *(_QWORD *)(v25 + 8) = v36;
          *v36 = v25;
          *(_QWORD *)(v31 + 32) = v25;
          if ( !v35 && (_QWORD *)*v32 != v32 )
            KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v31);
LABEL_58:
          _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
          v29 = (*(_DWORD *)(a2 + 4))-- == 1;
          if ( v29 )
            goto LABEL_22;
          goto LABEL_86;
        }
        KiTryUnwaitThread(v3, v25, 256LL, 0LL);
      }
LABEL_86:
      if ( v24 == (_QWORD *)(a2 + 8) )
        goto LABEL_22;
    }
  }
  v9 = *(_QWORD **)(a2 + 8);
  v10 = (_QWORD *)(a2 + 8);
  if ( v9 != (_QWORD *)(a2 + 8) )
  {
    while ( 1 )
    {
      v11 = (__int64)v9;
      v9 = (_QWORD *)*v9;
      v12 = *(_BYTE *)(v11 + 16);
      if ( v12 == 1 )
      {
        v13 = *(_QWORD *)(v11 + 24);
        v44 = *(unsigned __int16 *)(v11 + 18);
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v51);
          while ( *(_QWORD *)(v13 + 64) );
        }
        if ( *(_BYTE *)(v13 + 388) == 5 )
        {
          v14 = *(_BYTE *)(v13 + 112);
          v15 = v14 & 7;
          if ( v15 == 1 || v15 == 4 )
          {
            v16 = *(_QWORD *)(v13 + 232);
            if ( v16 )
            {
              if ( (*(_BYTE *)v16 & 0x7F) == 0x15 )
              {
                v30 = (unsigned __int8)*(_DWORD *)(v13 + 540);
                *(_DWORD *)(v13 + 540) = v30;
                _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v30 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v16 + 40));
              }
            }
            v17 = *(_QWORD *)(v13 + 712);
            if ( v17 )
            {
              v53 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 22800), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v53);
                while ( *(_QWORD *)(v17 + 22800) );
              }
              if ( *(_QWORD *)(v13 + 712) )
              {
                v18 = *(_QWORD *)(v13 + 216);
                v19 = *(_QWORD **)(v13 + 224);
                if ( *(_QWORD *)(v18 + 8) != v13 + 216 || *v19 != v13 + 216 )
                  __fastfail(3u);
                *v19 = v18;
                *(_QWORD *)(v18 + 8) = v19;
                *(_QWORD *)(v13 + 712) = 0LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 22800), 0LL);
            }
            v3 = a1;
            *(_BYTE *)(v13 + 388) = 7;
            *(_QWORD *)(v13 + 216) = *(_QWORD *)(a1 + 11528);
            *(_QWORD *)(a1 + 11528) = v13 + 216;
            *(_QWORD *)(v13 + 200) = v44;
          }
          else if ( (*(_BYTE *)(v13 + 112) & 7) != 0 )
          {
            if ( v15 == 5 )
            {
              *(_BYTE *)(v13 + 112) = v14 & 0xF8 | 6;
            }
            else if ( v15 == 3 )
            {
              *(_BYTE *)(v11 + 17) = 2;
            }
          }
          else
          {
            *(_BYTE *)(v13 + 112) = v14 & 0xF8 | 2;
            *(_QWORD *)(v13 + 200) = v44;
            *(_BYTE *)(v11 + 17) = 0;
          }
        }
        *(_QWORD *)(v13 + 64) = 0LL;
        ++*(_BYTE *)(v11 + 17);
        goto LABEL_20;
      }
      if ( v12 != 2 )
      {
        KiTryUnwaitThread(v3, v11, 256LL, 0LL);
        goto LABEL_20;
      }
      *(_BYTE *)(v11 + 17) = 5;
      v33 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)v11 = 0LL;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v46 = KeGetCurrentPrcb();
      v48 = v46->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v40 = KeIsThreadRunning(v46->CurrentThread);
        EtwTraceEnqueueWork(v41, v11, v40);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v33);
      v34 = (_QWORD *)(v33 + 8);
      if ( (_QWORD *)*v34 == v34
        || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
        || v48->Queue == (_DISPATCHER_HEADER *volatile)v33 && v48->WaitReason == 15 )
      {
        goto LABEL_98;
      }
      if ( !KiWakeQueueWaiter((__int64)v46, v33, v11) )
        break;
LABEL_71:
      _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
LABEL_20:
      if ( v9 == v10 )
        goto LABEL_21;
    }
    v34 = (_QWORD *)(v33 + 8);
LABEL_98:
    v42 = *(_DWORD *)(v33 + 4);
    *(_DWORD *)(v33 + 4) = v42 + 1;
    v43 = *(__int64 **)(v33 + 32);
    if ( *v43 != v33 + 24 )
      __fastfail(3u);
    *(_QWORD *)v11 = v33 + 24;
    *(_QWORD *)(v11 + 8) = v43;
    *v43 = v11;
    *(_QWORD *)(v33 + 32) = v11;
    if ( !v42 && (_QWORD *)*v34 != v34 )
      KiWakeOtherQueueWaiters((__int64)v46, v33);
    goto LABEL_71;
  }
LABEL_21:
  *(_QWORD *)(a2 + 16) = a2 + 8;
  *v10 = v10;
LABEL_22:
  if ( v5 )
  {
    if ( !v52
      || KiSerializeTimerExpiration && *(_WORD *)(v5 + 2) >= 0x280u
      || *(_BYTE *)v5 == 26 && *(_BYTE *)(v3 + 11880) )
    {
      KiInsertQueueDpc(v5, v7);
      return 0LL;
    }
    *(_QWORD *)(v3 + 11808) = v5;
    if ( (*(_QWORD *)(v3 + 200) & *(_QWORD *)(v5 + 16)) == 0LL )
      _interlockedbittestandset64((volatile signed __int32 *)(v5 + 16), *(unsigned __int8 *)(v3 + 209));
  }
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v7 << 24) | 0x80));
  return v5;
}
