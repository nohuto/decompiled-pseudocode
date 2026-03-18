/*
 * XREFs of IopCleanupNotifications @ 0x140160260
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140062248 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x140577F90 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExUnregisterCallback @ 0x14016DE80 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall IopCleanupNotifications(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID *v7; // rdi
  PVOID *v8; // rbx
  PVOID v9; // rcx
  PVOID *v11; // rcx
  PVOID **v12; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v7 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v7 != &IopSessionNotificationQueueHead )
  {
    v8 = v7;
    v7 = (PVOID *)*v7;
    v9 = v8[2];
    if ( v9 == a1 && (!a2 || v8[5] == a2) )
    {
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
      ExUnregisterCallback(v8[4]);
      v11 = (PVOID *)*v8;
      if ( *((PVOID **)*v8 + 1) != v8 || (v12 = (PVOID **)v8[1], *v12 != v8) )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      ExFreePoolWithTag(v8, 0);
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL, v5, v6);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
