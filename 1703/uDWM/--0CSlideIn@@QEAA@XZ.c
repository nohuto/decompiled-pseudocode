/*
 * XREFs of ??0CSlideIn@@QEAA@XZ @ 0x180001474
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180003024 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CSlide@@IEAA@XZ @ 0x18000149C (--0CSlide@@IEAA@XZ.c)
 */

CSlideIn *__fastcall CSlideIn::CSlideIn(CSlideIn *this)
{
  CSlideIn *v1; // rcx
  CSlideIn *result; // rax

  CSlide::CSlide(this);
  *((_QWORD *)v1 + 2) = &CSlide::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CSlideIn::`vftable'{for `CBaseObject'};
  return result;
}
