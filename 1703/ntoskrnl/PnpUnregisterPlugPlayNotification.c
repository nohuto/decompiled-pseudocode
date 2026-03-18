/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x14013600C
 * Callers:
 *     IoUnregisterPlugPlayNotification @ 0x1405751E0 (IoUnregisterPlugPlayNotification.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140586660 (IoUnregisterPlugPlayNotificationEx.c)
 *     PopCleanCoolingExtension @ 0x1406C683C (PopCleanCoolingExtension.c)
 *     PopPolicyDeviceTargetChange @ 0x1406CF520 (PopPolicyDeviceTargetChange.c)
 *     SmKmFileInfoCleanup @ 0x140701F04 (SmKmFileInfoCleanup.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x1404A6E8C (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(__int64 a1, char a2)
{
  struct _FAST_MUTEX *v2; // rbx
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v8; // rsi
  _QWORD *v9; // r15
  PVOID *v10; // r14
  PVOID *v11; // rdx
  PVOID **v12; // rax

  v2 = *(struct _FAST_MUTEX **)(a1 + 64);
  v5 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( PnpNotificationInProgress )
  {
    ExAcquireFastMutex(&PnpDeferredRegistrationLock);
    v8 = (PVOID *)PnpDeferredRegistrationList;
    while ( v8 != &PnpDeferredRegistrationList )
    {
      v9 = v8 + 2;
      v10 = v8;
      if ( v8[2] == (PVOID)a1 )
      {
        v5 = 1;
        if ( v2 )
          ExAcquireFastMutex(v2);
        v11 = (PVOID *)*v8;
        v8 = (PVOID *)*v8;
        v12 = (PVOID **)v10[1];
        if ( *((PVOID **)*v10 + 1) != v10 || *v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        PnpDereferenceNotify(*v9);
        if ( v2 )
          KeReleaseGuardedMutex(v2);
        ExFreePoolWithTag(v10, 0x37706E50u);
      }
      else
      {
        v8 = (PVOID *)*v8;
      }
    }
    KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 72), 1u);
  }
  else if ( v2 )
  {
    ExAcquireFastMutex(v2);
  }
  if ( !*(_BYTE *)(a1 + 58) || v5 )
  {
    *(_BYTE *)(a1 + 58) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 72));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v2 )
        ExAcquireFastMutex(v2);
    }
    PnpDereferenceNotify(a1);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 72));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0LL;
  }
  if ( v2 )
    KeReleaseGuardedMutex(v2);
  return 0LL;
}
