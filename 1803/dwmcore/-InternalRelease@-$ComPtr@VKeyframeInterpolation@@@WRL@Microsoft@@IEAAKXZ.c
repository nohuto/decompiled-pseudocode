/*
 * XREFs of ?InternalRelease@?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ @ 0x180040920
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18003E02C (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18003F85C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??4?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z @ 0x180040950 (--4-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800CD6B0 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(KeyframeInterpolation **a1)
{
  unsigned int result; // eax
  KeyframeInterpolation *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0;
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
