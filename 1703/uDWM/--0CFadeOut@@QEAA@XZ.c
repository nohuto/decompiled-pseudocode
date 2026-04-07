/*
 * XREFs of ??0CFadeOut@@QEAA@XZ @ 0x180095B48
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180003024 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFade@@IEAA@XZ @ 0x180001970 (--0CFade@@IEAA@XZ.c)
 */

CFadeOut *__fastcall CFadeOut::CFadeOut(CFadeOut *this)
{
  CFadeOut *v1; // rcx
  CFadeOut *result; // rax

  CFade::CFade(this);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFadeOut::`vftable'{for `CBaseObject'};
  return result;
}
