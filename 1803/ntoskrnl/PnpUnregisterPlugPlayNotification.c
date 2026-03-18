/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x14014C068
 * Callers:
 *     IoUnregisterPlugPlayNotification @ 0x1405E57F0 (IoUnregisterPlugPlayNotification.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140614660 (IoUnregisterPlugPlayNotificationEx.c)
 *     PopCleanCoolingExtension @ 0x14075E6DC (PopCleanCoolingExtension.c)
 *     PopPolicyDeviceTargetChange @ 0x14076B1A0 (PopPolicyDeviceTargetChange.c)
 *     SmKmFileInfoCleanup @ 0x14079D204 (SmKmFileInfoCleanup.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x1405E5808 (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(PVOID P, char a2)
{
  struct _FAST_MUTEX *v2; // rbx
  char v5; // r12
  PVOID *v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v9; // r15
  PVOID *v10; // r14
  PVOID *v11; // rax
  PVOID **v12; // rdx

  v2 = (struct _FAST_MUTEX *)*((_QWORD *)P + 8);
  v5 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( PnpNotificationInProgress )
  {
    ExAcquireFastMutex(&PnpDeferredRegistrationLock);
    v7 = (PVOID *)PnpDeferredRegistrationList;
    while ( v7 != &PnpDeferredRegistrationList )
    {
      v9 = v7 + 2;
      v10 = v7;
      if ( v7[2] == P )
      {
        v5 = 1;
        if ( v2 )
          ExAcquireFastMutex(v2);
        v11 = (PVOID *)*v7;
        v7 = v11;
        if ( v11[1] != v10 || (v12 = (PVOID **)v10[1], *v12 != v10) )
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
        v7 = (PVOID *)*v7;
      }
    }
    KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)P + 9), 1u);
  }
  else if ( v2 )
  {
    ExAcquireFastMutex(v2);
  }
  if ( !*((_BYTE *)P + 58) || v5 )
  {
    *((_BYTE *)P + 58) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)P + 9));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v2 )
        ExAcquireFastMutex(v2);
    }
    PnpDereferenceNotify(P);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)P + 9));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
  if ( v2 )
    KeReleaseGuardedMutex(v2);
  return 0LL;
}
