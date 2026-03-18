/*
 * XREFs of IoUnregisterFsRegistrationChange @ 0x1406B7C70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
