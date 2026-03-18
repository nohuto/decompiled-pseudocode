/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0017A18
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0091B60 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     NtGdiCreateRoundRectRgn @ 0x1C00B5E20 (NtGdiCreateRoundRectRgn.c)
 *     CLIPOBJ_GetRgn @ 0x1C0249570 (CLIPOBJ_GetRgn.c)
 *     GreGetDxRgn @ 0x1C024FA88 (GreGetDxRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C027A870 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1C02892D0 (NtGdiPathToRegion.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(void **this)
{
  volatile signed __int32 *v1; // rbx
  struct HOBJ__ *result; // rax

  v1 = (volatile signed __int32 *)*this;
  result = HmgInsertObjectInternal(*this, 1u, 4u);
  if ( result )
  {
    if ( v1 )
      _InterlockedDecrement(v1 + 3);
  }
  return result;
}
