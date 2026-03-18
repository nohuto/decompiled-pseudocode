/*
 * XREFs of ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000D38C
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000C2B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtBindCompositionSurface @ 0x1C000C700 (NtBindCompositionSurface.c)
 *     NtUnBindCompositionSurface @ 0x1C000D5A0 (NtUnBindCompositionSurface.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C00171E0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0017320 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C004BE80 (NtNotifyPresentToCompositionSurface.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C004C350 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C004C440 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::LockForWrite(char *Object, struct CCompositionSurface **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(Object + 40));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (struct CCompositionSurface *)(Object + 24);
  }
  return (unsigned int)v4;
}
