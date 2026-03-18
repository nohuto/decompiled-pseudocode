/*
 * XREFs of ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006FD8C
 * Callers:
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002ADA0 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRectangleGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A6960 (-IsOfType@CRectangleGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCombinedGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F3B0 (-IsOfType@CCombinedGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CEllipseGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F410 (-IsOfType@CEllipseGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGeometryGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F4C0 (-IsOfType@CGeometryGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLineGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F510 (-IsOfType@CLineGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPathGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F570 (-IsOfType@CPathGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002AED0 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CGeometry::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  bool v4; // al

  if ( a2 == 60 )
    return 1;
  v4 = CPropertyChangeResource::IsOfType(a1, a2);
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
