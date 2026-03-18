/*
 * XREFs of IoUnregisterFsRegistrationChange @ 0x14071C920
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rcx
  __int64 *v6; // rax
  __int64 **v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  for ( i = (__int64 *)IopFsNotifyChangeQueueHead; i != &IopFsNotifyChangeQueueHead; i = (__int64 *)*i )
  {
    if ( (PDRIVER_OBJECT)i[2] == DriverObject && (PDRIVER_FS_NOTIFICATION)i[3] == DriverNotificationRoutine )
    {
      v6 = (__int64 *)*i;
      if ( *(__int64 **)(*i + 8) != i || (v7 = (__int64 **)i[1], *v7 != i) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = (__int64)v7;
      ExFreePoolWithTag(i, 0);
      break;
    }
  }
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObfDereferenceObject(DriverObject);
}
