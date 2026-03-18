/*
 * XREFs of PiDeviceDependencyInit @ 0x140819A3C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1405BF130 (PnpReleaseDependencyRelationsLock.c)
 */

__int64 PiDeviceDependencyInit()
{
  ExInitializeResourceLite(&PiDependencyRelationsLock);
  PiDependencyEdgeWriteLock = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  qword_140368988 = (__int64)&PiDependencyNodeListHead;
  PiDependencyNodeListHead = (__int64)&PiDependencyNodeListHead;
  qword_1403689A8 = (__int64)&PiDependencyNodeEmptyList;
  PiDependencyNodeEmptyList = (__int64)&PiDependencyNodeEmptyList;
  qword_140368998 = (__int64)&PiRebuildPowerRelationsQueue;
  PiRebuildPowerRelationsQueue = (__int64)&PiRebuildPowerRelationsQueue;
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
