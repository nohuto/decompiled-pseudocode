/*
 * XREFs of KiRundownMutants @ 0x140040DFC
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

void __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1, __int64 *a2)
{
  _QWORD *v2; // r15
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  int v6; // esi
  struct _KPRCB *v7; // rbx
  _QWORD *v8; // r14
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  volatile signed __int32 *v12; // r12
  volatile signed __int32 *v13; // rax
  __int64 v14; // rsi
  volatile signed __int32 **v15; // rcx
  char v16; // al
  bool v17; // zf
  __int64 v18; // rax
  _QWORD *v19; // rbp
  struct _KPRCB *v20; // rsi
  __int64 v21; // rbp
  _QWORD *v22; // r14
  struct _KPRCB *v23; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v25; // r8
  int v26; // r8d
  char v27; // [rsp+30h] [rbp-58h]
  char v28[80]; // [rsp+38h] [rbp-50h] BYREF
  int v29; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+98h] [rbp+10h] BYREF
  int v31; // [rsp+A0h] [rbp+18h] BYREF
  struct _KPRCB *v32; // [rsp+A8h] [rbp+20h]

  v2 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v2 != v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v27 = CurrentIrql;
LABEL_3:
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 0;
    v32 = CurrentPrcb;
    v29 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = KeGetCurrentPrcb();
        v30 = 0;
        while ( 1 )
        {
          LOBYTE(a2) = 1;
          KiSetVpThreadSpinLockCount(v7, a2);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v7, 0LL);
          do
            KeYieldProcessorEx(&v30);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v8 = (_QWORD *)*v2;
        if ( (_QWORD *)*v2 == v2 )
        {
          KiReleaseThreadLockSafe(BugCheckParameter1);
          KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
          return;
        }
        v9 = (volatile signed __int32 *)(v8 - 3);
        if ( *((_BYTE *)v8 + 25) )
          KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v8 - 3), 0LL, 0LL);
        if ( _interlockedbittestandset(v9, 7u) )
          break;
LABEL_9:
        v10 = *v8;
        v11 = (_QWORD *)*((_QWORD *)v9 + 4);
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v11 != v8 )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        KiReleaseThreadLockSafe(BugCheckParameter1);
        *((_QWORD *)v9 + 5) = 0LL;
        *((_DWORD *)v9 + 1) = 1;
        *((_BYTE *)v9 + 48) = 1;
        v12 = (volatile signed __int32 *)*((_QWORD *)v9 + 1);
        if ( v12 != v9 + 2 )
        {
          while ( 1 )
          {
            v13 = *(volatile signed __int32 **)v12;
            v14 = (__int64)v12;
            v12 = v13;
            v15 = *(volatile signed __int32 ***)(v14 + 8);
            if ( *((_QWORD *)v13 + 1) != v14 || *v15 != (volatile signed __int32 *)v14 )
              __fastfail(3u);
            *v15 = v13;
            *((_QWORD *)v13 + 1) = v15;
            v16 = *(_BYTE *)(v14 + 16);
            if ( v16 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), v28) )
              {
                v17 = (*((_DWORD *)v9 + 1))-- == 1;
                if ( v17 )
                  goto LABEL_20;
              }
            }
            else if ( v16 == 2 )
            {
              *(_BYTE *)(v14 + 17) = 5;
              v21 = *(_QWORD *)(v14 + 24);
              *(_QWORD *)v14 = 0LL;
              v22 = (_QWORD *)(v21 + 8);
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v23 = KeGetCurrentPrcb();
              CurrentThread = v23->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                LOBYTE(v25) = KeIsThreadRunning(v23->CurrentThread);
                EtwTraceEnqueueWork(CurrentThread, v14, v25);
              }
              KiAcquireKobjectLockSafe(v21);
              if ( (_QWORD *)*v22 == v22
                || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15
                || !KiWakeQueueWaiter((__int64)v23, v21, v14) )
              {
                v26 = *(_DWORD *)(v21 + 4);
                *(_DWORD *)(v21 + 4) = v26 + 1;
                a2 = *(__int64 **)(v21 + 32);
                if ( *a2 != v21 + 24 )
                  __fastfail(3u);
                *(_QWORD *)v14 = v21 + 24;
                *(_QWORD *)(v14 + 8) = a2;
                *a2 = v14;
                *(_QWORD *)(v21 + 32) = v14;
                if ( !v26 && (_QWORD *)*v22 != v22 )
                  KiWakeOtherQueueWaiters(v23, v21);
              }
              _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
              v17 = (*((_DWORD *)v9 + 1))-- == 1;
              if ( v17 )
              {
LABEL_20:
                v6 = v29;
                v2 = (_QWORD *)(BugCheckParameter1 + 776);
                CurrentIrql = v27;
                break;
              }
              CurrentPrcb = v32;
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
            }
            if ( v12 == v9 + 2 )
              goto LABEL_20;
          }
        }
        _InterlockedAnd(v9, 0xFFFFFF7F);
        CurrentPrcb = v32;
        v29 = ++v6;
        if ( v6 == 32 )
        {
          KiExitDispatcher((_DWORD)v32, 0, 1, 1, CurrentIrql);
          KeGetCurrentIrql();
          goto LABEL_3;
        }
      }
      KiReleaseThreadLockSafe(BugCheckParameter1);
      ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v9 >> 4) & 0x3F)]);
      if ( v8 == (_QWORD *)*v2 )
      {
        KiAcquireKobjectLockSafe(v8 - 3);
        v18 = *((_QWORD *)v9 + 5);
        if ( v18 != BugCheckParameter1 )
          _InterlockedAnd(v9, 0xFFFFFF7F);
        v19 = 0LL;
        if ( v18 == BugCheckParameter1 )
          v19 = v8;
      }
      else
      {
        v19 = 0LL;
      }
      ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v9 >> 4) & 0x3F)]);
      v6 = v29;
      v17 = v19 == 0LL;
      CurrentPrcb = v32;
      if ( !v17 )
      {
        v20 = KeGetCurrentPrcb();
        v31 = 0;
        while ( 1 )
        {
          LOBYTE(a2) = 1;
          KiSetVpThreadSpinLockCount(v20, a2);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v20, 0LL);
          do
            KeYieldProcessorEx(&v31);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v6 = v29;
        goto LABEL_9;
      }
    }
  }
}
