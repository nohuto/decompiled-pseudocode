/*
 * XREFs of PiDeviceDependencyInit @ 0x140849EFC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1405D2344 (PnpReleaseDependencyRelationsLock.c)
 */

__int64 PiDeviceDependencyInit()
{
  ExInitializeResourceLite(&PiDependencyRelationsLock);
  PiDependencyEdgeWriteLock = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  qword_140384928 = (__int64)&PiDependencyNodeListHead;
  PiDependencyNodeListHead = (__int64)&PiDependencyNodeListHead;
  qword_140384938 = (__int64)&PiDependencyNodeEmptyList;
  PiDependencyNodeEmptyList = (__int64)&PiDependencyNodeEmptyList;
  qword_140384948 = (__int64)&PiRebuildPowerRelationsQueue;
  PiRebuildPowerRelationsQueue = (__int64)&PiRebuildPowerRelationsQueue;
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
