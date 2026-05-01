/*
 * XREFs of ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800C8410
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1800C7A78 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1800C85A4 (-CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ.c)
 * Callees:
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800C83A8 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HWND __fastcall CortanaDesktopExperienceView::GetHwnd(CortanaDesktopExperienceView *this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v1; // rdx
  ExperienceManagerUtils *v2; // rcx
  HWND v3; // rbx
  ExperienceManagerUtils *v5; // [rsp+48h] [rbp+10h] BYREF

  CortanaDesktopExperienceView::GetViewWrapper((__int64)this, &v5);
  v2 = v5;
  if ( v5 )
  {
    v3 = ExperienceManagerUtils::WindowFromViewWrapper(v5, v1);
    v2 = v5;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(ExperienceManagerUtils *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v3;
}
