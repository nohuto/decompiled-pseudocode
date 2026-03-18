/*
 * XREFs of GetObjectPath @ 0x1C0012478
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     SyncEvalObject @ 0x1C0006D00 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     ProcessEvalObj @ 0x1C000C830 (ProcessEvalObj.c)
 *     CreateNativeNameSpaceObject @ 0x1C001211C (CreateNativeNameSpaceObject.c)
 *     Release @ 0x1C0015300 (Release.c)
 *     AMLIFindNameSpaceObject @ 0x1C0016084 (AMLIFindNameSpaceObject.c)
 *     Acquire @ 0x1C0016280 (Acquire.c)
 *     ReadFieldObj @ 0x1C0016D90 (ReadFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C00185FC (GetFieldUnitRegionObj.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C00216BC (AMLIEvalPackageElement.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C005BF20 (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x1C005E060 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C005E350 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C005E920 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C005F5C8 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C00602C8 (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C00609B0 (ResetSignal.c)
 *     Wait @ 0x1C0062FA0 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C000C0B0 (GetObjectPathNoLock.c)
 */

_QWORD *__fastcall GetObjectPath(__int64 a1)
{
  KIRQL v2; // bl
  _QWORD *ObjectPathNoLock; // rdi

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = GetObjectPathNoLock(a1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return ObjectPathNoLock;
}
