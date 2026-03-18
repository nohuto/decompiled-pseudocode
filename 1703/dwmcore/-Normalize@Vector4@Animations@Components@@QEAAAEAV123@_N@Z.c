/*
 * XREFs of ?Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z @ 0x1801BA2B0
 * Callers:
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801B9C80 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

struct Components::Animations::Vector4 *__fastcall Components::Animations::Vector4::Normalize(
        Components::Animations::Vector4 *this)
{
  __int64 v2; // rbx
  float *v3; // rax
  float v4; // xmm2_4
  __int64 v5; // rdx
  float v6; // xmm1_4
  unsigned int v7; // ecx
  float v8; // xmm0_4
  unsigned int v9; // ecx
  signed __int64 v10; // rdx
  Components::Animations::Vector4 *v11; // rax
  float v12; // xmm0_4
  _BYTE v14[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v3 = (float *)v14;
  v4 = 0.0;
  v5 = this - (Components::Animations::Vector4 *)v14;
  v6 = 0.0;
  v7 = 0;
  do
  {
    ++v7;
    v8 = *(float *)((char *)v3 + v5) * *(float *)((char *)v3 + v5);
    *v3 = v8;
    v6 = v6 + v8;
    ++v3;
  }
  while ( v7 < 4 );
  if ( v6 > 0.0000099999997 )
  {
    v9 = 0;
    v10 = v14 - (_BYTE *)this;
    v11 = this;
    do
    {
      if ( (float)(*(float *)((char *)v11 + v10) + v6) == v6 )
        *(_DWORD *)v11 = 0;
      else
        v4 = v4 + *(float *)((char *)v11 + v10);
      ++v9;
      v11 = (Components::Animations::Vector4 *)((char *)v11 + 4);
    }
    while ( v9 < 4 );
    v12 = sqrtf_0(v4);
    do
    {
      *((float *)this + v2) = *((float *)this + v2) / v12;
      ++v2;
    }
    while ( v2 < 4 );
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  return this;
}
