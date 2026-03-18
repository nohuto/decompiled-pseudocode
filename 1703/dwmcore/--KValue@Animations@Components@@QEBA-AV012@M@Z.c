/*
 * XREFs of ??KValue@Animations@Components@@QEBA?AV012@M@Z @ 0x1801B9C44
 * Callers:
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B9C80 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     <none>
 */

double *__fastcall Components::Animations::Value::operator/(__int64 a1, double *a2, float a3)
{
  unsigned int v3; // eax
  double *v4; // r8
  __int64 v5; // rcx

  v3 = 0;
  v4 = a2;
  *a2 = 0.0;
  v5 = a1 - (_QWORD)a2;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[3] = 0.0;
  do
  {
    ++v3;
    *v4 = *(double *)((char *)v4 + v5) / a3;
    ++v4;
  }
  while ( v3 < 4 );
  return a2;
}
