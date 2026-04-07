/*
 * XREFs of ??0CLauncherAnimationBase@@IEAA@XZ @ 0x180001338
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180006840 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800015BC (--0CFlyoutPopup@@IEAA@XZ.c)
 */

CLauncherAnimationBase *__fastcall CLauncherAnimationBase::CLauncherAnimationBase(CLauncherAnimationBase *this)
{
  CLauncherAnimationBase *v1; // rcx

  CFlyoutPopup::CFlyoutPopup(this);
  *((_QWORD *)v1 + 2) = &CStoryboard::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &CFlyoutPopup::`vftable'{for `CBaseObject'};
  *((_QWORD *)v1 + 15) = 0LL;
  *((_QWORD *)v1 + 16) = 0LL;
  return v1;
}
