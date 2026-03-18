/*
 * XREFs of ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z @ 0x180029340
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18003E02C (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800298DC (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CubicBezierInterpolation::Create(int a1, float a2, float a3, float a4, float a5, _QWORD *a6)
{
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  _DWORD *v11; // rax
  _DWORD *v12; // rbx

  v7 = a3;
  if ( a2 < 0.0 )
    v8 = 0.0;
  else
    v8 = fminf(1.0, a2);
  if ( a4 < 0.0 )
    v9 = 0.0;
  else
    v9 = fminf(1.0, a4);
  if ( !_finite(a3) )
    v7 = 0.0;
  v10 = a5;
  if ( !_finite(a5) )
    v10 = FLOAT_1_0;
  v11 = KeyframeInterpolation::operator new(0x28uLL);
  v12 = v11;
  if ( v11 )
  {
    memset_0(v11, 0, 0x28uLL);
    *(_QWORD *)v12 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v12 = &CubicBezierInterpolation::`vftable';
    v12[2] = 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
    (**(void (__fastcall ***)(void *))v12)(v12);
  *((float *)v12 + 6) = v8;
  *((float *)v12 + 7) = v7;
  *((float *)v12 + 8) = v9;
  *((float *)v12 + 9) = v10;
  v12[4] = a1;
  *a6 = v12;
  return 0LL;
}
