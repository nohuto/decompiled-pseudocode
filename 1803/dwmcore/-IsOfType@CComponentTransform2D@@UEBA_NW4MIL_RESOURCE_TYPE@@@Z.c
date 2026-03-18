/*
 * XREFs of ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096F30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x18009AB34 (-ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFOR.c)
 *     ?IsOfType@CViewBox@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18016F710 (-IsOfType@CViewBox@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800299F0 (-IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CComponentTransform2D::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 25 )
    return 1;
  v4 = CTransform3D::IsOfType(a1, a2);
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
