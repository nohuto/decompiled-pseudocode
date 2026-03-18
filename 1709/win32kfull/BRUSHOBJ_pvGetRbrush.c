/*
 * XREFs of BRUSHOBJ_pvGetRbrush @ 0x1C0249370
 * Callers:
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C027C4B0 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 * Callees:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00BD590 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00BE198 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 */

PVOID __stdcall BRUSHOBJ_pvGetRbrush(BRUSHOBJ *pbo)
{
  PVOID result; // rax
  void *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v6; // rcx
  char *pvRbrush; // rdx

  result = pbo->pvRbrush;
  v2 = 0LL;
  if ( !result )
  {
    if ( (unsigned int)bGetRealizedBrush(
                         *(struct BRUSH **)&pbo[5].iSolidColor,
                         (struct EBRUSHOBJ *)pbo,
                         *(__int64 (__fastcall **)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)pbo[3].pvRbrush + 6) + 2800LL)) )
    {
      pvRbrush = (char *)pbo->pvRbrush;
      if ( pvRbrush )
      {
        vTryToCacheRealization(
          (struct EBRUSHOBJ *)pbo,
          (struct RBRUSH *)(pvRbrush - 16),
          *(struct BRUSH **)&pbo[5].iSolidColor,
          0);
        return pbo->pvRbrush;
      }
    }
    else
    {
      v6 = (char *)pbo->pvRbrush;
      if ( v6 )
      {
        Win32FreePool(v6 - 16, v4, v5);
        pbo->pvRbrush = 0LL;
      }
    }
    return v2;
  }
  return result;
}
