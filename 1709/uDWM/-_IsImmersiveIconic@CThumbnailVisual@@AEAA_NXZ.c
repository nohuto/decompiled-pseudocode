/*
 * XREFs of ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000F768
 * Callers:
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000F610 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000F64C (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000F83C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000FB98 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000FDA4 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001019C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800106B0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x180077F04 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180078054 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CThumbnailVisual::_IsImmersiveIconic(CThumbnailVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v5; // rdx

  v2 = 0;
  v3 = *((_QWORD *)this + 46);
  if ( v3 && CWindowData::IsImmersiveWindow(*(CWindowData **)(v3 + 24)) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 46) + 36LL) & 0x800000) != 0 )
    {
      return 1;
    }
    else
    {
      v5 = *((_QWORD *)this + 47);
      if ( v5 )
        return *(_DWORD *)(v5 + 72) == 3;
    }
  }
  return v2;
}
