/*
 * XREFs of ?Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1800C3258
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18003E02C (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800298DC (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlPowerInterpolation::Create(int a1, unsigned int a2, float a3, _QWORD *a4)
{
  float v4; // xmm6_4
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  __int64 result; // rax

  v4 = a3;
  if ( !_finite(a3) )
    v4 = 0.0;
  v8 = KeyframeInterpolation::operator new(0x28uLL);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x28uLL);
    *(_QWORD *)v9 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v9 = &XamlPowerInterpolation::`vftable';
    v9[2] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    (**(void (__fastcall ***)(void *))v9)(v9);
  *((float *)v9 + 8) = v4;
  if ( a2 > 2 )
    a2 = 0;
  v9[4] = a1;
  result = 0LL;
  v9[6] = a2;
  *a4 = v9;
  return result;
}
