/*
 * XREFs of KiTimerWaitTest @ 0x1401089B0
 * Callers:
 *     KiResumeThread @ 0x1400419D8 (KiResumeThread.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x14005AD00 (KeSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiProcessExpiredTimerList @ 0x140108660 (KiProcessExpiredTimerList.c)
 *     KiAdjustTimerDueTimes @ 0x140168180 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiInsertTimerTable @ 0x1400F87E0 (KiInsertTimerTable.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rax
  char v5; // bp
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rdi
  _QWORD *v9; // r14
  _QWORD *v10; // rbx
  unsigned int *v11; // rcx
  __int64 v13; // r12
  char v14; // al
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v16; // rbp
  _DWORD *SchedulerAssist; // rcx
  char v18; // cl
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r12
  struct _KPRCB *v22; // rdx
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // r14
  int v32; // ecx
  unsigned int v33; // r9d
  _QWORD *v34; // rax
  __int64 v35; // rbp
  _QWORD *v36; // rcx
  char v37; // al
  bool v38; // zf
  __int64 v39; // rbp
  _QWORD *v40; // rcx
  int v41; // r8d
  __int64 *v42; // rdx
  __int64 v43; // r12
  _QWORD *v44; // rcx
  int v45; // r8d
  __int64 *v46; // rdx
  unsigned int v47; // ecx
  unsigned __int8 v48; // al
  __int64 v49; // r9
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  unsigned __int8 IsThreadRunning; // al
  __int64 v55; // r9
  __int64 v56; // [rsp+30h] [rbp-78h]
  struct _KPRCB *v57; // [rsp+30h] [rbp-78h]
  struct _KPRCB *v58; // [rsp+30h] [rbp-78h]
  __int64 v59; // [rsp+38h] [rbp-70h]
  __int64 v60; // [rsp+38h] [rbp-70h]
  _KTHREAD *v61; // [rsp+38h] [rbp-70h]
  _QWORD *v62; // [rsp+40h] [rbp-68h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-68h]
  __int64 v64; // [rsp+48h] [rbp-60h] BYREF
  int v65; // [rsp+50h] [rbp-58h]
  int v66; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int *v67; // [rsp+C0h] [rbp+18h]
  int v68; // [rsp+C8h] [rbp+20h] BYREF

  v67 = a3;
  v4 = *(int *)(a2 + 60);
  v5 = *(_BYTE *)a2 & 0x7F;
  v7 = -1;
  v8 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a2 + 48), KiWaitNever));
  if ( (_DWORD)v4 )
  {
    v30 = -10000 * v4;
    v7 = 0;
    if ( *(_BYTE *)(a1 + 11882) )
    {
      if ( ++*(_DWORD *)(a1 + 23460) >= 0xBB8u )
      {
        v47 = *(_DWORD *)(a1 + 23464);
        *(_DWORD *)(a1 + 23460) = 0;
        if ( v47 < 0x5F5E100 )
          *(_DWORD *)(a1 + 23464) = KeTimeIncrement + v47;
      }
      v30 -= *(unsigned int *)(a1 + 23464);
    }
    if ( v30 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v31 = 0LL;
    v65 = *(_DWORD *)a2;
    v32 = v65 >> 8;
    if ( (v65 & 0xFC00) != 0 )
      v31 = (unsigned __int8)(BYTE1(v65) & 0xFC) << 16;
    HIBYTE(v65) = 64;
    BYTE1(v65) = v32 & 0xFE;
    do
    {
      *(_QWORD *)(a2 + 24) -= v30;
      BYTE2(v65) = (unsigned __int64)(v31 + *(_QWORD *)(a2 + 24)) >> 18;
      v33 = BYTE2(v65);
      *(_DWORD *)a2 = v65;
    }
    while ( !KiInsertTimerTable(a1, a2, v8, v33, 0LL) );
  }
  v9 = *(_QWORD **)(a2 + 8);
  v10 = (_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 1;
  if ( v5 == 8 )
  {
    if ( v9 == v10 )
    {
LABEL_4:
      v10[1] = v10;
      *v10 = v10;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v13 = (__int64)v9;
      v62 = v9;
      v9 = (_QWORD *)*v9;
      v14 = *(_BYTE *)(v13 + 16);
      if ( v14 == 1 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *(_QWORD *)(v13 + 24);
        v56 = *(unsigned __int16 *)(v13 + 18);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v59 = (__int64)CurrentPrcb;
        v66 = 0;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v50 = SchedulerAssist[5];
            SchedulerAssist[5] = v50 + 1;
            if ( v50 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
        {
          KiSetVpThreadSpinLockCount(v59, 0);
          do
            KeYieldProcessorEx(&v66);
          while ( *(_QWORD *)(v16 + 64) );
          KiSetVpThreadSpinLockCount(v59, 1);
        }
        v10 = (_QWORD *)(a2 + 8);
        if ( *(_BYTE *)(v16 + 388) == 5 )
        {
          v18 = *(_BYTE *)(v16 + 112);
          v19 = v18 & 7;
          if ( v19 == 1 || v19 == 4 )
          {
            v20 = *(_QWORD *)(v16 + 232);
            if ( v20 )
            {
              if ( (*(_BYTE *)v20 & 0x7F) == 0x15 )
              {
                *(_DWORD *)(v16 + 540) = (unsigned __int8)*(_DWORD *)(v16 + 540);
                _InterlockedIncrement((volatile signed __int32 *)(v20 + 4LL * *(unsigned int *)(v16 + 540) + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v20 + 40));
              }
            }
            v21 = *(_QWORD *)(v16 + 712);
            if ( v21 )
            {
              v22 = KeGetCurrentPrcb();
              v60 = (__int64)v22;
              v68 = 0;
              v23 = v22->SchedulerAssist;
              if ( v23 )
              {
                if ( v22->NestingLevel <= 1u )
                {
                  v51 = v23[5];
                  v23[5] = v51 + 1;
                  if ( v51 == -1 && !*((_BYTE *)v23 + 25) && !*((_BYTE *)v23 + 27) )
                    KiPerformUnboostKick(v22);
                }
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 22800), 0LL) )
              {
                KiSetVpThreadSpinLockCount(v60, 0);
                do
                  KeYieldProcessorEx(&v68);
                while ( *(_QWORD *)(v21 + 22800) );
                KiSetVpThreadSpinLockCount(v60, 1);
              }
              v10 = (_QWORD *)(a2 + 8);
              if ( *(_QWORD *)(v16 + 712) )
              {
                v24 = *(_QWORD *)(v16 + 216);
                v25 = *(_QWORD **)(v16 + 224);
                if ( *(_QWORD *)(v24 + 8) != v16 + 216 || *v25 != v16 + 216 )
                  __fastfail(3u);
                *v25 = v24;
                *(_QWORD *)(v24 + 8) = v25;
                *(_QWORD *)(v16 + 712) = 0LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v21 + 22800), 0LL);
              v26 = KeGetCurrentPrcb();
              v27 = v26->SchedulerAssist;
              if ( v27 )
              {
                if ( v26->NestingLevel <= 1u )
                {
                  v52 = v27[5] - 1;
                  v27[5] = v52;
                  if ( !v52 && !*((_BYTE *)v27 + 25) && !*((_BYTE *)v27 + 27) )
                    KiPerformUnboostKick(v26);
                }
              }
            }
            v13 = (__int64)v62;
            *(_BYTE *)(v16 + 388) = 7;
            *(_QWORD *)(v16 + 216) = *(_QWORD *)(a1 + 11528);
            *(_QWORD *)(a1 + 11528) = v16 + 216;
            *(_QWORD *)(v16 + 200) = v56;
          }
          else if ( (*(_BYTE *)(v16 + 112) & 7) != 0 )
          {
            if ( v19 == 5 )
            {
              *(_BYTE *)(v16 + 112) = v18 & 0xF8 | 6;
            }
            else if ( v19 == 3 )
            {
              *(_BYTE *)(v13 + 17) = 2;
            }
          }
          else
          {
            *(_BYTE *)(v16 + 112) = v18 & 0xF8 | 2;
            *(_QWORD *)(v16 + 200) = v56;
            *(_BYTE *)(v13 + 17) = 0;
          }
        }
        *(_QWORD *)(v16 + 64) = 0LL;
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        if ( v29 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v53 = v29[5] - 1;
            v29[5] = v53;
            if ( !v53 && !*((_BYTE *)v29 + 25) && !*((_BYTE *)v29 + 27) )
              KiPerformUnboostKick(v28);
          }
        }
        ++*(_BYTE *)(v13 + 17);
        goto LABEL_32;
      }
      if ( v14 != 2 )
      {
        KiTryUnwaitThread(a1, v13, 256LL, 0LL);
        goto LABEL_32;
      }
      *(_BYTE *)(v13 + 17) = 5;
      v39 = *(_QWORD *)(v13 + 24);
      *(_QWORD *)v13 = 0LL;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v57 = KeGetCurrentPrcb();
      CurrentThread = v57->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v57->CurrentThread);
        EtwTraceEnqueueWork(v55, v13, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v39);
      v40 = (_QWORD *)(v39 + 8);
      if ( (_QWORD *)*v40 == v40
        || *(_DWORD *)(v39 + 40) >= *(_DWORD *)(v39 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v39 && CurrentThread->WaitReason == 15 )
      {
        goto LABEL_61;
      }
      if ( !KiWakeQueueWaiter((__int64)v57, v39, v13) )
        break;
LABEL_65:
      _InterlockedAnd((volatile signed __int32 *)v39, 0xFFFFFF7F);
LABEL_32:
      if ( v9 == v10 )
        goto LABEL_4;
    }
    v40 = (_QWORD *)(v39 + 8);
LABEL_61:
    v41 = *(_DWORD *)(v39 + 4);
    *(_DWORD *)(v39 + 4) = v41 + 1;
    v42 = *(__int64 **)(v39 + 32);
    if ( *v42 != v39 + 24 )
      __fastfail(3u);
    *(_QWORD *)v13 = v39 + 24;
    *(_QWORD *)(v13 + 8) = v42;
    *v42 = v13;
    *(_QWORD *)(v39 + 32) = v13;
    if ( !v41 && (_QWORD *)*v40 != v40 )
      KiWakeOtherQueueWaiters((__int64)v57, v39);
    goto LABEL_65;
  }
  while ( v9 != v10 )
  {
    v34 = (_QWORD *)*v9;
    v35 = (__int64)v9;
    v9 = v34;
    v36 = *(_QWORD **)(v35 + 8);
    if ( v34[1] != v35 || *v36 != v35 )
      __fastfail(3u);
    *v36 = v34;
    v34[1] = v36;
    v37 = *(_BYTE *)(v35 + 16);
    if ( v37 == 1 )
    {
      if ( (unsigned __int8)KiTryUnwaitThread(a1, v35, *(unsigned __int16 *)(v35 + 18), 0LL) )
      {
        v38 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v38 )
          break;
      }
    }
    else
    {
      if ( v37 == 2 )
      {
        *(_BYTE *)(v35 + 17) = 5;
        v43 = *(_QWORD *)(v35 + 24);
        *(_QWORD *)v35 = 0LL;
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v58 = KeGetCurrentPrcb();
        v61 = v58->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v48 = KeIsThreadRunning(v58->CurrentThread);
          EtwTraceEnqueueWork(v49, v35, v48);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v43);
        v44 = (_QWORD *)(v43 + 8);
        if ( (_QWORD *)*v44 != v44
          && *(_DWORD *)(v43 + 40) < *(_DWORD *)(v43 + 44)
          && (v61->Queue != (_DISPATCHER_HEADER *volatile)v43 || v61->WaitReason != 15) )
        {
          if ( KiWakeQueueWaiter((__int64)v58, v43, v35) )
            goto LABEL_77;
          v44 = (_QWORD *)(v43 + 8);
        }
        v45 = *(_DWORD *)(v43 + 4);
        *(_DWORD *)(v43 + 4) = v45 + 1;
        v46 = *(__int64 **)(v43 + 32);
        if ( *v46 != v43 + 24 )
          __fastfail(3u);
        *(_QWORD *)v35 = v43 + 24;
        *(_QWORD *)(v35 + 8) = v46;
        *v46 = v35;
        *(_QWORD *)(v43 + 32) = v35;
        if ( !v45 && (_QWORD *)*v44 != v44 )
          KiWakeOtherQueueWaiters((__int64)v58, v43);
LABEL_77:
        _InterlockedAnd((volatile signed __int32 *)v43, 0xFFFFFF7F);
        v38 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v38 )
          break;
        continue;
      }
      KiTryUnwaitThread(a1, v35, 256LL, 0LL);
    }
  }
LABEL_5:
  if ( v8 )
  {
    v11 = v67;
    if ( !v67 )
    {
      v11 = (unsigned int *)&v64;
      v64 = MEMORY[0xFFFFF78000000014];
LABEL_52:
      KiInsertQueueDpc(v8, *v11, v11[1], (volatile signed __int32 *)a2, v7);
      return 0LL;
    }
    if ( KiSerializeTimerExpiration && *(_WORD *)(v8 + 2) >= 0x500u || *(_BYTE *)v8 == 26 && *(_BYTE *)(a1 + 11880) )
      goto LABEL_52;
    *(_QWORD *)(a1 + 11808) = v8;
    if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v8 + 16)) == 0LL )
      _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), *(unsigned __int8 *)(a1 + 209));
  }
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v7 << 24) | 0x80));
  return v8;
}
