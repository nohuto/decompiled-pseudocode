/*
 * XREFs of IopCleanupNotifications @ 0x1400159F4
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1400E5250 (IopDeleteFileObjectExtension.c)
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     IopDeleteDevice @ 0x140588740 (IopDeleteDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExUnregisterCallback @ 0x140131CC0 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCleanupNotifications(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi
  PVOID *v6; // rbx
  PVOID v7; // rcx
  PVOID *v9; // rcx
  PVOID **v10; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v5 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v5 != &IopSessionNotificationQueueHead )
  {
    v6 = v5;
    v5 = (PVOID *)*v5;
    v7 = v6[2];
    if ( v7 == a1 && (!a2 || v6[5] == a2) )
    {
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      ExUnregisterCallback(v6[4]);
      v9 = (PVOID *)*v6;
      if ( *((PVOID **)*v6 + 1) != v6 || (v10 = (PVOID **)v6[1], *v10 != v6) )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      ExFreePoolWithTag(v6, 0);
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
