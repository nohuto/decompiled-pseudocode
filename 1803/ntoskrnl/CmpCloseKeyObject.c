/*
 * XREFs of CmpCloseKeyObject @ 0x1404E2000
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpDelayedDerefKeys @ 0x1404E2844 (CmpDelayedDerefKeys.c)
 *     CmpPostNotify @ 0x1404E2F90 (CmpPostNotify.c)
 */

__int64 (__fastcall *__fastcall CmpCloseKeyObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdi
  char IsKeyDeletedForKeyBody; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD v24[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-48h] BYREF
  LARGE_INTEGER v26[4]; // [rsp+60h] [rbp-38h] BYREF

  memset(v26, 0, sizeof(v26));
  v7 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp(v26, 0x20000u);
    if ( CmpTraceRoutine )
    {
      if ( a2 )
        v7 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    v25[1] = v25;
    v25[0] = v25;
    v24[1] = v24;
    v24[0] = v24;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    v10 = *(_QWORD *)(a2 + 8);
    ExAcquirePushLockSharedEx(v10 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 48));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v15 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v15, v12, v13, v14);
      CmpUnlockRegistry();
    }
    else
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v15 + 24) + 1672LL, 0LL);
      v19 = *(_QWORD *)(a2 + 16);
      if ( v19 && *(_QWORD *)(v19 + 16) != v19 + 16 )
        CmpPostNotify(v19, v16, v17, 267, 0, (__int64)v24, (__int64)v25);
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 1672), v16, v17, v18);
      KeAbPostRelease(v20 + 1672);
      CmpUnlockKcb(*(_QWORD *)(a2 + 8), v21, v22, v23);
      CmpUnlockRegistry();
      CmpDelayedDerefKeys(v24);
      CmpSignalDeferredPosts(v25);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  result = CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    LOBYTE(v6) = 27;
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CmpTraceRoutine(
                                                                                     v6,
                                                                                     v26,
                                                                                     0LL,
                                                                                     0LL,
                                                                                     v7,
                                                                                     0LL);
  }
  return result;
}
