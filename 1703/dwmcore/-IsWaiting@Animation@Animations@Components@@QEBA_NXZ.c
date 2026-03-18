/*
 * XREFs of ?IsWaiting@Animation@Animations@Components@@QEBA_NXZ @ 0x18002CCC0
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18002F6A0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Animation::IsWaiting(Components::Animations::Animation *this)
{
  return (*((_BYTE *)this + 72) & 4) != 0 && *((_DWORD *)this + 5) < *((_DWORD *)this + 4);
}
