/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0
 * Callers:
 *     GreDwmGetSurfaceData @ 0x1C0086CB4 (GreDwmGetSurfaceData.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C00873CC (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreSetPointer @ 0x1C0089688 (GreSetPointer.c)
 *     GreMovePointer @ 0x1C008AF20 (GreMovePointer.c)
 *     GreOnCURSINFODestroy @ 0x1C0099740 (GreOnCURSINFODestroy.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00BF6A8 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     GrePtInSprite @ 0x1C01370F0 (GrePtInSprite.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C01423FC (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C024F930 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025073C (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C02656C0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C026598C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0265B44 (bSetDevPreviewRect.c)
 *     vSetDevDragRectDPI @ 0x1C0265D38 (vSetDevDragRectDPI.c)
 *     GreSaveScreenBits @ 0x1C027A0D8 (GreSaveScreenBits.c)
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
