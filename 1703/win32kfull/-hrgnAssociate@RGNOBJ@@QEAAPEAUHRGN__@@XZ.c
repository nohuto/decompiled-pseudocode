/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E9CC
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C002431C (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     NtGdiCreateRoundRectRgn @ 0x1C011CEA0 (NtGdiCreateRoundRectRgn.c)
 *     CLIPOBJ_GetRgn @ 0x1C0247B90 (CLIPOBJ_GetRgn.c)
 *     GreGetDxRgn @ 0x1C024E018 (GreGetDxRgn.c)
 *     NtGdiCreateEllipticRgn @ 0x1C027DD60 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1C028C7B0 (NtGdiPathToRegion.c)
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
