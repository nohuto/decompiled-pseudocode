/*
 * XREFs of ??0CFadeIn@@QEAA@XZ @ 0x1800926C4
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180001EB4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFade@@IEAA@XZ @ 0x18009269C (--0CFade@@IEAA@XZ.c)
 */

CFadeIn *__fastcall CFadeIn::CFadeIn(CFadeIn *this)
{
  CFadeIn *v1; // rcx
  CFadeIn *result; // rax

  CFade::CFade(this);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFadeIn::`vftable'{for `CBaseObject'};
  return result;
}
