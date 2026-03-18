/*
 * XREFs of KeRundownQueueCommon @ 0x14013E274
 * Callers:
 *     KeRundownQueueEx @ 0x14013E1A4 (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x14024B4E0 (KeRundownPriQueue.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

void __fastcall KeRundownQueueCommon(__int64 a1, _QWORD **a2, _DWORD *a3, unsigned int a4, char a5)
{
  __int64 v5; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rax
  struct _KPRCB *v11; // r12
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rsi
  _QWORD *v17; // rbp
  struct _KPRCB *v18; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  int v24; // r8d
  __int64 *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // [rsp+50h] [rbp+8h] BYREF

  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  v5 = a4;
  if ( a5 )
  {
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 == a2 )
        break;
      v20 = *v9;
      v21 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v21 != v9 )
        __fastfail(3u);
      *v21 = v20;
      v22 = (__int64)(v9 - 65);
      *(_QWORD *)(v20 + 8) = v21;
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
        do
          KeYieldProcessorEx(&v28);
        while ( *(_QWORD *)(v22 + 64) );
      }
      *(_QWORD *)(v22 + 232) = 0LL;
      KiReleaseThreadLockSafe(v22);
    }
    if ( (_DWORD)v5 )
    {
      v10 = v5;
      do
      {
        *a3++ = 0;
        --v10;
      }
      while ( v10 );
    }
  }
  v11 = KeGetCurrentPrcb();
  v12 = (_QWORD *)(a1 + 8);
  v13 = *(_QWORD **)(a1 + 8);
  while ( v13 != v12 )
  {
    v14 = (__int64)v13;
    v13 = (_QWORD *)*v13;
    v15 = *(_BYTE *)(v14 + 16);
    if ( v15 == 1 )
    {
      v26 = *(unsigned __int16 *)(v14 + 18);
      goto LABEL_35;
    }
    if ( v15 == 2 )
    {
      *(_BYTE *)(v14 + 17) = 5;
      v16 = *(_QWORD *)(v14 + 24);
      *(_QWORD *)v14 = 0LL;
      v17 = (_QWORD *)(v16 + 8);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v18 = KeGetCurrentPrcb();
      CurrentThread = v18->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v27) = KeIsThreadRunning(v18->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v14, v27);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v16);
      if ( (_QWORD *)*v17 == v17
        || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v18, v16, v14) )
      {
        v24 = *(_DWORD *)(v16 + 4);
        *(_DWORD *)(v16 + 4) = v24 + 1;
        v25 = *(__int64 **)(v16 + 32);
        if ( *v25 != v16 + 24 )
          __fastfail(3u);
        *(_QWORD *)v14 = v16 + 24;
        *(_QWORD *)(v14 + 8) = v25;
        *v25 = v14;
        *(_QWORD *)(v16 + 32) = v14;
        if ( !v24 && (_QWORD *)*v17 != v17 )
          KiWakeOtherQueueWaiters((__int64)v18, v16);
      }
      _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
    }
    else
    {
      v26 = 256LL;
LABEL_35:
      KiTryUnwaitThread((__int64)v11, v14, v26, 0LL);
    }
  }
  v12[1] = v12;
  *v12 = v12;
}
