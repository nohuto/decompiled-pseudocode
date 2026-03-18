/*
 * XREFs of KiResumeThread @ 0x140110E20
 * Callers:
 *     KeResumeThread @ 0x1400256A4 (KeResumeThread.c)
 *     KeForceResumeThread @ 0x140110D6C (KeForceResumeThread.c)
 *     KiThawSingleThread @ 0x140120CB4 (KiThawSingleThread.c)
 *     KiAdjustThreadTimer @ 0x140203CEC (KiAdjustThreadTimer.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiTestForAlertPending @ 0x140036818 (KiTestForAlertPending.c)
 *     KiComputeDueTime @ 0x140038E70 (KiComputeDueTime.c)
 *     KiSignalThreadForApc @ 0x14003FFA4 (KiSignalThreadForApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KiSignalThread @ 0x1400E2F70 (KiSignalThread.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400EC830 (KiInsertTimerTable.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KiTraceSetTimer @ 0x1402064DC (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // r8
  unsigned __int8 v12; // r13
  unsigned __int8 v13; // bp
  unsigned int i; // r15d
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 *v17; // rcx
  char v18; // al
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rdi
  _QWORD *v22; // rbp
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v25; // r8
  int v26; // r8d
  __int64 *v27; // rdx
  unsigned int v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+80h] [rbp+18h] BYREF
  int v31; // [rsp+88h] [rbp+20h] BYREF

  v30 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  v3 = a3;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v30);
    while ( *(_QWORD *)(a1 + 64) );
  }
  LOBYTE(v6) = *(_BYTE *)(a1 + 388);
  if ( (_BYTE)v6 == 5 )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 112) & 7;
    if ( (_BYTE)v6 == 4 )
    {
      if ( !v3 )
      {
        v12 = 0;
        v13 = 0;
        *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
        *(_QWORD *)(a1 + 64) = 0LL;
        for ( i = *(unsigned __int8 *)(a1 + 587); v13 < i; ++v13 )
        {
          v15 = *(_QWORD *)(a1 + 208) + 48LL * v13;
          if ( *(_BYTE *)(v15 + 17) == 6 )
          {
            v16 = *(_QWORD *)(v15 + 32);
            *(_BYTE *)(v15 + 17) = 4;
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v16);
            if ( *(int *)(v16 + 4) > 0 || (*(_BYTE *)v16 & 0x7F) == 2 )
            {
              _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
              *(_BYTE *)(v15 + 17) = 5;
              v3 = 1;
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
        if ( (*(_DWORD *)(a1 + 116) & 0x20000) != 0 && !v3 )
        {
          v20 = *(_QWORD *)(a1 + 280);
          *(_DWORD *)(a1 + 256) |= 0x40000080u;
          if ( (unsigned int)KiComputeDueTime((int *)(a1 + 256), v20, 0, &v29) )
          {
            v12 = 1;
            if ( KiInsertTimerTable(a2, a1 + 256, 0LL, v29, 0LL) )
            {
              if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
              {
                LOBYTE(a3) = 1;
                KiTraceSetTimer(a1 + 256, 0LL, a3);
              }
              else
              {
                _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
              }
            }
            else
            {
              KiTimerWaitTest(a2, a1 + 256, 0LL);
            }
          }
          else
          {
            v3 = 1;
          }
        }
        v31 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v31);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v18 = *(_BYTE *)(a1 + 112) & 0xE7;
        v19 = (*(_DWORD *)(a1 + 116) ^ (*(_DWORD *)(a1 + 116) ^ (v12 << 9)) & 0x200) & 0xFFFDFFFF;
        *(_DWORD *)(a1 + 116) = v19;
        if ( v18 != 5 || (unsigned int)KiTestForAlertPending(a1, (v19 & 0x10) != 0, *(_BYTE *)(a1 + 391), 0) )
        {
          v3 = 1;
        }
        else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 8) != 0 )
        {
          v3 = 1;
        }
      }
      LOBYTE(v6) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
      *(_BYTE *)(a1 + 112) = v6;
    }
  }
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0 )
    {
      LOBYTE(v6) = *(_BYTE *)(a1 + 388);
      if ( (_BYTE)v6 == 5 )
        LOBYTE(v6) = KiSignalThread(a2, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(a3) = 2;
      LOBYTE(v6) = KiSignalThreadForApc(a2, a1 + 648, a3);
    }
  }
  v7 = (_QWORD *)(a1 + 744);
  *(_QWORD *)(a1 + 64) = 0LL;
  v8 = *(_QWORD **)(a1 + 744);
  if ( v8 != (_QWORD *)(a1 + 744) )
  {
    do
    {
      v9 = (__int64)v8;
      v8 = (_QWORD *)*v8;
      v10 = *(_BYTE *)(v9 + 16);
      if ( v10 == 1 )
      {
        v11 = *(unsigned __int16 *)(v9 + 18);
      }
      else
      {
        if ( v10 == 2 )
        {
          *(_BYTE *)(v9 + 17) = 5;
          v21 = *(_QWORD *)(v9 + 24);
          *(_QWORD *)v9 = 0LL;
          v22 = (_QWORD *)(v21 + 8);
          KeGetCurrentIrql();
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v25) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v9, v25);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v21);
          if ( (_QWORD *)*v22 == v22
            || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15
            || (LOBYTE(v6) = KiWakeQueueWaiter((__int64)CurrentPrcb, v21, v9), !(_BYTE)v6) )
          {
            v26 = *(_DWORD *)(v21 + 4);
            *(_DWORD *)(v21 + 4) = v26 + 1;
            v6 = v21 + 24;
            v27 = *(__int64 **)(v21 + 32);
            if ( *v27 != v21 + 24 )
              __fastfail(3u);
            *(_QWORD *)v9 = v6;
            *(_QWORD *)(v9 + 8) = v27;
            *v27 = v9;
            *(_QWORD *)(v21 + 32) = v9;
            if ( !v26 && (_QWORD *)*v22 != v22 )
              LOBYTE(v6) = KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v21);
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          continue;
        }
        v11 = 256LL;
      }
      LOBYTE(v6) = KiTryUnwaitThread(a2, v9, v11, 0LL);
    }
    while ( v8 != v7 );
  }
  v7[1] = v7;
  *v7 = v7;
  return v6;
}
