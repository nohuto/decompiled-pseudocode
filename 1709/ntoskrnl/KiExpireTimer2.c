/*
 * XREFs of KiExpireTimer2 @ 0x1400E2E30
 * Callers:
 *     KiTimer2Expiration @ 0x140092BD0 (KiTimer2Expiration.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x140008074 (EtwTraceTimedEvent.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiTimer2ComputeDueTime @ 0x1400E3348 (KiTimer2ComputeDueTime.c)
 *     KiInsertTimer2 @ 0x1400E339C (KiInsertTimer2.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiUpdateTimer2Flags @ 0x1400E344C (KiUpdateTimer2Flags.c)
 *     KiFinalizeTimer2Disablement @ 0x1400E38AC (KiFinalizeTimer2Disablement.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 *     KiProcessThreadWaitList @ 0x1401122C0 (KiProcessThreadWaitList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiExpireTimer2(__int64 a1, __int64 a2, LARGE_INTEGER InterruptTimePrecise, _DWORD *a4)
{
  __int64 v4; // r13
  int v5; // ebp
  _DWORD *v6; // rdi
  __int64 v8; // r15
  char v10; // r12
  char v11; // al
  __int64 *v12; // r14
  __int64 *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // al
  __int64 v18; // r15
  _KTHREAD *CurrentThread; // r9
  _QWORD *v20; // rcx
  bool v21; // zf
  unsigned __int64 v22; // r14
  ULONG_PTR v23; // rsi
  int v24; // ecx
  int v25; // ebp
  unsigned int v26; // edx
  signed __int32 v27; // eax
  __int64 result; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v35; // ecx
  _DWORD *v36; // rdi
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  int v39; // r8d
  __int64 *v40; // rdx
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int8 IsThreadRunning; // al
  __int64 v47; // r9
  __int64 v48; // rax
  _QWORD *v49; // rdi
  char v50; // cl
  __int64 v51; // r8
  __int64 v52; // rsi
  _KTHREAD *v53; // r9
  unsigned __int8 v54; // al
  __int64 v55; // r9
  _QWORD *v56; // rcx
  int v57; // r8d
  _QWORD *v58; // rdx
  signed __int32 v59; // ecx
  char v60; // cl
  char v61; // dl
  char v62; // cl
  char v63; // [rsp+30h] [rbp-D8h] BYREF
  char v64; // [rsp+31h] [rbp-D7h]
  char v65[6]; // [rsp+32h] [rbp-D6h] BYREF
  _DWORD *v66; // [rsp+38h] [rbp-D0h]
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-C8h]
  __int64 *v68; // [rsp+48h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-B8h]
  _KTHREAD *v70; // [rsp+58h] [rbp-B0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v72[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+78h] [rbp-90h]
  __int64 v74; // [rsp+80h] [rbp-88h]
  ULONG_PTR v75; // [rsp+88h] [rbp-80h]
  __int64 v76; // [rsp+90h] [rbp-78h]
  char v77; // [rsp+98h] [rbp-70h]
  __int64 v78[3]; // [rsp+A0h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v6 = a4;
  v66 = a4;
  v8 = a2;
  v68 = (__int64 *)a2;
  LODWORD(BugCheckParameter3) = *(_DWORD *)(v4 + 484);
  v73 = 0LL;
  v64 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v10 = 1;
    v72[0] = *(_QWORD *)(a1 + 72);
    v72[1] = *(_QWORD *)(a1 + 80);
    v73 = *(_QWORD *)(a1 + 88);
    v64 = *(_BYTE *)(a1 + 129);
  }
  else
  {
    v10 = 0;
  }
  v63 = 0;
  if ( *(_QWORD *)(a1 + 88) && (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 129) & 4) != 0 )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiTimer2ComputeDueTime)(
            (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
            *(_QWORD *)(a1 + 88),
            &v63);
    v32 = *(_QWORD *)(a1 + 80);
    if ( v32 != -1 )
    {
      v33 = v32 - *(_QWORD *)(a1 + 72);
      if ( v33 )
      {
        v41 = v33 + v31;
        if ( v33 + v31 < v31 || v41 == -1LL )
          v41 = -2LL;
        v34 = v30 + v41;
        if ( v30 + v41 < v41 || v34 == -1 )
          v34 = -2LL;
      }
      else
      {
        v34 = v29;
      }
      *(_QWORD *)(a1 + 80) = v34;
    }
    *(_QWORD *)(a1 + 72) = v29;
    while ( !(unsigned __int8)KiInsertTimer2(a1, 0LL, v65) )
    {
      if ( v63 )
        goto LABEL_4;
      v42 = KiTimer2ComputeDueTime(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 88), &v63);
      v44 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = v42;
      if ( v44 != -1LL )
      {
        v45 = v44 + v43;
        if ( v44 + v43 < v44 || v45 == -1 )
          v45 = -2LL;
        *(_QWORD *)(a1 + 80) = v45;
      }
    }
    v5 = 1;
  }
LABEL_4:
  v11 = *(_BYTE *)a1 & 0x7F;
  v12 = (__int64 *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 1;
  if ( v11 == 25 )
  {
    v13 = (__int64 *)*v12;
    if ( (__int64 *)*v12 == v12 )
      goto LABEL_18;
    while ( 1 )
    {
      v14 = (__int64)v13;
      v13 = (__int64 *)*v13;
      v15 = *(_QWORD *)v14;
      v16 = *(_QWORD **)(v14 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v17 = *(_BYTE *)(v14 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(v8, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
        {
          v21 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v21 )
          {
LABEL_17:
            v6 = v66;
            goto LABEL_18;
          }
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          v18 = *(_QWORD *)(v14 + 24);
          *(_QWORD *)v14 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          v70 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v47, v14, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v18);
          v20 = (_QWORD *)(v18 + 8);
          if ( (_QWORD *)*v20 == v20
            || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
            || v70->Queue == (_DISPATCHER_HEADER *volatile)v18 && v70->WaitReason == 15 )
          {
LABEL_47:
            v39 = *(_DWORD *)(v18 + 4);
            *(_DWORD *)(v18 + 4) = v39 + 1;
            v40 = *(__int64 **)(v18 + 32);
            if ( *v40 != v18 + 24 )
              __fastfail(3u);
            *(_QWORD *)v14 = v18 + 24;
            *(_QWORD *)(v14 + 8) = v40;
            *v40 = v14;
            *(_QWORD *)(v18 + 32) = v14;
            if ( !v39 && (_QWORD *)*v20 != v20 )
              KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v18);
          }
          else if ( !KiWakeQueueWaiter((__int64)CurrentPrcb, v18, v14) )
          {
            v20 = (_QWORD *)(v18 + 8);
            goto LABEL_47;
          }
          _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
          v21 = (*(_DWORD *)(a1 + 4))-- == 1;
          v8 = (__int64)v68;
          if ( v21 )
            goto LABEL_17;
          goto LABEL_36;
        }
        KiTryUnwaitThread(v8, v14, 256LL, 0LL);
      }
LABEL_36:
      if ( v13 == v12 )
        goto LABEL_17;
    }
  }
  v48 = *v12;
  if ( (__int64 *)*v12 != v12 )
  {
    while ( 1 )
    {
      v49 = (_QWORD *)v48;
      v68 = *(__int64 **)v48;
      v50 = *(_BYTE *)(v48 + 16);
      if ( v50 == 1 )
      {
        v51 = *(unsigned __int16 *)(v48 + 18);
LABEL_88:
        KiTryUnwaitThread(v8, v48, v51, 0LL);
        goto LABEL_89;
      }
      if ( v50 != 2 )
      {
        v51 = 256LL;
        goto LABEL_88;
      }
      *(_BYTE *)(v48 + 17) = 5;
      v52 = *(_QWORD *)(v48 + 24);
      *(_QWORD *)v48 = 0LL;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      v53 = CurrentPrcb->CurrentThread;
      v70 = v53;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v54 = KeIsThreadRunning(v53);
        EtwTraceEnqueueWork(v55, v49, v54);
      }
      KiAcquireKobjectLockSafe(v52);
      v56 = (_QWORD *)(v52 + 8);
      if ( (_QWORD *)*v56 == v56 || *(_DWORD *)(v52 + 40) >= *(_DWORD *)(v52 + 44) )
        goto LABEL_82;
      if ( v70->Queue == (_DISPATCHER_HEADER *volatile)v52 && v70->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)CurrentPrcb, v52, (__int64)v49) )
      {
        break;
      }
LABEL_86:
      _InterlockedAnd((volatile signed __int32 *)v52, 0xFFFFFF7F);
LABEL_89:
      v48 = (__int64)v68;
      if ( v68 == v12 )
      {
        v6 = v66;
        goto LABEL_93;
      }
    }
    v56 = (_QWORD *)(v52 + 8);
LABEL_82:
    v57 = *(_DWORD *)(v52 + 4);
    *(_DWORD *)(v52 + 4) = v57 + 1;
    v58 = *(_QWORD **)(v52 + 32);
    if ( *v58 != v52 + 24 )
      __fastfail(3u);
    *v49 = v52 + 24;
    v49[1] = v58;
    *v58 = v49;
    *(_QWORD *)(v52 + 32) = v49;
    if ( !v57 && (_QWORD *)*v56 != v56 )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v52);
    goto LABEL_86;
  }
LABEL_93:
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v12 = (__int64)v12;
LABEL_18:
  v22 = 0LL;
  v23 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( !v23 )
  {
    v24 = *(_DWORD *)a1;
    v25 = v5 << 8;
    v26 = v25 | *(_DWORD *)a1 & 0xFFFFF07F;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v26, *(_DWORD *)a1);
    if ( v24 != v27 )
    {
      do
      {
        v59 = v27;
        v26 = v25 | v27 & 0xFFFFF07F;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v26, v27);
      }
      while ( v59 != v27 );
    }
    if ( (v26 & 0x3F00) != 0x2000 )
      goto LABEL_21;
LABEL_45:
    KiFinalizeTimer2Disablement(a1);
    goto LABEL_21;
  }
  v22 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
  KiUpdateTimer2Flags(a1, v5 | 0x10u, 0LL);
  if ( *(_QWORD *)(v8 + 11528) )
    KiProcessThreadWaitList(v8, 1LL, 0LL, 2LL);
  if ( v10 )
    EtwGetKernelTraceTimestamp(v78, 0x40020000u);
  v35 = (*v6)++ & 0xF;
  v36 = &v66[4 * v35 + 4];
  *(_QWORD *)v36 = v23;
  v36[2] = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v8 + 23452) = 0;
  KiResetGlobalDpcWatchdogProfiler(v8);
  *(_BYTE *)(v8 + 11882) = 1;
  ((void (__fastcall *)(__int64, unsigned __int64))v23)(a1, v22);
  *(_BYTE *)(v8 + 11882) = 0;
  v36[3] = MEMORY[0xFFFFF78000000320];
  _m_prefetchw((const void *)a1);
  v37 = *(_DWORD *)a1;
  do
  {
    v38 = v37;
    v37 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v37 & 0xFFFFEFFF, v37);
  }
  while ( v38 != v37 );
  if ( (v37 & 0x2F00) == 0x2000 )
    goto LABEL_45;
LABEL_21:
  result = *(unsigned int *)(v4 + 484);
  if ( (_DWORD)BugCheckParameter3 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v23, (unsigned int)BugCheckParameter3, *(unsigned int *)(v4 + 484));
  if ( v10 )
  {
    v75 = v23;
    v74 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v23 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v76 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v22 ^ KiWaitAlways), KiWaitNever));
    v60 = (2 * (v64 & 2)) | 8;
    if ( (v64 & 4) == 0 )
      v60 = 2 * (v64 & 2);
    v61 = v60;
    v62 = v60 | 0x10;
    if ( (v64 & 8) == 0 )
      v62 = v61;
    v77 = v62;
    if ( v23 )
    {
      v62 |= 1u;
      v77 = v62;
    }
    if ( v73 )
      v77 = v62 | 2;
    if ( !v23 )
      EtwGetKernelTraceTimestamp(v78, 0x40020000u);
    return EtwTraceTimedEvent(3945, 0x40020000u, (__int64)v72, 56, 4197890, (__int64)v78);
  }
  return result;
}
