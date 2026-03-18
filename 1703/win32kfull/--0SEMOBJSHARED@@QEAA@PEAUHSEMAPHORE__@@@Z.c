/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0009CFC (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreOnCURSINFODestroy @ 0x1C00451AC (GreOnCURSINFODestroy.c)
 *     GreSetPointer @ 0x1C00471C8 (GreSetPointer.c)
 *     GrePtInSprite @ 0x1C009CD10 (GrePtInSprite.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     GreMovePointer @ 0x1C00BC9F0 (GreMovePointer.c)
 *     GreDwmGetSurfaceData @ 0x1C00F8D58 (GreDwmGetSurfaceData.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C011511C (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C013B38C (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C024DEC0 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C024ECC8 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C02664B0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0266704 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C02668BC (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C0266AA8 (vSetDevDragRectDPI.c)
 *     GreSaveScreenBits @ 0x1C027D6D8 (GreSaveScreenBits.c)
 * Callees:
 *     <none>
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphoreSharedInternal(a2);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  return this;
}
