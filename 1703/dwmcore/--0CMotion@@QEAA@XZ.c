/*
 * XREFs of ??0CMotion@@QEAA@XZ @ 0x180184A7C
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016C830 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180182AD0 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CMotion *__fastcall CMotion::CMotion(CMotion *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &CMotion::`vftable';
  v2 = (char *)this + 80;
  *((_QWORD *)v2 + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)v2 + 4) = 0;
  *(_QWORD *)v2 = &CSpringForce::`vftable'{for `IAccelerator'};
  *((_QWORD *)v2 + 1) = &CSpringForce::`vftable'{for `CMILRefCountBase'};
  v2[68] = 0;
  *((_QWORD *)this + 23) = 0LL;
  (**(void (__fastcall ***)(char *))v2)(v2);
  return this;
}
