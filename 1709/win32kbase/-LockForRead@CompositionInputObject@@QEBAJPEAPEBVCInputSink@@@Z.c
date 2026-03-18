/*
 * XREFs of ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0021700
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C0020D90 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C00211C0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0021670 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0021768 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C007DD60 (NtQueryCompositionSurfaceStatistics.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0084FD0 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0085370 (NtQueryCompositionSurfaceBinding.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0090D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C0151D70 (NtOpenCompositionSurfaceSectionInfo.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00387DC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionInputObject::LockForRead(char *Object, const struct CInputSink **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockShared((CPushLock *)(Object + 32));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (const struct CInputSink *)(Object + 24);
  }
  return (unsigned int)v4;
}
