/*
 * XREFs of KeRundownQueueCommon @ 0x1400DB574
 * Callers:
 *     KeRundownQueueEx @ 0x1400DB4A4 (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x14020D150 (KeRundownPriQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

void __fastcall KeRundownQueueCommon(__int64 a1, volatile signed __int32 **a2, _DWORD *a3, unsigned int a4, char a5)
{
  __int64 v6; // rsi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // r12
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rsi
  _QWORD *v17; // rbp
  struct _KPRCB *v18; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v20; // rcx
  volatile signed __int32 **v21; // rax
  int v22; // r8d
  __int64 *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r8
  int v26; // [rsp+50h] [rbp+8h] BYREF

  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  v6 = a4;
  if ( a5 )
  {
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 == (volatile signed __int32 *)a2 )
        break;
      v20 = *(_QWORD *)v9;
      v21 = (volatile signed __int32 **)*((_QWORD *)v9 + 1);
      if ( *(volatile signed __int32 **)(*(_QWORD *)v9 + 8LL) != v9 || *v21 != v9 )
        __fastfail(3u);
      v26 = 0;
      *v21 = (volatile signed __int32 *)v20;
      *(_QWORD *)(v20 + 8) = v21;
      while ( _interlockedbittestandset64(v9 - 114, 0LL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *((_QWORD *)v9 - 57) );
      }
      *((_QWORD *)v9 - 36) = 0LL;
      *((_QWORD *)v9 - 57) = 0LL;
    }
    if ( (_DWORD)v6 )
    {
      v10 = v6;
      do
      {
        *a3++ = 0;
        --v10;
      }
      while ( v10 );
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = (_QWORD *)(a1 + 8);
  v13 = *(_QWORD **)(a1 + 8);
  while ( v13 != v12 )
  {
    v14 = (__int64)v13;
    v13 = (_QWORD *)*v13;
    v15 = *(_BYTE *)(v14 + 16);
    if ( v15 == 1 )
    {
      v24 = *(unsigned __int16 *)(v14 + 18);
      goto LABEL_34;
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
        LOBYTE(v25) = KeIsThreadRunning(v18->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v14, v25);
      }
      KiAcquireKobjectLockSafe(v16);
      if ( (_QWORD *)*v17 == v17
        || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v18, v16, v14) )
      {
        v22 = *(_DWORD *)(v16 + 4);
        *(_DWORD *)(v16 + 4) = v22 + 1;
        v23 = *(__int64 **)(v16 + 32);
        if ( *v23 != v16 + 24 )
          __fastfail(3u);
        *(_QWORD *)v14 = v16 + 24;
        *(_QWORD *)(v14 + 8) = v23;
        *v23 = v14;
        *(_QWORD *)(v16 + 32) = v14;
        if ( !v22 && (_QWORD *)*v17 != v17 )
          KiWakeOtherQueueWaiters((__int64)v18, v16);
      }
      _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
    }
    else
    {
      v24 = 256LL;
LABEL_34:
      KiTryUnwaitThread((__int64)CurrentPrcb, v14, v24, 0LL);
    }
  }
  v12[1] = v12;
  *v12 = v12;
}
