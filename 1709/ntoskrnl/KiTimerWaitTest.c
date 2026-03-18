/*
 * XREFs of KiTimerWaitTest @ 0x140093D00
 * Callers:
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiProcessExpiredTimerList @ 0x1400939C0 (KiProcessExpiredTimerList.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1400E2140 (KeSetTimerEx.c)
 *     KiAdjustTimerDueTimes @ 0x140149D6C (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiInsertTimerTable @ 0x14006FA60 (KiInsertTimerTable.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // bp
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // ecx
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rbp
  char v18; // cl
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  char v29; // al
  bool v30; // zf
  __int64 v31; // r12
  struct _KPRCB *CurrentPrcb; // rax
  _KTHREAD *CurrentThread; // rbp
  _QWORD *v34; // rcx
  _QWORD *v35; // rbp
  int v36; // r8d
  _QWORD *v37; // rdx
  __int64 v38; // r12
  _QWORD *v39; // rcx
  int v40; // r8d
  __int64 *v41; // rdx
  unsigned int v42; // ecx
  unsigned __int8 v43; // al
  __int64 v44; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v46; // rdx
  __int64 v47; // [rsp+30h] [rbp-68h]
  struct _KPRCB *v48; // [rsp+30h] [rbp-68h]
  __int64 v49; // [rsp+38h] [rbp-60h]
  __int64 v50; // [rsp+38h] [rbp-60h]
  _KTHREAD *v51; // [rsp+38h] [rbp-60h]
  int v52; // [rsp+48h] [rbp-50h]
  int v53; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v54; // [rsp+B0h] [rbp+18h]
  int v55; // [rsp+B8h] [rbp+20h] BYREF

  v54 = a3;
  v4 = *(int *)(a2 + 60);
  v5 = *(_BYTE *)a2 & 0x7F;
  v7 = -1;
  v8 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a2 + 48), KiWaitNever));
  if ( (_DWORD)v4 )
  {
    v9 = -10000 * v4;
    v7 = 0;
    if ( *(_BYTE *)(a1 + 11882) )
    {
      if ( ++*(_DWORD *)(a1 + 23460) >= 0xBB8u )
      {
        v42 = *(_DWORD *)(a1 + 23464);
        *(_DWORD *)(a1 + 23460) = 0;
        if ( v42 < 0x5F5E100 )
          *(_DWORD *)(a1 + 23464) = KeTimeIncrement + v42;
      }
      v9 -= *(unsigned int *)(a1 + 23464);
    }
    if ( v9 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v10 = 0LL;
    v52 = *(_DWORD *)a2;
    v11 = *(int *)a2 >> 8;
    if ( (*(_DWORD *)a2 & 0xFC00) != 0 )
      v10 = (unsigned __int8)(v11 & 0xFC) << 16;
    HIBYTE(v52) = 64;
    BYTE1(v52) = v11 & 0xFE;
    do
    {
      *(_QWORD *)(a2 + 24) -= v9;
      BYTE2(v52) = (unsigned __int64)(v10 + *(_QWORD *)(a2 + 24)) >> 18;
      *(_DWORD *)a2 = v52;
    }
    while ( !KiInsertTimerTable(a1, a2, v8, BYTE2(v52), 0LL) );
  }
  *(_DWORD *)(a2 + 4) = 1;
  if ( v5 == 8 )
  {
    v12 = *(_QWORD **)(a2 + 8);
    v13 = (_QWORD *)(a2 + 8);
    if ( v12 == (_QWORD *)(a2 + 8) )
    {
LABEL_11:
      *(_QWORD *)(a2 + 16) = a2 + 8;
      *v13 = v13;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v15 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      v47 = v15;
      v16 = *(_BYTE *)(v15 + 16);
      if ( v16 != 1 )
      {
        if ( v16 != 2 )
        {
          KiTryUnwaitThread(a1, v15, 256LL, 0LL);
          goto LABEL_37;
        }
        *(_BYTE *)(v15 + 17) = 5;
        v31 = *(_QWORD *)(v15 + 24);
        *(_QWORD *)v15 = 0LL;
        KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        v50 = (__int64)CurrentPrcb;
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v46, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v31);
        v34 = (_QWORD *)(v31 + 8);
        if ( (_QWORD *)*v34 == v34
          || *(_DWORD *)(v31 + 40) >= *(_DWORD *)(v31 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v31 && CurrentThread->WaitReason == 15 )
        {
          v35 = (_QWORD *)v47;
LABEL_60:
          v36 = *(_DWORD *)(v31 + 4);
          *(_DWORD *)(v31 + 4) = v36 + 1;
          v37 = *(_QWORD **)(v31 + 32);
          if ( *v37 != v31 + 24 )
            __fastfail(3u);
          *v35 = v31 + 24;
          v35[1] = v37;
          *v37 = v35;
          *(_QWORD *)(v31 + 32) = v35;
          if ( !v36 && (_QWORD *)*v34 != v34 )
            KiWakeOtherQueueWaiters(v50, v31);
        }
        else
        {
          v35 = (_QWORD *)v47;
          if ( !KiWakeQueueWaiter(v50, v31, v47) )
          {
            v34 = (_QWORD *)(v31 + 8);
            goto LABEL_60;
          }
        }
        _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
        goto LABEL_37;
      }
      v17 = *(_QWORD *)(v15 + 24);
      v49 = *(unsigned __int16 *)(v15 + 18);
      v53 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v53);
        while ( *(_QWORD *)(v17 + 64) );
      }
      if ( *(_BYTE *)(v17 + 388) == 5 )
      {
        v18 = *(_BYTE *)(v17 + 112);
        v19 = v18 & 7;
        if ( v19 == 1 || v19 == 4 )
        {
          v20 = *(_QWORD *)(v17 + 232);
          if ( v20 )
          {
            if ( (*(_BYTE *)v20 & 0x7F) == 0x15 )
            {
              *(_DWORD *)(v17 + 540) = (unsigned __int8)*(_DWORD *)(v17 + 540);
              _InterlockedIncrement((volatile signed __int32 *)(v20 + 4LL * *(unsigned int *)(v17 + 540) + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v20 + 40));
            }
          }
          v21 = *(_QWORD *)(v17 + 712);
          if ( v21 )
          {
            v55 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 22800), 0LL) )
            {
              do
                KeYieldProcessorEx(&v55);
              while ( *(_QWORD *)(v21 + 22800) );
            }
            if ( *(_QWORD *)(v17 + 712) )
            {
              v22 = *(_QWORD *)(v17 + 216);
              v23 = *(_QWORD **)(v17 + 224);
              if ( *(_QWORD *)(v22 + 8) != v17 + 216 || *v23 != v17 + 216 )
                __fastfail(3u);
              *v23 = v22;
              *(_QWORD *)(v22 + 8) = v23;
              *(_QWORD *)(v17 + 712) = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 22800), 0LL);
          }
          *(_BYTE *)(v17 + 388) = 7;
          *(_QWORD *)(v17 + 216) = *(_QWORD *)(a1 + 11528);
          *(_QWORD *)(a1 + 11528) = v17 + 216;
          *(_QWORD *)(v17 + 200) = v49;
        }
        else
        {
          if ( (*(_BYTE *)(v17 + 112) & 7) == 0 )
          {
            v24 = v47;
            *(_BYTE *)(v17 + 112) = v18 & 0xF8 | 2;
            *(_QWORD *)(v17 + 200) = v49;
            *(_BYTE *)(v47 + 17) = 0;
            goto LABEL_36;
          }
          if ( v19 == 5 )
          {
            *(_BYTE *)(v17 + 112) = v18 & 0xF8 | 6;
          }
          else if ( v19 == 3 )
          {
            v24 = v47;
            *(_BYTE *)(v47 + 17) = 2;
            goto LABEL_36;
          }
        }
      }
      v24 = v47;
LABEL_36:
      *(_QWORD *)(v17 + 64) = 0LL;
      ++*(_BYTE *)(v24 + 17);
LABEL_37:
      if ( v12 == v13 )
        goto LABEL_11;
    }
  }
  v25 = *(_QWORD **)(a2 + 8);
  while ( v25 != (_QWORD *)(a2 + 8) )
  {
    v26 = (__int64)v25;
    v25 = (_QWORD *)*v25;
    v27 = *(_QWORD *)v26;
    v28 = *(_QWORD **)(v26 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 || *v28 != v26 )
      __fastfail(3u);
    *v28 = v27;
    *(_QWORD *)(v27 + 8) = v28;
    v29 = *(_BYTE *)(v26 + 16);
    if ( v29 == 1 )
    {
      if ( (unsigned __int8)KiTryUnwaitThread(a1, v26, *(unsigned __int16 *)(v26 + 18), 0LL) )
      {
        v30 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v30 )
          break;
      }
    }
    else
    {
      if ( v29 == 2 )
      {
        *(_BYTE *)(v26 + 17) = 5;
        v38 = *(_QWORD *)(v26 + 24);
        *(_QWORD *)v26 = 0LL;
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v48 = KeGetCurrentPrcb();
        v51 = v48->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v43 = KeIsThreadRunning(v48->CurrentThread);
          EtwTraceEnqueueWork(v44, v26, v43);
        }
        KiAcquireKobjectLockSafe(v38);
        v39 = (_QWORD *)(v38 + 8);
        if ( (_QWORD *)*v39 != v39
          && *(_DWORD *)(v38 + 40) < *(_DWORD *)(v38 + 44)
          && (v51->Queue != (_DISPATCHER_HEADER *volatile)v38 || v51->WaitReason != 15) )
        {
          if ( KiWakeQueueWaiter((__int64)v48, v38, v26) )
            goto LABEL_76;
          v39 = (_QWORD *)(v38 + 8);
        }
        v40 = *(_DWORD *)(v38 + 4);
        *(_DWORD *)(v38 + 4) = v40 + 1;
        v41 = *(__int64 **)(v38 + 32);
        if ( *v41 != v38 + 24 )
          __fastfail(3u);
        *(_QWORD *)v26 = v38 + 24;
        *(_QWORD *)(v26 + 8) = v41;
        *v41 = v26;
        *(_QWORD *)(v38 + 32) = v26;
        if ( !v40 && (_QWORD *)*v39 != v39 )
          KiWakeOtherQueueWaiters((__int64)v48, v38);
LABEL_76:
        _InterlockedAnd((volatile signed __int32 *)v38, 0xFFFFFF7F);
        v30 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v30 )
          break;
        continue;
      }
      KiTryUnwaitThread(a1, v26, 256LL, 0LL);
    }
  }
LABEL_12:
  if ( v8 )
  {
    if ( !v54
      || KiSerializeTimerExpiration && *(_WORD *)(v8 + 2) >= 0x500u
      || *(_BYTE *)v8 == 26 && *(_BYTE *)(a1 + 11880) )
    {
      KiInsertQueueDpc(v8, v7);
      return 0LL;
    }
    *(_QWORD *)(a1 + 11808) = v8;
    if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v8 + 16)) == 0LL )
      _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), *(unsigned __int8 *)(a1 + 209));
  }
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v7 << 24) | 0x80));
  return v8;
}
