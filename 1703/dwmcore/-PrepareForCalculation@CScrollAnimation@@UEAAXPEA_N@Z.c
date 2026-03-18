/*
 * XREFs of ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z @ 0x180181CF0
 * Callers:
 *     ?PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z @ 0x1801838A0 (-PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18016D2D0 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 */

void __fastcall CScrollAnimation::PrepareForCalculation(CScrollAnimation *this, bool *a2)
{
  __int64 v4; // rax
  CInteractionTracker *v5; // rcx
  bool v6; // r10

  if ( (*(unsigned __int8 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 216LL))(this)
    || ((v4 = *((_QWORD *)this + 29)) == 0 ? (v5 = 0LL) : (v5 = *(CInteractionTracker **)(v4 + 8)),
        CInteractionTracker::IsOutOfBounds(v5)) )
  {
    v6 = 1;
  }
  *a2 = v6;
}
