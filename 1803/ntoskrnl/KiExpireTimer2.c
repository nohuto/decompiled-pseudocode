/*
 * XREFs of KiExpireTimer2 @ 0x1400EA230
 * Callers:
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     KiTimer2ComputeDueTime @ 0x140038C24 (KiTimer2ComputeDueTime.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiUpdateTimer2Flags @ 0x140087660 (KiUpdateTimer2Flags.c)
 *     KiFinalizeTimer2Disablement @ 0x1400876FC (KiFinalizeTimer2Disablement.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400A9E68 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 *     EtwTraceTimedEvent @ 0x1400B76E4 (EtwTraceTimedEvent.c)
 *     KiInsertTimer2 @ 0x1400BBA54 (KiInsertTimer2.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiExpireTimer2(unsigned __int64 a1, __int64 a2, unsigned __int64 QuadPart, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  unsigned int v9; // r12d
  char v10; // r15
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  char v13; // al
  _QWORD *v14; // rax
  __int64 v15; // r12
  _QWORD *v16; // rcx
  char v17; // al
  __int64 v18; // rbp
  struct _KPRCB *CurrentThread; // r9
  _QWORD *v20; // rcx
  bool v21; // zf
  unsigned __int64 v22; // rbp
  ULONG_PTR v23; // rsi
  signed __int32 v24; // ecx
  int v25; // r8d
  unsigned int v26; // edx
  signed __int32 v27; // eax
  __int64 result; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // r10
  __int64 v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // rdi
  _DWORD *v35; // rdi
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  int v38; // r8d
  __int64 *v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int8 IsThreadRunning; // al
  __int64 v49; // r9
  __int64 v50; // rbp
  char v51; // al
  __int64 v52; // r8
  _KTHREAD *v53; // r9
  unsigned __int8 v54; // al
  __int64 v55; // r9
  struct _KPRCB *v56; // rdx
  __int64 v57; // rcx
  char v58; // al
  int v59; // r9d
  __int64 *v60; // r8
  signed __int32 v61; // ecx
  char v62; // cl
  char v63; // dl
  char v64; // cl
  char v65; // [rsp+30h] [rbp-E8h] BYREF
  char v66; // [rsp+31h] [rbp-E7h]
  __int64 v67; // [rsp+38h] [rbp-E0h]
  char v68[4]; // [rsp+40h] [rbp-D8h] BYREF
  int v69; // [rsp+44h] [rbp-D4h]
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-D0h]
  struct _KPRCB *v71; // [rsp+50h] [rbp-C8h]
  _KTHREAD *v72; // [rsp+58h] [rbp-C0h]
  _DWORD *v73; // [rsp+60h] [rbp-B8h]
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-B0h] BYREF
  _QWORD v75[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+80h] [rbp-98h]
  __int64 v77; // [rsp+88h] [rbp-90h]
  ULONG_PTR v78; // [rsp+90h] [rbp-88h]
  __int64 v79; // [rsp+98h] [rbp-80h]
  char v80; // [rsp+A0h] [rbp-78h]
  LARGE_INTEGER v81[4]; // [rsp+A8h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v69 = 0;
  v6 = *(_QWORD *)(a1 + 88);
  v66 = 0;
  v9 = *(_DWORD *)(v4 + 484);
  v76 = 0LL;
  v73 = a4;
  LODWORD(v67) = v9;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v10 = 1;
    v75[0] = *(_QWORD *)(a1 + 72);
    v75[1] = *(_QWORD *)(a1 + 80);
    v66 = *(_BYTE *)(a1 + 129);
    v76 = v6;
  }
  else
  {
    v10 = 0;
  }
  v65 = 0;
  if ( v6 && (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 129) & 4) != 0 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      v6 = *(_QWORD *)(a1 + 88);
      QuadPart = InterruptTimePrecise.QuadPart;
    }
    v29 = KiTimer2ComputeDueTime(QuadPart, v6, &v65);
    v32 = *(_QWORD *)(a1 + 80);
    if ( v32 != -1 )
    {
      v40 = v32 - *(_QWORD *)(a1 + 72);
      if ( v40 )
      {
        v41 = v40 + v31;
        if ( v40 + v31 < v31 || v41 == -1LL )
          v41 = -2LL;
        v42 = v30 + v41;
        if ( v30 + v41 < v41 || v42 == -1 )
          v42 = -2LL;
        *(_QWORD *)(a1 + 80) = v42;
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v29;
      }
    }
    *(_QWORD *)(a1 + 72) = v29;
    while ( !KiInsertTimer2(a1, 0, (__int64)v68) )
    {
      if ( v65 )
        goto LABEL_4;
      v44 = KiTimer2ComputeDueTime(*(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 88), &v65);
      v46 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 72) = v44;
      if ( v46 != -1LL )
      {
        v47 = v46 + v45;
        if ( v46 + v45 < v46 || v47 == -1 )
          v47 = -2LL;
        *(_QWORD *)(a1 + 80) = v47;
      }
    }
    v69 = 1;
  }
LABEL_4:
  v11 = (_QWORD *)(a1 + 8);
  v12 = *(_QWORD **)(a1 + 8);
  v13 = *(_BYTE *)a1 & 0x7F;
  *(_DWORD *)(a1 + 4) = 1;
  if ( v13 == 25 )
  {
    if ( v12 == v11 )
      goto LABEL_18;
    while ( 1 )
    {
      v14 = (_QWORD *)*v12;
      v15 = (__int64)v12;
      v12 = v14;
      v16 = *(_QWORD **)(v15 + 8);
      if ( v14[1] != v15 || *v16 != v15 )
        __fastfail(3u);
      *v16 = v14;
      v14[1] = v16;
      v17 = *(_BYTE *)(v15 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(a2, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
        {
          v21 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v21 )
          {
LABEL_17:
            v9 = v67;
            goto LABEL_18;
          }
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v18 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = (struct _KPRCB *)CurrentPrcb->CurrentThread;
          v71 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v49, v15, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v18);
          v20 = (_QWORD *)(v18 + 8);
          if ( (_QWORD *)*v20 == v20
            || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
            || *(_QWORD *)&v71->CFlushSize == v18 && BYTE3(v71->ProcessorState.ContextFrame.Rbx) == 15 )
          {
LABEL_40:
            v38 = *(_DWORD *)(v18 + 4);
            *(_DWORD *)(v18 + 4) = v38 + 1;
            v39 = *(__int64 **)(v18 + 32);
            if ( *v39 != v18 + 24 )
              __fastfail(3u);
            *(_QWORD *)v15 = v18 + 24;
            *(_QWORD *)(v15 + 8) = v39;
            *v39 = v15;
            *(_QWORD *)(v18 + 32) = v15;
            if ( !v38 && (_QWORD *)*v20 != v20 )
              KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v18);
          }
          else if ( !KiWakeQueueWaiter((__int64)CurrentPrcb, v18, v15) )
          {
            v20 = (_QWORD *)(v18 + 8);
            goto LABEL_40;
          }
          _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
          v21 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v21 )
            goto LABEL_17;
          goto LABEL_66;
        }
        KiTryUnwaitThread(a2, v15, 256LL, 0LL);
      }
LABEL_66:
      if ( v12 == v11 )
        goto LABEL_17;
    }
  }
  if ( v12 != v11 )
  {
    while ( 1 )
    {
      v50 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      v51 = *(_BYTE *)(v50 + 16);
      if ( v51 == 1 )
      {
        v52 = *(unsigned __int16 *)(v50 + 18);
LABEL_89:
        KiTryUnwaitThread(a2, v50, v52, 0LL);
        goto LABEL_90;
      }
      if ( v51 != 2 )
      {
        v52 = 256LL;
        goto LABEL_89;
      }
      *(_BYTE *)(v50 + 17) = 5;
      v67 = *(_QWORD *)(v50 + 24);
      CurrentPrcb = (struct _KPRCB *)(v67 + 8);
      *(_QWORD *)v50 = 0LL;
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v71 = KeGetCurrentPrcb();
      v53 = v71->CurrentThread;
      v72 = v53;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v54 = KeIsThreadRunning(v53);
        EtwTraceEnqueueWork(v55, v50, v54);
      }
      KiAcquireKobjectLockSafe(v67);
      v56 = CurrentPrcb;
      v57 = v67;
      if ( *(struct _KPRCB **)&v56->MxCsr == v56 || *(_DWORD *)(v67 + 40) >= *(_DWORD *)(v67 + 44) )
        goto LABEL_83;
      if ( v72->Queue == (_DISPATCHER_HEADER *volatile)v67 && v72->WaitReason == 15 )
        break;
      v58 = KiWakeQueueWaiter((__int64)v71, v67, v50);
      v57 = v67;
      if ( !v58 )
      {
        v56 = CurrentPrcb;
        goto LABEL_83;
      }
LABEL_87:
      _InterlockedAnd((volatile signed __int32 *)v57, 0xFFFFFF7F);
LABEL_90:
      if ( v12 == v11 )
        goto LABEL_93;
    }
    v56 = (struct _KPRCB *)(v67 + 8);
LABEL_83:
    v59 = *(_DWORD *)(v57 + 4);
    *(_DWORD *)(v57 + 4) = v59 + 1;
    v60 = *(__int64 **)(v57 + 32);
    if ( *v60 != v57 + 24 )
      __fastfail(3u);
    *(_QWORD *)v50 = v57 + 24;
    *(_QWORD *)(v50 + 8) = v60;
    *v60 = v50;
    *(_QWORD *)(v57 + 32) = v50;
    if ( !v59 && *(struct _KPRCB **)&v56->MxCsr != v56 )
    {
      KiWakeOtherQueueWaiters((__int64)v71, v57);
      v57 = v67;
    }
    goto LABEL_87;
  }
LABEL_93:
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v11 = v11;
LABEL_18:
  v22 = 0LL;
  v23 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 96), KiWaitNever));
  if ( !v23 )
  {
    v24 = *(_DWORD *)a1;
    v25 = v69 << 8;
    v26 = (v69 << 8) | *(_DWORD *)a1 & 0xFFFFF07F;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v26, *(_DWORD *)a1);
    if ( v24 != v27 )
    {
      do
      {
        v61 = v27;
        v26 = v25 | v27 & 0xFFFFF07F;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v26, v27);
      }
      while ( v61 != v27 );
    }
    if ( (v26 & 0x3F00) != 0x2000 )
      goto LABEL_21;
LABEL_38:
    KiFinalizeTimer2Disablement(a1);
    goto LABEL_21;
  }
  v22 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a1 + 104), KiWaitNever));
  KiUpdateTimer2Flags((volatile signed __int32 *)a1, v69 | 0x10, 0);
  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1u, 0);
  if ( v10 )
    EtwGetKernelTraceTimestamp(v81, 0x40020000u);
  v33 = v73;
  v34 = ((*v73)++ & 0xF) + 1LL;
  v35 = &v33[4 * v34];
  *(_QWORD *)v35 = v23;
  v35[2] = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a2 + 23452) = 0;
  KiResetGlobalDpcWatchdogProfiler(a2);
  *(_BYTE *)(a2 + 11882) = 1;
  ((void (__fastcall *)(unsigned __int64, unsigned __int64))v23)(a1, v22);
  *(_BYTE *)(a2 + 11882) = 0;
  v35[3] = MEMORY[0xFFFFF78000000320];
  _m_prefetchw((const void *)a1);
  v36 = *(_DWORD *)a1;
  do
  {
    v37 = v36;
    v36 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v36 & 0xFFFFEFFF, v36);
  }
  while ( v37 != v36 );
  if ( (v36 & 0x2F00) == 0x2000 )
    goto LABEL_38;
LABEL_21:
  result = *(unsigned int *)(v4 + 484);
  if ( v9 != (_DWORD)result )
    KeBugCheckEx(0xC7u, 5uLL, v23, v9, *(unsigned int *)(v4 + 484));
  if ( v10 )
  {
    v78 = v23;
    v77 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v23 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    v79 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v22 ^ KiWaitAlways), KiWaitNever));
    v62 = (2 * (v66 & 2)) | 8;
    if ( (v66 & 4) == 0 )
      v62 = 2 * (v66 & 2);
    v63 = v62;
    v64 = v62 | 0x10;
    if ( (v66 & 8) == 0 )
      v64 = v63;
    v80 = v64;
    if ( v23 )
    {
      v64 |= 1u;
      v80 = v64;
    }
    if ( v76 )
      v80 = v64 | 2;
    if ( !v23 )
      EtwGetKernelTraceTimestamp(v81, 0x40020000u);
    return EtwTraceTimedEvent(3945, 0x40020000u, (__int64)v75, 56, 4197890, (__int64)v81);
  }
  return result;
}
