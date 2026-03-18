/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x140126F40
 * Callers:
 *     IoUnregisterPlugPlayNotification @ 0x140585D70 (IoUnregisterPlugPlayNotification.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x1405F2A20 (IoUnregisterPlugPlayNotificationEx.c)
 *     PopCleanCoolingExtension @ 0x1406F6F14 (PopCleanCoolingExtension.c)
 *     PopPolicyDeviceTargetChange @ 0x1407070C0 (PopPolicyDeviceTargetChange.c)
 *     SmKmFileInfoCleanup @ 0x14073A200 (SmKmFileInfoCleanup.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x140585F14 (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(PVOID P, char a2)
{
  struct _FAST_MUTEX *v2; // rbx
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v8; // rsi
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
    v8 = (PVOID *)PnpDeferredRegistrationList;
    while ( v8 != &PnpDeferredRegistrationList )
    {
      v9 = v8 + 2;
      v10 = v8;
      if ( v8[2] == P )
      {
        v5 = 1;
        if ( v2 )
          ExAcquireFastMutex(v2);
        v11 = (PVOID *)*v8;
        v8 = (PVOID *)*v8;
        if ( *((PVOID **)*v10 + 1) != v10 || (v12 = (PVOID **)v10[1], *v12 != v10) )
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
