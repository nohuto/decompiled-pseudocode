/*
 * XREFs of ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x18018A93C
 * Callers:
 *     ?SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A48AC (-SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800930A0 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlBounceInterpolation::Create(int a1, unsigned int a2, int a3, float a4, _QWORD *a5)
{
  float v5; // xmm6_4
  int v6; // esi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx

  v5 = a4;
  v6 = 0;
  if ( a3 >= 0 )
    v6 = a3;
  if ( !_finite(a4) || a4 < 1.0 )
    v5 = FLOAT_1_0;
  v9 = KeyframeInterpolation::operator new(0x28uLL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x28uLL);
    *(_QWORD *)v10 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v10 = &XamlBounceInterpolation::`vftable';
    v10[2] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    (**(void (__fastcall ***)(void *))v10)(v10);
  if ( a2 > 2 )
    a2 = 0;
  v10[4] = a1;
  v10[6] = a2;
  v10[8] = v6;
  *((float *)v10 + 9) = fmaxf(1.01, v5);
  *a5 = v10;
  return 0LL;
}
