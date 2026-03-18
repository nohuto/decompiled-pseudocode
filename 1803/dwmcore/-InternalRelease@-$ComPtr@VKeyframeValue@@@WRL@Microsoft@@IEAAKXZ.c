/*
 * XREFs of ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180040A4C
 * Callers:
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x1800295C4 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18003E02C (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18003F85C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x180040A7C (--4-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800C535C (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800CD6B0 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1801C0EF0 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
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
