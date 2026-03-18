/*
 * XREFs of IoUnregisterContainerNotification @ 0x14071D2B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExUnregisterCallback @ 0x14016DE80 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  PVOID *v5; // rax
  PVOID *v6; // rbx
  PVOID *v7; // rcx
  PVOID **v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v5 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v5 != &IopSessionNotificationQueueHead )
  {
    v6 = v5;
    v5 = (PVOID *)*v5;
    if ( v6[4] == CallbackRegistration )
    {
      ObfDereferenceObject(v6[2]);
      ExUnregisterCallback(CallbackRegistration);
      v7 = (PVOID *)*v6;
      if ( *((PVOID **)*v6 + 1) != v6 || (v8 = (PVOID **)v6[1], *v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = v8;
      ExFreePoolWithTag(v6, 0);
      break;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL, v3, v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
