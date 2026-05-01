/*
 * XREFs of ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800C3890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003C0D8 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800C4DE4 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C8468 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  HSTRING_HEADER *v15; // rax
  __int64 v16; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v17; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+30h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+38h] [rbp-48h] BYREF
  int v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v21 = -2LL;
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
    v18 = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v10 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    v11 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            (__int64)string,
            (__int64 *)&v18);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v19 = v18;
      if ( v18 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 8LL))(v18);
      BOOL = SHRegGetBOOL(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
               L"ColorPrevalence",
               &v20);
      v14 = v20;
      if ( BOOL < 0 )
        v14 = 0;
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD0F8);
      v7 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
             (HSTRING)v15[1].Reserved.Reserved1,
             v14 != 0);
      if ( v7 >= 0 )
      {
        v7 = CortanaDesktopExperienceView::NotifyView(
               (CortanaDesktopExperienceView *)((char *)this - 40),
               L"NotifyThemeChange",
               v18);
        if ( v7 >= 0 )
        {
          if ( v19 )
            (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v19 + 16LL))(v19);
          v17 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v17 + 16LL))(v17);
          }
          return 0LL;
        }
        v16 = 778LL;
      }
      else
      {
        v16 = 776LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v7);
      if ( v19 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x305,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v11);
    }
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
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
        (void *)0x2FC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v7;
    }
  }
  return 0LL;
}
