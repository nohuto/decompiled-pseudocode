/*
 * XREFs of ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0010660
 * Callers:
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0003420 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0005330 (NtQueryCompositionSurfaceStatistics.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000E0A0 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000E230 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000E890 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00105C8 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00106C8 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C007FE60 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C01509F0 (NtOpenCompositionSurfaceSectionInfo.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00111F8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
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
