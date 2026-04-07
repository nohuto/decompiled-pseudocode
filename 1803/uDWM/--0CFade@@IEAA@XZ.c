/*
 * XREFs of ??0CFade@@IEAA@XZ @ 0x180048284
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180006840 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x18004825C (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x18009AE24 (--0CFadeOut@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180009FE4 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CFade *__fastcall CFade::CFade(CFade *this)
{
  CFade *v1; // rcx
  CFade *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *((_QWORD *)v1 + 2) = &CStoryboard::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFade::`vftable'{for `CBaseObject'};
  return result;
}
