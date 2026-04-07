/*
 * XREFs of ??0CSlideOut@@QEAA@XZ @ 0x18009AF40
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180006840 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CSlide@@IEAA@XZ @ 0x18009AEEC (--0CSlide@@IEAA@XZ.c)
 */

CSlideOut *__fastcall CSlideOut::CSlideOut(CSlideOut *this)
{
  CSlideOut *v1; // rcx
  CSlideOut *result; // rax

  CSlide::CSlide(this);
  *((_QWORD *)v1 + 16) = 0LL;
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CSlideOut::`vftable'{for `CBaseObject'};
  return result;
}
