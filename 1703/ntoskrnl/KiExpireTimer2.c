/*
 * XREFs of KiExpireTimer2 @ 0x140048CA0
 * Callers:
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x14000D778 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     EtwTraceTimedEvent @ 0x140020870 (EtwTraceTimedEvent.c)
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     KiTimer2ComputeDueTime @ 0x14004B798 (KiTimer2ComputeDueTime.c)
 *     KiInsertTimer2 @ 0x14004B87C (KiInsertTimer2.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiUpdateTimer2Flags @ 0x14012AFB0 (KiUpdateTimer2Flags.c)
 *     KiFinalizeTimer2Disablement @ 0x14012B0CC (KiFinalizeTimer2Disablement.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

void *__fastcall KiExpireTimer2(__int64 a1, __int64 a2, LARGE_INTEGER InterruptTimePrecise, _DWORD *a4)
{
  __int64 v4; // r15
  int v5; // ebp
  _DWORD *v6; // rdi
  __int64 v8; // r11
  ULONG_PTR v9; // r13
  char v11; // r12
  char v12; // al
  _QWORD **v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char v18; // al
  bool v19; // zf
  unsigned __int64 v20; // r14
  ULONG_PTR v21; // rsi
  int v22; // ecx
  int v23; // ebp
  unsigned int v24; // edx
  signed __int32 v25; // eax
  void *result; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  _KTHREAD *CurrentThread; // r9
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  char v36; // al
  __int64 v37; // rbp
  unsigned int v38; // ecx
  _DWORD *v39; // rdi
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  unsigned __int64 v42; // r8
  int v43; // r9d
  __int64 *v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int8 IsThreadRunning; // al
  __int64 v50; // r9
  _QWORD *v51; // rax
  _QWORD *v52; // rdi
  char v53; // cl
  __int64 v54; // r8
  __int64 v55; // rsi
  _KTHREAD *v56; // r9
  unsigned __int8 v57; // al
  __int64 v58; // r9
  _QWORD *v59; // rcx
  int v60; // r8d
  _QWORD *v61; // rdx
  signed __int32 v62; // ecx
  char v63; // al
  char v64; // [rsp+30h] [rbp-E8h] BYREF
  char v65; // [rsp+31h] [rbp-E7h]
  char v66[6]; // [rsp+32h] [rbp-E6h] BYREF
  __int64 v67; // [rsp+38h] [rbp-E0h]
  _DWORD *v68; // [rsp+40h] [rbp-D8h]
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-D0h]
  __int64 v70; // [rsp+50h] [rbp-C8h]
  _QWORD *v71; // [rsp+58h] [rbp-C0h]
  _KTHREAD *v72; // [rsp+60h] [rbp-B8h]
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-B0h] BYREF
  _QWORD v74[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+80h] [rbp-98h]
  __int64 v76; // [rsp+88h] [rbp-90h]
  ULONG_PTR v77; // [rsp+90h] [rbp-88h]
  __int64 v78; // [rsp+98h] [rbp-80h]
  char v79; // [rsp+A0h] [rbp-78h]
  LARGE_INTEGER v80[3]; // [rsp+A8h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v6 = a4;
  v68 = a4;
  v8 = a2;
  v70 = a2;
  v9 = *(unsigned int *)(v4 + 484);
  v75 = 0LL;
  v65 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v11 = 1;
    v74[0] = *(_QWORD *)(a1 + 72);
    v74[1] = *(_QWORD *)(a1 + 80);
    v75 = *(_QWORD *)(a1 + 88);
    v65 = *(_BYTE *)(a1 + 129);
  }
  else
  {
    v11 = 0;
  }
  v64 = 0;
  if ( *(_QWORD *)(a1 + 88) && (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 129) & 4) != 0 )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v27 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KiTimer2ComputeDueTime)(
            (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
            *(_QWORD *)(a1 + 88),
            &v64);
    v30 = *(_QWORD *)(a1 + 80);
    if ( v30 != -1 )
    {
      v31 = v30 - *(_QWORD *)(a1 + 72);
      if ( v31 )
      {
        v42 = v31 + v29;
        if ( v31 + v29 < v29 || v42 == -1LL )
          v42 = -2LL;
        v32 = v28 + v42;
        if ( v28 + v42 < v42 || v32 == -1 )
          v32 = -2LL;
      }
      else
      {
        v32 = v27;
      }
      *(_QWORD *)(a1 + 80) = v32;
    }
    *(_QWORD *)(a1 + 72) = v27;
    while ( !(unsigned __int8)KiInsertTimer2(a1, 0LL, v66) )
    {
      if ( v64 )
        goto LABEL_28;
      v45 = KiTimer2ComputeDueTime(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 88), &v64);
      v47 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = v45;
      if ( v47 != -1LL )
      {
        v48 = v46 + v47;
        if ( v46 + v47 < v47 || v48 == -1 )
          v48 = -2LL;
        *(_QWORD *)(a1 + 80) = v48;
      }
    }
    v5 = 1;
LABEL_28:
    v8 = v70;
  }
  v12 = *(_BYTE *)a1 & 0x7F;
  v13 = (_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 1;
  if ( v12 == 25 )
  {
    v14 = *v13;
    if ( *v13 == v13 )
      goto LABEL_12;
    while ( 1 )
    {
      v15 = (__int64)v14;
      v14 = (_QWORD *)*v14;
      v16 = *(_QWORD *)v15;
      v17 = *(_QWORD **)(v15 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v17 != v15 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      v18 = *(_BYTE *)(v15 + 16);
      if ( v18 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(v8, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
      {
        v19 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v19 )
        {
LABEL_11:
          v6 = v68;
          goto LABEL_12;
        }
      }
LABEL_37:
      if ( v14 == v13 )
        goto LABEL_11;
      v8 = v70;
    }
    if ( v18 != 2 )
    {
      KiTryUnwaitThread(v8, v15, 256LL, 0LL);
      goto LABEL_37;
    }
    *(_BYTE *)(v15 + 17) = 5;
    v67 = *(_QWORD *)(v15 + 24);
    v71 = (_QWORD *)(v67 + 8);
    *(_QWORD *)v15 = 0LL;
    KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    v72 = CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentThread);
      EtwTraceEnqueueWork(v50, v15, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v67);
    v34 = v71;
    v35 = v67;
    if ( (_QWORD *)*v34 != v34
      && *(_DWORD *)(v67 + 40) < *(_DWORD *)(v67 + 44)
      && (v72->Queue != (_DISPATCHER_HEADER *volatile)v67 || v72->WaitReason != 15) )
    {
      v36 = KiWakeQueueWaiter((__int64)CurrentPrcb, v67, v15);
      v35 = v67;
      if ( v36 )
        goto LABEL_36;
      v34 = v71;
    }
    v43 = *(_DWORD *)(v35 + 4);
    *(_DWORD *)(v35 + 4) = v43 + 1;
    v44 = *(__int64 **)(v35 + 32);
    if ( *v44 != v35 + 24 )
      __fastfail(3u);
    *(_QWORD *)v15 = v35 + 24;
    *(_QWORD *)(v15 + 8) = v44;
    *v44 = v15;
    *(_QWORD *)(v35 + 32) = v15;
    if ( !v43 && (_QWORD *)*v34 != v34 )
    {
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v35);
      v35 = v67;
    }
LABEL_36:
    _InterlockedAnd((volatile signed __int32 *)v35, 0xFFFFFF7F);
    v19 = (*(_DWORD *)(a1 + 4))-- == 1;
    if ( v19 )
      goto LABEL_11;
    goto LABEL_37;
  }
  v51 = *v13;
  if ( *v13 != v13 )
  {
    while ( 1 )
    {
      v52 = v51;
      v71 = (_QWORD *)*v51;
      v53 = *((_BYTE *)v51 + 16);
      if ( v53 == 1 )
      {
        v54 = *((unsigned __int16 *)v51 + 9);
      }
      else
      {
        if ( v53 == 2 )
        {
          *((_BYTE *)v51 + 17) = 5;
          v55 = v51[3];
          *v51 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          v56 = CurrentPrcb->CurrentThread;
          v72 = v56;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v57 = KeIsThreadRunning(v56);
            EtwTraceEnqueueWork(v58, v52, v57);
          }
          KiAcquireKobjectLockSafe(v55);
          v59 = (_QWORD *)(v55 + 8);
          if ( (_QWORD *)*v59 == v59 || *(_DWORD *)(v55 + 40) >= *(_DWORD *)(v55 + 44) )
          {
LABEL_83:
            v60 = *(_DWORD *)(v55 + 4);
            *(_DWORD *)(v55 + 4) = v60 + 1;
            v61 = *(_QWORD **)(v55 + 32);
            if ( *v61 != v55 + 24 )
              __fastfail(3u);
            *v52 = v55 + 24;
            v52[1] = v61;
            *v61 = v52;
            *(_QWORD *)(v55 + 32) = v52;
            if ( !v60 && (_QWORD *)*v59 != v59 )
              KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v55);
          }
          else if ( v72->Queue == (_DISPATCHER_HEADER *volatile)v55 && v72->WaitReason == 15
                 || !KiWakeQueueWaiter((__int64)CurrentPrcb, v55, (__int64)v52) )
          {
            v59 = (_QWORD *)(v55 + 8);
            goto LABEL_83;
          }
          _InterlockedAnd((volatile signed __int32 *)v55, 0xFFFFFF7F);
          goto LABEL_90;
        }
        v54 = 256LL;
      }
      KiTryUnwaitThread(v8, v51, v54, 0LL);
LABEL_90:
      v51 = v71;
      if ( v71 == v13 )
      {
        v6 = v68;
        break;
      }
      v8 = v70;
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v13 = v13;
LABEL_12:
  v20 = 0LL;
  v21 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( !v21 )
  {
    v22 = *(_DWORD *)a1;
    v23 = v5 << 8;
    v24 = v23 | *(_DWORD *)a1 & 0xFFFFF07F;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v24, *(_DWORD *)a1);
    if ( v22 != v25 )
    {
      do
      {
        v62 = v25;
        v24 = v23 | v25 & 0xFFFFF07F;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v24, v25);
      }
      while ( v62 != v25 );
    }
    if ( (v24 & 0x3F00) != 0x2000 )
      goto LABEL_15;
LABEL_46:
    KiFinalizeTimer2Disablement(a1);
    goto LABEL_15;
  }
  v20 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
  KiUpdateTimer2Flags(a1, v5 | 0x10u, 0LL);
  v37 = v70;
  if ( *(_QWORD *)(v70 + 11528) )
    KiProcessThreadWaitList(v70, 1u, 0, 2u);
  if ( v11 )
    EtwGetKernelTraceTimestamp(v80, 0x40020000u);
  v38 = (*v6)++ & 0xF;
  v39 = &v68[4 * v38 + 4];
  *(_QWORD *)v39 = v21;
  v39[2] = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v37 + 23456) = 0;
  KiResetGlobalDpcWatchdogProfiler(v37);
  *(_BYTE *)(v37 + 11882) = 1;
  ((void (__fastcall *)(__int64, unsigned __int64))v21)(a1, v20);
  *(_BYTE *)(v37 + 11882) = 0;
  v39[3] = MEMORY[0xFFFFF78000000320];
  _m_prefetchw((const void *)a1);
  v40 = *(_DWORD *)a1;
  do
  {
    v41 = v40;
    v40 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v40 & 0xFFFFEFFF, v40);
  }
  while ( v41 != v40 );
  if ( (v40 & 0x2F00) == 0x2000 )
    goto LABEL_46;
LABEL_15:
  result = (void *)*(unsigned int *)(v4 + 484);
  if ( (_DWORD)v9 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v21, v9, *(unsigned int *)(v4 + 484));
  if ( v11 )
  {
    v77 = v21;
    v76 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v21 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v63 = 0;
    v78 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v20 ^ KiWaitAlways), KiWaitNever));
    if ( (v65 & 2) != 0 )
      v63 = 4;
    if ( (v65 & 4) != 0 )
      v63 |= 8u;
    if ( (v65 & 8) != 0 )
      v63 |= 0x10u;
    v79 = v63;
    if ( v21 )
    {
      v63 |= 1u;
      v79 = v63;
    }
    if ( v75 )
      v79 = v63 | 2;
    if ( !v21 )
      EtwGetKernelTraceTimestamp(v80, 0x40020000u);
    return EtwTraceTimedEvent(3945, 0x40020000u, (__int64)v74, 56, 4197890, (__int64)v80);
  }
  return result;
}
