/*
 * XREFs of ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180092B7C
 * Callers:
 *     ?SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A48AC (-SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800930A0 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LinearInterpolation::Create(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  void (__fastcall ***v4)(_QWORD); // rbx

  v3 = KeyframeInterpolation::operator new(0x18uLL);
  v4 = (void (__fastcall ***)(_QWORD))v3;
  if ( v3 )
  {
    v3[1] = 0LL;
    v3[2] = 0LL;
    *v3 = &CMILRefCountBase::`vftable';
    *v3 = &LinearInterpolation::`vftable';
    *((_DWORD *)v3 + 2) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    (**v4)(v4);
  *a2 = v4;
  return 0LL;
}
