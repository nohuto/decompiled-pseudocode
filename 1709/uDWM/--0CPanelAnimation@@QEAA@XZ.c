/*
 * XREFs of ??0CPanelAnimation@@QEAA@XZ @ 0x18009278C
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180001EB4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CSlide@@IEAA@XZ @ 0x1800927B4 (--0CSlide@@IEAA@XZ.c)
 */

CPanelAnimation *__fastcall CPanelAnimation::CPanelAnimation(CPanelAnimation *this)
{
  CPanelAnimation *v1; // rcx
  CPanelAnimation *result; // rax

  CSlide::CSlide(this);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CPanelAnimation::`vftable'{for `CBaseObject'};
  return result;
}
