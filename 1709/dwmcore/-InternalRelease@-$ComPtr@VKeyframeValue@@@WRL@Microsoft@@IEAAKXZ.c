/*
 * XREFs of ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180092DD8
 * Callers:
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x180092D44 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x180092E08 (--4-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z.c)
 *     ?SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A48AC (-SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A7440 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800BB1E0 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800BD754 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x18018B598 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(KeyframeValue **a1)
{
  unsigned int result; // eax
  KeyframeValue *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v4 == (char *)KeyframeValue::Release )
      return KeyframeValue::Release(v3);
    else
      return v4();
  }
  return result;
}
