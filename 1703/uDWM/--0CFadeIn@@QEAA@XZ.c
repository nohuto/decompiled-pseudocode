/*
 * XREFs of ??0CFadeIn@@QEAA@XZ @ 0x18000340C
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180003024 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFade@@IEAA@XZ @ 0x180001970 (--0CFade@@IEAA@XZ.c)
 */

CFadeIn *__fastcall CFadeIn::CFadeIn(CFadeIn *this)
{
  CFadeIn *v1; // rcx
  CFadeIn *result; // rax

  CFade::CFade(this);
  *((_QWORD *)v1 + 2) = &CSlide::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFadeIn::`vftable'{for `CBaseObject'};
  return result;
}
