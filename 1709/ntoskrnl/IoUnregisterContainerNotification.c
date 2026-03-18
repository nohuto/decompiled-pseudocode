/*
 * XREFs of IoUnregisterContainerNotification @ 0x1406B8590
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExUnregisterCallback @ 0x140131CC0 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rax
  PVOID *v4; // rbx
  PVOID *v5; // rcx
  PVOID **v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v3 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v3 != &IopSessionNotificationQueueHead )
  {
    v4 = v3;
    v3 = (PVOID *)*v3;
    if ( v4[4] == CallbackRegistration )
    {
      ObfDereferenceObject(v4[2]);
      ExUnregisterCallback(CallbackRegistration);
      v5 = (PVOID *)*v4;
      if ( *((PVOID **)*v4 + 1) != v4 || (v6 = (PVOID **)v4[1], *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
      ExFreePoolWithTag(v4, 0);
      break;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
