/*
 * XREFs of KeRundownQueueEx @ 0x140011290
 * Callers:
 *     KeRundownQueue @ 0x140010D90 (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x140011200 (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x140480960 (EtwpDeleteRegistrationObject.c)
 *     KeUnInitializeUmsThread @ 0x1406AD7C8 (KeUnInitializeUmsThread.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140011644 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeRundownQueueEx(__int64 a1, char a2)
{
  _QWORD **v3; // r15
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // r14
  _QWORD *v10; // r14
  _QWORD *v11; // r15
  _QWORD *v13; // rsi
  char v14; // al
  __int64 v15; // rbp
  _QWORD *v16; // r12
  struct _KPRCB *v17; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v19; // r13
  volatile signed __int32 *v20; // rsi
  __int64 v21; // rdx
  volatile signed __int32 **v22; // rcx
  _QWORD *v23; // rcx
  int v24; // r8d
  _QWORD *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  struct _KPRCB *v28; // [rsp+30h] [rbp-48h]
  char v29; // [rsp+38h] [rbp-40h]
  int v30; // [rsp+80h] [rbp+8h] BYREF
  char v31; // [rsp+88h] [rbp+10h]
  struct _KPRCB *v32; // [rsp+90h] [rbp+18h]
  __int64 v33; // [rsp+98h] [rbp+20h]

  v31 = a2;
  v3 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  v29 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v28 = CurrentPrcb;
  KiAcquireKobjectLockSafe(a1);
  v7 = (_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 24);
  v33 = v8;
  if ( v8 == a1 + 24 )
  {
    v33 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v23 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v8 + 8) != v7 || (_QWORD *)*v23 != v7 )
      __fastfail(3u);
    *v23 = v8;
    *(_QWORD *)(v8 + 8) = v23;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v7 = v7;
  }
  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  if ( a2 )
  {
    v9 = *v3;
    while ( v9 != v3 )
    {
      v20 = (volatile signed __int32 *)(v9 - 65);
      v9 = (_QWORD *)*v9;
      v21 = *((_QWORD *)v20 + 65);
      v22 = (volatile signed __int32 **)*((_QWORD *)v20 + 66);
      if ( *(volatile signed __int32 **)(v21 + 8) != v20 + 130 || *v22 != v20 + 130 )
        __fastfail(3u);
      v30 = 0;
      *v22 = (volatile signed __int32 *)v21;
      *(_QWORD *)(v21 + 8) = v22;
      while ( _interlockedbittestandset64(v20 + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *((_QWORD *)v20 + 8) );
      }
      *((_QWORD *)v20 + 29) = 0LL;
      *((_QWORD *)v20 + 8) = 0LL;
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  v10 = (_QWORD *)(a1 + 8);
  v11 = *(_QWORD **)(a1 + 8);
  if ( v11 != (_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v13 = v11;
      v11 = (_QWORD *)*v11;
      v14 = *((_BYTE *)v13 + 16);
      if ( v14 == 1 )
      {
        v26 = *((unsigned __int16 *)v13 + 9);
LABEL_42:
        KiTryUnwaitThread(CurrentPrcb, v13, v26, 0LL);
        goto LABEL_20;
      }
      if ( v14 != 2 )
      {
        v26 = 256LL;
        goto LABEL_42;
      }
      *((_BYTE *)v13 + 17) = 5;
      v15 = v13[3];
      *v13 = 0LL;
      v16 = (_QWORD *)(v15 + 8);
      KeGetCurrentIrql();
      __writecr8(2uLL);
      v17 = KeGetCurrentPrcb();
      v32 = v17;
      CurrentThread = v17->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v27) = KeIsThreadRunning(v17->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v13, v27);
      }
      KiAcquireKobjectLockSafe(v15);
      if ( (_QWORD *)*v16 == v16
        || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15 )
      {
        break;
      }
      v19 = (__int64)v32;
      if ( !(unsigned __int8)KiWakeQueueWaiter(v32, v15, v13) )
        goto LABEL_31;
LABEL_19:
      _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
      CurrentPrcb = v28;
LABEL_20:
      if ( v11 == v10 )
      {
        CurrentIrql = v29;
        goto LABEL_8;
      }
    }
    v19 = (__int64)v32;
LABEL_31:
    v24 = *(_DWORD *)(v15 + 4);
    *(_DWORD *)(v15 + 4) = v24 + 1;
    v25 = *(_QWORD **)(v15 + 32);
    if ( *v25 != v15 + 24 )
      __fastfail(3u);
    *v13 = v15 + 24;
    v13[1] = v25;
    *v25 = v13;
    *(_QWORD *)(v15 + 32) = v13;
    if ( !v24 && (_QWORD *)*v16 != v16 )
      KiWakeOtherQueueWaiters(v19, v15);
    goto LABEL_19;
  }
LABEL_8:
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v10 = v10;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v31 )
    KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v33;
}
