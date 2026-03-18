/*
 * XREFs of ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x1801B9744
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x18002CAD0 (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?QueryQuaternion@Animation@Animations@Components@@UEAAJIPEAUQuaternion@23@@Z @ 0x1801B9840 (-QueryQuaternion@Animation@Animations@Components@@UEAAJIPEAUQuaternion@23@@Z.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B9C80 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800CBD5C (-Normalize@Quaternion@Animations@Components@@QEAAXXZ.c)
 */

__m128 *__fastcall Components::Animations::Value::GetQuaternion(double *a1, __m128 *a2)
{
  double v2; // xmm3_8
  double v4; // xmm2_8
  float v5; // xmm0_4

  v2 = a1[3];
  v4 = a1[2];
  v5 = *a1;
  a2->m128_f32[1] = a1[1];
  a2->m128_f32[0] = v5;
  a2->m128_f32[2] = v4;
  a2->m128_f32[3] = v2;
  Components::Animations::Quaternion::Normalize(a2);
  return a2;
}
