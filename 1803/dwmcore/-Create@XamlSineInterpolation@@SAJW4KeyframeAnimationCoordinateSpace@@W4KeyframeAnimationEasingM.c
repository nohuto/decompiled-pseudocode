/*
 * XREFs of ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1801C036C
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18003E02C (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800298DC (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlSineInterpolation::Create(int a1, unsigned int a2, _QWORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 result; // rax

  v6 = KeyframeInterpolation::operator new(0x20uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x20uLL);
    *(_QWORD *)v7 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v7 = &XamlSineInterpolation::`vftable';
    v7[2] = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
    (**(void (__fastcall ***)(void *))v7)(v7);
  v7[4] = a1;
  if ( a2 > 2 )
    a2 = 0;
  result = 0LL;
  v7[6] = a2;
  *a3 = v7;
  return result;
}
