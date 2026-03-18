/*
 * XREFs of ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027C8B0
 * Callers:
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C027D7C0 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C027F6E0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0280F68 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     MulProcessChildRedirectionDfbSurfaces2 @ 0x1C02827F0 (MulProcessChildRedirectionDfbSurfaces2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMetaRedirectionBitmap(struct _SURFOBJ *a1)
{
  unsigned int v2; // ebx

  if ( a1->iType != 3 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 116) & 1) == 0
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 116) & 8) == 0 )
  {
    return 0;
  }
  return v2;
}
