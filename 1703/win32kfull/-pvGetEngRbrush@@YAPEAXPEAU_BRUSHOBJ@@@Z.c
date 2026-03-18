/*
 * XREFs of ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00AB680
 * Callers:
 *     EngBitBlt @ 0x1C00769E0 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A9838 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0124994 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00AC7FC (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00AD404 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __fastcall pvGetEngRbrush(struct _BRUSHOBJ *a1)
{
  PVOID result; // rax
  __int64 v2; // rdi
  PVOID pvRbrush; // rcx

  result = a1[1].pvRbrush;
  v2 = 0LL;
  if ( !result )
  {
    if ( bGetRealizedBrush(
           *(struct BRUSH **)&a1[5].iSolidColor,
           (struct EBRUSHOBJ *)a1,
           (int (*)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))EngRealizeBrush) )
    {
      vTryToCacheRealization(
        (struct EBRUSHOBJ *)a1,
        (struct RBRUSH *)a1[1].pvRbrush,
        *(struct BRUSH **)&a1[5].iSolidColor,
        1);
      return a1[1].pvRbrush;
    }
    else
    {
      pvRbrush = a1[1].pvRbrush;
      if ( pvRbrush )
      {
        Win32FreePool(pvRbrush);
        a1[1].pvRbrush = 0LL;
      }
    }
    return (PVOID)v2;
  }
  return result;
}
