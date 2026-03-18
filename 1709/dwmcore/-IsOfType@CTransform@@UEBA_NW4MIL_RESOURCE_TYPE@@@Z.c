/*
 * XREFs of ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B4E80
 * Callers:
 *     ?IsOfType@CRotateTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B4290 (-IsOfType@CRotateTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSkewTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B43A0 (-IsOfType@CSkewTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransformGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B46B0 (-IsOfType@CTransformGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTranslateTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B4830 (-IsOfType@CTranslateTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CManipulationTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B49E0 (-IsOfType@CManipulationTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMatrixTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B4D80 (-IsOfType@CMatrixTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CScaleTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B4E60 (-IsOfType@CScaleTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096850 (-IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTransform::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 127 )
    return 1;
  v2 = CTransform3D::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
