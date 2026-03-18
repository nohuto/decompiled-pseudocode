/*
 * XREFs of KiResumeThread @ 0x1400419D8
 * Callers:
 *     KeForceResumeThread @ 0x140041924 (KeForceResumeThread.c)
 *     KiThawSingleThread @ 0x1400BD1B0 (KiThawSingleThread.c)
 *     KeResumeThread @ 0x1400BD808 (KeResumeThread.c)
 *     KiAdjustThreadTimer @ 0x140247E70 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiSignalThread @ 0x14002F9B0 (KiSignalThread.c)
 *     KiSignalThreadForApc @ 0x140041EC4 (KiSignalThreadForApc.c)
 *     KiComputeDueTime @ 0x14005AE10 (KiComputeDueTime.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiTestForAlertPending @ 0x1400CBD30 (KiTestForAlertPending.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiInsertTimerTable @ 0x1400F87E0 (KiInsertTimerTable.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     KiTraceSetTimer @ 0x14024ADF0 (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

char __fastcall KiResumeThread(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rdx
  unsigned int v12; // r15d
  unsigned __int8 v13; // r12
  unsigned __int8 i; // bp
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 *v17; // rcx
  struct _KPRCB *v18; // rsi
  __int64 v19; // rdx
  unsigned int v20; // ecx
  char v21; // al
  __int64 v22; // rbx
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdi
  _QWORD *v28; // rbp
  struct _KPRCB *v29; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v31; // r8
  int v32; // r8d
  __int64 *v33; // rdx
  int v35; // [rsp+80h] [rbp+8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+10h]
  int v37; // [rsp+90h] [rbp+18h] BYREF
  int v38; // [rsp+98h] [rbp+20h] BYREF

  v36 = a2;
  *(_DWORD *)(a1 + 740) = 1;
  v4 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v37 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v37);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_BYTE *)(a1 + 388) == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
  {
    if ( !a3 )
    {
      *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
      KiReleaseThreadLockSafe(a1);
      v12 = *(unsigned __int8 *)(a1 + 587);
      v13 = 0;
      for ( i = 0; i < v12; ++i )
      {
        v15 = *(_QWORD *)(a1 + 208) + 48LL * i;
        if ( *(_BYTE *)(v15 + 17) == 6 )
        {
          v16 = *(_QWORD *)(v15 + 32);
          *(_BYTE *)(v15 + 17) = 4;
          KiAcquireKobjectLockSafe(v16);
          if ( *(int *)(v16 + 4) > 0 || (*(_BYTE *)v16 & 0x7F) == 2 )
          {
            _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
            *(_BYTE *)(v15 + 17) = 5;
            a3 = 1;
            break;
          }
          v17 = *(__int64 **)(v16 + 16);
          if ( *v17 != v16 + 8 )
            __fastfail(3u);
          *(_QWORD *)v15 = v16 + 8;
          *(_QWORD *)(v15 + 8) = v17;
          *v17 = v15;
          *(_QWORD *)(v16 + 16) = v15;
          _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
        }
      }
      if ( (*(_DWORD *)(a1 + 116) & 0x20000) != 0 && !a3 )
      {
        v25 = *(_QWORD *)(a1 + 280);
        *(_DWORD *)(a1 + 256) |= 0x40000080u;
        if ( (unsigned int)KiComputeDueTime(a1 + 256, v25, 0LL, &v35) )
        {
          v13 = 1;
          if ( (unsigned __int8)KiInsertTimerTable(v4, (int)a1 + 256, 0, v35, 0LL) )
          {
            if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
            {
              LOBYTE(v26) = 1;
              KiTraceSetTimer(a1 + 256, 0LL, v26);
            }
            else
            {
              _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
            }
          }
          else
          {
            KiTimerWaitTest(v4, a1 + 256, 0LL);
          }
        }
        else
        {
          a3 = 1;
        }
      }
      v18 = KeGetCurrentPrcb();
      v38 = 0;
      while ( 1 )
      {
        LOBYTE(v11) = 1;
        KiSetVpThreadSpinLockCount(v18, v11);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v18, 0LL);
        do
          KeYieldProcessorEx(&v38);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v20 = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | (v13 << 9) & 0xFFFDFFFF;
      v21 = *(_BYTE *)(a1 + 112) & 0xE7;
      *(_DWORD *)(a1 + 116) = v20;
      if ( v21 != 5
        || (LOBYTE(v7) = *(_BYTE *)(a1 + 391),
            LOBYTE(v19) = (v20 & 0x10) != 0,
            (unsigned int)KiTestForAlertPending(a1, v19, v7, 0LL)) )
      {
        a3 = 1;
      }
      else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        a3 = 1;
      }
    }
    *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
  }
  if ( a3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    {
      if ( *(_BYTE *)(a1 + 388) == 5 )
        KiSignalThread(v4, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(v7) = 2;
      KiSignalThreadForApc(v4, a1 + 648, v7);
    }
  }
  LOBYTE(v8) = KiReleaseThreadLockSafe(a1);
  v9 = (_QWORD *)(a1 + 744);
  v10 = *(_QWORD **)(a1 + 744);
  if ( v10 != (_QWORD *)(a1 + 744) )
  {
    do
    {
      v22 = (__int64)v10;
      v10 = (_QWORD *)*v10;
      v23 = *(_BYTE *)(v22 + 16);
      if ( v23 == 1 )
      {
        v24 = *(unsigned __int16 *)(v22 + 18);
      }
      else
      {
        if ( v23 == 2 )
        {
          *(_BYTE *)(v22 + 17) = 5;
          v27 = *(_QWORD *)(v22 + 24);
          *(_QWORD *)v22 = 0LL;
          v28 = (_QWORD *)(v27 + 8);
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v29 = KeGetCurrentPrcb();
          CurrentThread = v29->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v31) = KeIsThreadRunning(v29->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v22, v31);
          }
          KiAcquireKobjectLockSafe(v27);
          if ( (_QWORD *)*v28 == v28
            || *(_DWORD *)(v27 + 40) >= *(_DWORD *)(v27 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v27 && CurrentThread->WaitReason == 15
            || (LOBYTE(v8) = KiWakeQueueWaiter((__int64)v29, v27, v22), !(_BYTE)v8) )
          {
            v32 = *(_DWORD *)(v27 + 4);
            *(_DWORD *)(v27 + 4) = v32 + 1;
            v8 = v27 + 24;
            v33 = *(__int64 **)(v27 + 32);
            if ( *v33 != v27 + 24 )
              __fastfail(3u);
            *(_QWORD *)v22 = v8;
            *(_QWORD *)(v22 + 8) = v33;
            *v33 = v22;
            *(_QWORD *)(v27 + 32) = v22;
            if ( !v32 && (_QWORD *)*v28 != v28 )
              LOBYTE(v8) = KiWakeOtherQueueWaiters(v29, v27);
          }
          _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
          v4 = v36;
          continue;
        }
        v24 = 256LL;
      }
      LOBYTE(v8) = KiTryUnwaitThread(v4, v22, v24, 0LL);
    }
    while ( v10 != v9 );
  }
  v9[1] = v9;
  *v9 = v9;
  return v8;
}
