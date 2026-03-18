/*
 * XREFs of ??9D2DQuaternion@@QEBAHAEBU0@@Z @ 0x1800BC1CC
 * Callers:
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z @ 0x1800957F0 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x180095C7C (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall D2DQuaternion::operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3];
}
