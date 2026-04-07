/*
 * XREFs of ??0CFade@@IEAA@XZ @ 0x18009269C
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180001EB4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x1800926C4 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x1800926EC (--0CFadeOut@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180004E48 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CFade *__fastcall CFade::CFade(CFade *this)
{
  CFade *v1; // rcx
  CFade *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFade::`vftable'{for `CBaseObject'};
  return result;
}
