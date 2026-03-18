/*
 * XREFs of ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x18003CE1C
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18003D554 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CKeyframeAnimation::IsWaiting(CKeyframeAnimation *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((char *)this + 508) < 0 )
    return *((_DWORD *)this + 105) < *((_DWORD *)this + 104);
  return v1;
}
