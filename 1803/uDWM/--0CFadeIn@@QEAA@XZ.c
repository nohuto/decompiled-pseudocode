/*
 * XREFs of ??0CFadeIn@@QEAA@XZ @ 0x18004825C
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180006840 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFade@@IEAA@XZ @ 0x180048284 (--0CFade@@IEAA@XZ.c)
 */

CFadeIn *__fastcall CFadeIn::CFadeIn(CFadeIn *this)
{
  CFadeIn *v1; // rcx
  CFadeIn *result; // rax

  CFade::CFade(this);
  *((_QWORD *)v1 + 2) = &CStoryboard::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFadeIn::`vftable'{for `CBaseObject'};
  return result;
}
