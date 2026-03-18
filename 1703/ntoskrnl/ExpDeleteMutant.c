/*
 * XREFs of ExpDeleteMutant @ 0x140011530
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140011644 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall ExpDeleteMutant(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  int v3; // edi
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // r12
  _QWORD *v12; // r13
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char v15; // al
  bool v16; // zf
  unsigned __int8 IsThreadRunning; // al
  __int64 v18; // r9
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  int v22; // r9d
  _QWORD *v23; // r8
  _KTHREAD *v24; // [rsp+30h] [rbp-78h]
  _BYTE v25[8]; // [rsp+38h] [rbp-70h] BYREF
  volatile signed __int32 v26; // [rsp+40h] [rbp-68h]
  int v27; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+10h]
  _QWORD *v29; // [rsp+C0h] [rbp+18h]
  struct _KPRCB *v30; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1);
  v6 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 1;
  *(_BYTE *)(a1 + 48) = 1;
  if ( v6 > 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    goto LABEL_3;
  }
  v26 = *(_DWORD *)a1;
  BYTE2(v26) = 0;
  *(_DWORD *)a1 = v26;
  v3 = *(unsigned __int8 *)(a1 + 49);
  v8 = *(_QWORD *)(a1 + 40);
  v27 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v27);
    while ( *(_QWORD *)(v8 + 64) );
  }
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD *)(v9 + 8) != a1 + 24 || *v10 != a1 + 24 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *(_QWORD *)(v8 + 64) = 0LL;
  v11 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)(a1 + 40) = 0LL;
  while ( v11 != (_QWORD *)(a1 + 8) )
  {
    v12 = v11;
    v11 = (_QWORD *)*v11;
    v13 = *v12;
    v14 = (_QWORD *)v12[1];
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v14 != v12 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = *((_BYTE *)v12 + 16);
    if ( v15 == 1 )
    {
      if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v12, *((unsigned __int16 *)v12 + 9), v25) )
      {
        v16 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v16 )
          break;
      }
    }
    else
    {
      if ( v15 == 2 )
      {
        *((_BYTE *)v12 + 17) = 5;
        v28 = v12[3];
        v29 = (_QWORD *)(v28 + 8);
        *v12 = 0LL;
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v30 = KeGetCurrentPrcb();
        v24 = v30->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(v30->CurrentThread);
          EtwTraceEnqueueWork(v18, v12, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v28);
        v19 = v29;
        v20 = v28;
        if ( (_QWORD *)*v19 == v19
          || *(_DWORD *)(v28 + 40) >= *(_DWORD *)(v28 + 44)
          || v24->Queue == (_DISPATCHER_HEADER *volatile)v28 && v24->WaitReason == 15 )
        {
LABEL_29:
          v22 = *(_DWORD *)(v20 + 4);
          *(_DWORD *)(v20 + 4) = v22 + 1;
          v23 = *(_QWORD **)(v20 + 32);
          if ( *v23 != v20 + 24 )
            __fastfail(3u);
          *v12 = v20 + 24;
          v12[1] = v23;
          *v23 = v12;
          *(_QWORD *)(v20 + 32) = v12;
          if ( !v22 && (_QWORD *)*v19 != v19 )
          {
            KiWakeOtherQueueWaiters((__int64)v30, v20);
            v20 = v28;
          }
        }
        else
        {
          v21 = KiWakeQueueWaiter(v30, v28, v12);
          v20 = v28;
          if ( !v21 )
          {
            v19 = v29;
            goto LABEL_29;
          }
        }
        _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
        v16 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v16 )
          break;
        continue;
      }
      KiTryUnwaitThread(CurrentPrcb, v12, 256LL, 0LL);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(a1);
LABEL_3:
  result = KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  if ( v3 )
    return KiLeaveCriticalRegionUnsafe(CurrentThread);
  return result;
}
