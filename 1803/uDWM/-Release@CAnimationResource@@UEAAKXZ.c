/*
 * XREFs of ?Release@CAnimationResource@@UEAAKXZ @ 0x1800A7250
 * Callers:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180011ED4 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 * Callees:
 *     ??_GCAnimationResource@@IEAAPEAXI@Z @ 0x1800A6DD4 (--_GCAnimationResource@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CAnimationResource::Release(CAnimationResource *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 && this )
    CAnimationResource::`scalar deleting destructor'(this);
  return v1;
}
