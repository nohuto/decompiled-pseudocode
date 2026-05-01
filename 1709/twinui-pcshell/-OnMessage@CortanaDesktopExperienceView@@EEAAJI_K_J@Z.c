/*
 * XREFs of ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800D56B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003D338 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6C5C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA8A0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnMessage(
        CortanaDesktopExperienceView *this,
        int a2,
        char *a3,
        const WCHAR *a4)
{
  char *v5; // rcx
  int v6; // eax
  int v7; // ebx
  char v9; // bl
  HRESULT v10; // eax
  int v11; // eax
  struct Windows::Foundation::Collections::IPropertySet *v12; // rcx
  int BOOL; // eax
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rax
  struct Windows::Foundation::Collections::IPropertySet *v20; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v21; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v23[1] = -2LL;
  if ( a2 != 1025 )
  {
    if ( a2 != 26 )
      return 0LL;
    v9 = 0;
    if ( a4 && CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 1) == 2 )
    {
      RefreshImmersiveColorPolicyState();
      v9 = 1;
    }
    GetIsImmersiveColorUsingHighContrast(1LL);
    if ( !v9 )
      return 0LL;
    v21 = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v10 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    v11 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            (__int64)string,
            (__int64 *)&v21);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v23[0] = v21;
      if ( v21 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v21 + 8LL))(v21);
      BOOL = SHRegGetBOOL(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
               L"ColorPrevalence",
               &v22);
      v14 = v22;
      if ( BOOL < 0 )
        v14 = 0;
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)&hstringHeader,
              (const WCHAR **)&off_1802148C8);
      v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)v23,
             *(HSTRING *)(v15 + 24),
             v14 != 0);
      if ( v7 >= 0 )
      {
        v17 = SHRegGetBOOL(
                HKEY_CURRENT_USER,
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
                L"AppsUseLightTheme",
                &v22);
        v18 = v22;
        if ( v17 < 0 )
          v18 = 1;
        v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&hstringHeader,
                (const WCHAR **)&off_1802148C0);
        v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)v23,
               *(HSTRING *)(v19 + 24),
               v18 != 0);
        if ( v7 >= 0 )
        {
          v7 = CortanaDesktopExperienceView::NotifyView(
                 (CortanaDesktopExperienceView *)((char *)this - 40),
                 L"NotifyThemeChange",
                 v21);
          if ( v7 >= 0 )
          {
            if ( v23[0] )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
            v20 = v21;
            if ( v21 )
            {
              v21 = 0LL;
              (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v20 + 16LL))(v20);
            }
            return 0LL;
          }
          v16 = 795LL;
        }
        else
        {
          v16 = 793LL;
        }
      }
      else
      {
        v16 = 792LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v7);
      if ( v23[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x315,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v11);
    }
    v12 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return (unsigned int)v7;
  }
  v5 = (char *)this - 40;
  if ( a3 == v5 )
  {
    v6 = CortanaDesktopExperienceView::OnTargetedMessage(v5, (unsigned __int16)a4, (unsigned __int64)a4 >> 16);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x30C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v7;
    }
  }
  return 0LL;
}
