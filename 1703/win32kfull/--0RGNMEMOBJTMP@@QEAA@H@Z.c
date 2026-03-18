/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C013C32C
 * Callers:
 *     ?psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK@Z @ 0x1C0085AE4 (-psSetupTransparentSrcSurface@@YAPEAVSURFACE@@PEAV1@0PEAU_RECTL@@PEAU_XLATEOBJ@@1AEAVSURFMEM@@KK.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  RGNMEMOBJ::RGNMEMOBJ(this, 0, 1);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
