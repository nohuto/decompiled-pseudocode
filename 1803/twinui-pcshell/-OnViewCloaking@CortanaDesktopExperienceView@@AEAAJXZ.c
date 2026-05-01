/*
 * XREFs of ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180065C7C
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800618D0 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800619A8 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180061AA8 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006D2B0 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z @ 0x180076630 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180076630.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::OnViewCloaking(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v8; // rdx
  __int64 *ViewWrapper; // rax
  int v10; // eax
  struct Windows::Foundation::Collections::IPropertySet *v11; // [rsp+20h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v12; // [rsp+28h] [rbp-48h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v13[1] = -2LL;
  v11 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v15,
         &v11);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D0,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2,
      (int)v11);
    goto LABEL_7;
  }
  v12 = v11;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)&hstringHeader,
         (const WCHAR **)off_18031D750);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(&v12, *(_QWORD *)(v4 + 24), v5, 0LL);
  v3 = v6;
  if ( v6 < 0 )
  {
    v8 = 981LL;
  }
  else
  {
    v6 = CortanaDesktopExperienceView::NotifyView(this, L"NotifyCloakStateChanged", v11);
    v3 = v6;
    if ( v6 >= 0 )
    {
      if ( *((_BYTE *)this + 240) )
      {
        ViewWrapper = CortanaDesktopExperienceView::GetViewWrapper((__int64)this, v13);
        v10 = CExperienceManagerAnimationHelper::Begin((char *)this + 296, *ViewWrapper, 536870992LL);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3DB,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10,
            (int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v13);
      }
      *((_BYTE *)this + 204) = 0;
      v3 = 0;
      goto LABEL_6;
    }
    v8 = 983LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v6,
    (int)v11);
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v3;
}
