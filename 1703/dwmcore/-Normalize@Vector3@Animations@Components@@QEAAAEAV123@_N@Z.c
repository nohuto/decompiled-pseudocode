/*
 * XREFs of ?Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z @ 0x1801B9984
 * Callers:
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B9C80 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

struct Components::Animations::Vector3 *__fastcall Components::Animations::Vector3::Normalize(
        Components::Animations::Vector3 *this)
{
  float *v2; // rax
  float v3; // xmm2_4
  __int64 v4; // rdx
  float v5; // xmm1_4
  unsigned int v6; // ecx
  float v7; // xmm0_4
  unsigned int v8; // ecx
  signed __int64 v9; // rdx
  Components::Animations::Vector3 *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  _BYTE v15[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (float *)v15;
  v3 = 0.0;
  v4 = this - (Components::Animations::Vector3 *)v15;
  v5 = 0.0;
  v6 = 0;
  do
  {
    ++v6;
    v7 = *(float *)((char *)v2 + v4) * *(float *)((char *)v2 + v4);
    *v2 = v7;
    v5 = v5 + v7;
    ++v2;
  }
  while ( v6 < 3 );
  if ( v5 > 0.0000099999997 )
  {
    v8 = 0;
    v9 = v15 - (_BYTE *)this;
    v10 = this;
    do
    {
      if ( (float)(*(float *)((char *)v10 + v9) + v5) == v5 )
        *(_DWORD *)v10 = 0;
      else
        v3 = v3 + *(float *)((char *)v10 + v9);
      ++v8;
      v10 = (Components::Animations::Vector3 *)((char *)v10 + 4);
    }
    while ( v8 < 3 );
    v11 = sqrtf_0(v3);
    v12 = *((float *)this + 1) / v11;
    *(float *)this = *(float *)this / v11;
    v13 = *((float *)this + 2) / v11;
    *((float *)this + 1) = v12;
    *((float *)this + 2) = v13;
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_DWORD *)this + 2) = 0;
  }
  return this;
}
