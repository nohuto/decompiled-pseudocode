/*
 * XREFs of ?Release@CAnimationResource@@UEAAKXZ @ 0x18009ECF0
 * Callers:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18002F154 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 * Callees:
 *     ??_GCAnimationResource@@IEAAPEAXI@Z @ 0x18009E874 (--_GCAnimationResource@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CAnimationResource::Release(CAnimationResource *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 && this )
    CAnimationResource::`scalar deleting destructor'(this);
  return v1;
}
