/*
 * XREFs of ?Release@CAnimationResource@@UEAAKXZ @ 0x18000E3A0
 * Callers:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180037D44 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 * Callees:
 *     ??_GCAnimationResource@@IEAAPEAXI@Z @ 0x18000E408 (--_GCAnimationResource@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CAnimationResource::Release(CAnimationResource *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 && this )
    CAnimationResource::`scalar deleting destructor'(this, a2);
  return v2;
}
