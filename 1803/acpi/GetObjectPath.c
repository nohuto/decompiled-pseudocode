/*
 * XREFs of GetObjectPath @ 0x1C00036E8
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     SyncEvalObject @ 0x1C00023B0 (SyncEvalObject.c)
 *     ProcessEvalObj @ 0x1C0002A90 (ProcessEvalObj.c)
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0043800 (AMLIFindNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C0043C60 (AMLIGetNameSpaceObjectPath.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0044910 (Simulator_NotifyNamespaceCollision.c)
 *     CreateNativeNameSpaceObject @ 0x1C0045240 (CreateNativeNameSpaceObject.c)
 *     GetFieldUnitRegionObj @ 0x1C0046B60 (GetFieldUnitRegionObj.c)
 *     DebugNotify @ 0x1C0048970 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0048C60 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C00492E0 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C004C888 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C004EC28 (NestAsyncEvalObject.c)
 *     Release @ 0x1C004F7F0 (Release.c)
 *     ResetSignal @ 0x1C004F950 (ResetSignal.c)
 *     Acquire @ 0x1C004FCE0 (Acquire.c)
 *     Wait @ 0x1C00538B0 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C00037FC (GetObjectPathNoLock.c)
 */

__int64 __fastcall GetObjectPath(__int64 a1)
{
  KIRQL v2; // bl
  __int64 ObjectPathNoLock; // rdi

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = GetObjectPathNoLock(a1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return ObjectPathNoLock;
}
