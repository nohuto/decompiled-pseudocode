/*
 * XREFs of ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x1801BE450
 * Callers:
 *     ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x1801BF610 (-IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::IsInMotion(CScrollAnimation *this)
{
  CMotion *v2; // rax

  if ( *((_DWORD *)this + 94) )
    return 1;
  v2 = (CMotion *)(*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 280LL))(this);
  return CMotion::IsInMotion(v2);
}
