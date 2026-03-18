/*
 * XREFs of NtFlushKey @ 0x14057A130
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     CmpDoFlushAll @ 0x1401551E0 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 */

NTSTATUS __stdcall NtFlushKey(HANDLE KeyHandle)
{
  __int64 v2; // r15
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // al
  void *v6; // r8
  struct _KTHREAD *v7; // rcx
  BOOLEAN v8; // r12
  int v9; // ebx
  struct _KTHREAD *v10; // rax
  _QWORD *v11; // rdi
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // rcx
  struct _EX_RUNDOWN_REF *v19; // rbx
  struct _EX_RUNDOWN_REF *v20; // rsi
  PVOID v21; // rcx
  PVOID Object; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v25[4]; // [rsp+58h] [rbp-41h] BYREF
  LARGE_INTEGER v26[4]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v27[48]; // [rsp+98h] [rbp-1h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  v2 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v26, 0x20000u);
  Object = 0LL;
  v24[1] = v24;
  v3 = 0;
  v24[0] = v24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v7 = KeGetCurrentThread();
  v8 = v5;
  if ( !v5 )
  {
    KeLeaveCriticalRegionThread((__int64)v7);
    v9 = -1073741431;
    goto LABEL_21;
  }
  v9 = CmObReferenceObjectByHandle(KeyHandle, 0, v6, v7->PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    if ( CmpTraceRoutine && Object )
      v2 = *((_QWORD *)Object + 1);
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    v11 = Object;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v25[0] = v11;
      LOBYTE(v12) = 1;
      v13 = CmpCallCallBacksEx(30, (unsigned int)v25, 0, v12, 31, (__int64)v11, (__int64)v24);
      v9 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073740541 )
          v9 = 0;
        goto LABEL_18;
      }
      v3 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    v14 = v11[1];
    ExAcquirePushLockSharedEx(v14 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 48));
    v9 = CmpPerformKeyBodyDeletionCheck((__int64)Object, 0LL);
    if ( v9 >= 0 )
    {
      v18 = v11[1];
      v19 = *(struct _EX_RUNDOWN_REF **)(v18 + 24);
      if ( v19 == CmpMasterHive )
      {
        CmpUnlockKcb(v18, v15, v16, v17);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v27);
        CmpDoFlushAll();
        KiUnstackDetachProcess((__int64)v27, 0LL);
        v9 = 0;
        goto LABEL_16;
      }
      v20 = v19 + 204;
      if ( ExAcquireRundownProtection(v19 + 204) )
      {
        CmpUnlockKcb(v11[1], v15, v16, v17);
        CmpUnlockRegistry();
        CmpAttachToRegistryProcess((__int64)v27);
        v9 = CmpFlushHive((ULONG_PTR)v19, 0);
        if ( v9 < 0 )
          v9 = -1073741491;
        KiUnstackDetachProcess((__int64)v27, 0LL);
        ExReleaseRundownProtection(v20);
        goto LABEL_16;
      }
      v9 = -1073740763;
    }
    CmpUnlockKcb(v11[1], v15, v16, v17);
    CmpUnlockRegistry();
LABEL_16:
    if ( v3 )
      v9 = CmPostCallbackNotificationEx(31, (__int64)Object, v9, (__int64)v25, 0LL, v24);
LABEL_18:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v21 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_21:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v21) = 21;
    CmpTraceRoutine(v21, v26, (unsigned int)v9, 0LL, v2, 0LL);
  }
  if ( v8 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v9;
}
