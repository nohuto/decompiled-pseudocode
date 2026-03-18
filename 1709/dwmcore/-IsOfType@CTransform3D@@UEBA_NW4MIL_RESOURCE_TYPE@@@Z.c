/*
 * XREFs of ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096850
 * Callers:
 *     ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800957D0 (-IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B4E80 (-IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180129850 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRotateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180147310 (-IsOfType@CRotateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CScaleTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180147360 (-IsOfType@CScaleTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransform3DGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801473B0 (-IsOfType@CTransform3DGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTranslateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801473D0 (-IsOfType@CTranslateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BD7E8 (-IsOfType@CEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTransform3D::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 128 )
    return 1;
  v4 = CEffect::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
