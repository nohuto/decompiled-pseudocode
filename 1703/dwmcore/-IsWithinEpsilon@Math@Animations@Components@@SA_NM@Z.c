/*
 * XREFs of ?IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z @ 0x1800C5BEC
 * Callers:
 *     ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800CBD5C (-Normalize@Quaternion@Animations@Components@@QEAAXXZ.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B9C80 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Math::IsWithinEpsilon(float a1)
{
  return a1 >= -0.0000099999997 && a1 <= 0.0000099999997;
}
