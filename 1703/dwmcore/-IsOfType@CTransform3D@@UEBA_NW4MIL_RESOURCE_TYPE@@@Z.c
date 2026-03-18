/*
 * XREFs of ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002B420
 * Callers:
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180023760 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180029550 (-IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002BAD0 (-IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRotateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D2510 (-IsOfType@CRotateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CScaleTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180154320 (-IsOfType@CScaleTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransform3DGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180154360 (-IsOfType@CTransform3DGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTranslateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180154380 (-IsOfType@CTranslateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTransform3D::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 23 && (unsigned int)(a2 - 116) > 1 )
    return a2 == 6;
  return v2;
}
