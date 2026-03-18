/*
 * XREFs of ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D3F4
 * Callers:
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C000C400 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C000CA20 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000CC00 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000CE40 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000D000 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C000D210 (NtQueryCompositionSurfaceStatistics.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C004C170 (NtOpenCompositionSurfaceSectionInfo.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011BB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForRead(char *Object, const struct CCompositionSurface **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockShared((CPushLock *)(Object + 40));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (const struct CCompositionSurface *)(Object + 24);
  }
  return (unsigned int)v4;
}
