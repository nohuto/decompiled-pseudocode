/*
 * XREFs of CmpCloseKeyObject @ 0x1404CDE90
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpPostNotify @ 0x14048C118 (CmpPostNotify.c)
 *     CmpDelayedDerefKeys @ 0x14048D3E4 (CmpDelayedDerefKeys.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 (__fastcall *__fastcall CmpCloseKeyObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4))(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD)
{
  __int64 v4; // rsi
  __int64 (__fastcall *result)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD); // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  void *v12[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13[2]; // [rsp+50h] [rbp-38h] BYREF
  LARGE_INTEGER v14[3]; // [rsp+60h] [rbp-28h] BYREF

  v4 = 0LL;
  memset(v14, 0, sizeof(v14));
  result = (__int64 (__fastcall *)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp(v14, 0x20000u);
    result = (__int64 (__fastcall *)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))CmpTraceRoutine;
    if ( CmpTraceRoutine )
    {
      if ( a2 )
        v4 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    v13[1] = (__int64)v13;
    v13[0] = (__int64)v13;
    v12[1] = v12;
    v12[0] = v12;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry(a1);
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, 0LL) )
    {
      CmpUnlockKcb(*(PVOID *)(a2 + 8));
      CmpUnlockRegistry();
    }
    else
    {
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 2832LL));
      v11 = *(_QWORD *)(a2 + 16);
      if ( v11 && *(_QWORD *)(v11 + 16) != v11 + 16 )
        CmpPostNotify(v11, v9, v10, 0x10Bu, 0, (__int64 *)v12, v13);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 2832LL));
      CmpUnlockKcb(*(PVOID *)(a2 + 8));
      CmpUnlockRegistry();
      CmpDelayedDerefKeys(v12);
      CmpSignalDeferredPosts(v13);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    result = (__int64 (__fastcall *)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  }
  if ( result )
  {
    LOBYTE(a1) = 27;
    return (__int64 (__fastcall *)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, _QWORD))result(
                                                                                                a1,
                                                                                                v14,
                                                                                                0LL,
                                                                                                0LL,
                                                                                                v4,
                                                                                                0LL);
  }
  return result;
}
