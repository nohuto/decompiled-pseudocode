/*
 * XREFs of ??0CSlide@@IEAA@XZ @ 0x18009AEEC
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180006840 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x18009AEC4 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x18009AF18 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x18009AF40 (--0CSlideOut@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180009FE4 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CSlide *__fastcall CSlide::CSlide(CSlide *this)
{
  __int64 v1; // rcx
  CSlide *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *(_DWORD *)(v1 + 120) = 0;
  *(_QWORD *)(v1 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = (CSlide *)v1;
  *(_QWORD *)v1 = &CPanelAnimation::`vftable'{for `CBaseObject'};
  return result;
}
