/*
 * XREFs of ?Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180028BE4
 * Callers:
 *     ?Compute@?$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180028B50 (-Compute@-$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B9C80 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     ??DValue@Animations@Components@@QEBA?AV012@M@Z @ 0x180028CA4 (--DValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall Components::Animations::CartesianCoordinateSpace::Interpolate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  double *v6; // r9
  _OWORD *v7; // r11
  unsigned int v8; // ecx
  __int64 result; // rax
  char *v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // [rsp+20h] [rbp-78h] BYREF
  __int128 v13; // [rsp+30h] [rbp-68h]
  _BYTE v14[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v15[32]; // [rsp+60h] [rbp-38h] BYREF

  Components::Animations::Value::operator*(a4, v14);
  v5 = Components::Animations::Value::operator*(v4, v15);
  v8 = 0;
  result = v5 - (_QWORD)v6;
  v12 = 0uLL;
  v10 = (char *)((char *)&v12 - (char *)v6);
  v13 = 0uLL;
  do
  {
    ++v8;
    *(double *)((char *)v6 + (_QWORD)v10) = *(double *)((char *)v6 + result) + *v6;
    ++v6;
  }
  while ( v8 < 4 );
  v11 = v13;
  *v7 = v12;
  v7[1] = v11;
  return result;
}
