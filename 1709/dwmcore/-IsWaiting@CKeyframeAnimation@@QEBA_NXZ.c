/*
 * XREFs of ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x1800A37D0
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A3E58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsWaiting(CKeyframeAnimation *this)
{
  return (*((_BYTE *)this + 456) & 0x40) != 0 && *((_DWORD *)this + 95) < *((_DWORD *)this + 94);
}
