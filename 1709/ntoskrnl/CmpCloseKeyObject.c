/*
 * XREFs of CmpCloseKeyObject @ 0x14046F8B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     CmpDelayedDerefKeys @ 0x14047D8A8 (CmpDelayedDerefKeys.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 */

__int64 (__fastcall *__fastcall CmpCloseKeyObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 v4; // rsi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15[3]; // [rsp+60h] [rbp-28h] BYREF

  v4 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp(v15, 0x20000u);
    if ( CmpTraceRoutine )
    {
      if ( a2 )
        v4 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    v14[1] = v14;
    v14[0] = v14;
    v13[1] = v13;
    v13[0] = v13;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    v9 = *(_QWORD *)(a2 + 8);
    ExAcquirePushLockSharedEx(v9 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 48));
    if ( (*(_DWORD *)(a2 + 48) & 9) != 0 )
    {
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry();
    }
    else
    {
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 2832LL));
      v12 = *(_QWORD *)(a2 + 16);
      if ( v12 && *(_QWORD *)(v12 + 16) != v12 + 16 )
        CmpPostNotify(v12, v10, v11, 267, 0, (__int64)v13, (__int64)v14);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 2832LL));
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry();
      CmpDelayedDerefKeys(v13);
      CmpSignalDeferredPosts(v14);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  result = CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    LOBYTE(a1) = 27;
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CmpTraceRoutine(
                                                                                     a1,
                                                                                     v15,
                                                                                     0LL,
                                                                                     0LL,
                                                                                     v4,
                                                                                     0LL);
  }
  return result;
}
