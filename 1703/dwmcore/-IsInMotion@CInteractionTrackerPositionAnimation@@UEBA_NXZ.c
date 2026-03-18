/*
 * XREFs of ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x1801832E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x180181CA0 (-IsInMotion@CScrollAnimation@@UEBA_NXZ.c)
 */

char __fastcall CInteractionTrackerPositionAnimation::IsInMotion(CInteractionTrackerPositionAnimation *this)
{
  char v2; // bl
  __int64 v3; // rcx
  CInteractionTracker *v4; // rcx
  __int64 v5; // rcx

  v2 = 0;
  if ( CScrollAnimation::IsInMotion(this) )
    return 1;
  v3 = *((_QWORD *)this + 29);
  v4 = v3 ? *(CInteractionTracker **)(v3 + 8) : 0LL;
  if ( CInteractionTracker::AreInteractionAnimationsAlive(v4)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 368) + 216LL))(*(_QWORD *)(v5 + 368)) )
  {
    return 1;
  }
  return v2;
}
