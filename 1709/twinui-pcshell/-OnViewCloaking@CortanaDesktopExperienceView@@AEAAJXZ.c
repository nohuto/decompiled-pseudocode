/*
 * XREFs of ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D5CF8
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800D5C40 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003D338 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800DA7E0 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA8A0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z @ 0x1801DB16C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::OnViewCloaking(CortanaDesktopExperienceView *this)
{
  HRESULT v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  _QWORD *ViewWrapper; // rax
  int v9; // eax
  __int64 v10; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v11; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v15[1] = -2LL;
  v13 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3AC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_20;
  }
  v15[0] = v13;
  if ( v13 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v13 + 8LL))(v13);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)&hstringHeader,
         (const WCHAR **)&off_1802148D0);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)v15,
         *(HSTRING *)(v5 + 24),
         0);
  v4 = v6;
  if ( v6 >= 0 )
  {
    v6 = CortanaDesktopExperienceView::NotifyView(this, L"NotifyCloakStateChanged", v13);
    v4 = v6;
    if ( v6 >= 0 )
    {
      if ( *((_BYTE *)this + 240) )
      {
        ViewWrapper = (_QWORD *)CortanaDesktopExperienceView::GetViewWrapper(this, &v14);
        v9 = CExperienceManagerAnimationHelper::Begin((char *)this + 296, *ViewWrapper, 536870992LL);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3B7,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v9);
        v10 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      *((_WORD *)this + 102) = 0;
      v4 = 0;
      goto LABEL_18;
    }
    v7 = 947LL;
  }
  else
  {
    v7 = 945LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v6);
LABEL_18:
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
LABEL_20:
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v4;
}
