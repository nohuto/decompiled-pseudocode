/*
 * XREFs of ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C002532C
 * Callers:
 *     GreRedrawSpriteOverlapPresent @ 0x1C0024790 (GreRedrawSpriteOverlapPresent.c)
 *     GrePtInSprite @ 0x1C009CD10 (GrePtInSprite.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A55D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     GreDwmGetSurfaceData @ 0x1C00F8D58 (GreDwmGetSurfaceData.c)
 *     GreDwmGetRedirectionStyle @ 0x1C024DEC0 (GreDwmGetRedirectionStyle.c)
 *     GreHintDxUpdate @ 0x1C024E738 (GreHintDxUpdate.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025A680 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

SEMOBJEXORSHARED *__fastcall SEMOBJEXORSHARED::SEMOBJEXORSHARED(SEMOBJEXORSHARED *this, HSEMAPHORE a2, int a3)
{
  *(_QWORD *)this = a2;
  if ( a3 == 1 )
  {
    GreAcquireSemaphoreSharedInternal(a2);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  }
  else
  {
    GreAcquireSemaphore(a2);
  }
  return this;
}
