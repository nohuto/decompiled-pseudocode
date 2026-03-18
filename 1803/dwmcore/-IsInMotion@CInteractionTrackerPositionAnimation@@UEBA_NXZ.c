/*
 * XREFs of ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x1801BF610
 * Callers:
 *     <none>
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180193928 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x1801BE450 (-IsInMotion@CScrollAnimation@@UEBA_NXZ.c)
 */

char __fastcall CInteractionTrackerPositionAnimation::IsInMotion(CInteractionTrackerPositionAnimation *this)
{
  __int64 v2; // rcx
  CInteractionTracker *v3; // rcx
  char v4; // dl
  __int64 v5; // rcx
  unsigned __int64 v6; // r8

  if ( CScrollAnimation::IsInMotion(this) )
    return 1;
  v2 = *((_QWORD *)this + 37);
  v3 = v2 ? *(CInteractionTracker **)(v2 + 8) : 0LL;
  if ( CInteractionTracker::AreInteractionAnimationsAlive(v3) )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 480) + 336LL);
  if ( v6 > *((_QWORD *)this + 42) )
    return 1;
  return v4;
}
