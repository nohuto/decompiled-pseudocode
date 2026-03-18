/*
 * XREFs of GetObjectPath @ 0x1C00233D0
 * Callers:
 *     ProcessEvalObj @ 0x1C0001B70 (ProcessEvalObj.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     SyncEvalObject @ 0x1C0002920 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     AMLIEvalPackageElement @ 0x1C0005854 (AMLIEvalPackageElement.c)
 *     ReadFieldObj @ 0x1C0010900 (ReadFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C00121AC (GetFieldUnitRegionObj.c)
 *     Acquire @ 0x1C001CB50 (Acquire.c)
 *     Release @ 0x1C001D360 (Release.c)
 *     AMLIFindNameSpaceObject @ 0x1C001E344 (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C002307C (CreateNativeNameSpaceObject.c)
 *     DumpObject @ 0x1C002C0B0 (DumpObject.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C005B3AC (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x1C005C2C0 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C005C5A0 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C005CB70 (RunMethodCallBack.c)
 *     FreeContext @ 0x1C005EDD8 (FreeContext.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C005F7B0 (ResetSignal.c)
 *     Wait @ 0x1C0061DD0 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C00164F0 (GetObjectPathNoLock.c)
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
