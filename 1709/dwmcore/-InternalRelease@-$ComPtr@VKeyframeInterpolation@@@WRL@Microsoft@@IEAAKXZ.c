/*
 * XREFs of ?InternalRelease@?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ @ 0x18006A48C
 * Callers:
 *     ??4?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z @ 0x18006A4BC (--4-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z.c)
 *     ?SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A48AC (-SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A7440 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800BB1E0 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(KeyframeInterpolation **a1)
{
  __int64 result; // rax
  KeyframeInterpolation *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v4 == (char *)KeyframeInterpolation::Release )
      return KeyframeInterpolation::Release(v3);
    else
      return v4();
  }
  return result;
}
