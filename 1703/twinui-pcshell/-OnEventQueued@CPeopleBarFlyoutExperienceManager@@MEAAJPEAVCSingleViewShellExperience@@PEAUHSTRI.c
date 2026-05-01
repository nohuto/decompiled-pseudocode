/*
 * XREFs of ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A28D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x18009E4F0 (--$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__.c)
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1800A1D40 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1800A2E80 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnEventQueued(
        CPeopleBarFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v8; // rax
  HRESULT v9; // eax
  HSTRING_HEADER *v10; // rbx
  struct Windows::Foundation::IPropertyValue *v11; // r8
  HRESULT v12; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // rdx
  HWND v14; // rbx
  const WCHAR *StringRawBuffer; // rax
  HSTRING_HEADER *v16; // rax
  HRESULT v17; // eax
  CPeopleBarFlyoutExperienceManager *v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  INT32 result; // [rsp+20h] [rbp-50h] BYREF
  HSTRING string; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v25[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER v26; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v25[1] = -2LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, (const WCHAR **)&off_1801BD040);
  result = 0;
  v9 = WindowsCompareStringOrdinal(a3, (HSTRING)v8[1].Reserved.Reserved1, &result);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    __debugbreak();
  }
  if ( result )
  {
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, (const WCHAR **)&off_1801BD038);
    result = 0;
    v17 = WindowsCompareStringOrdinal(a3, (HSTRING)v16[1].Reserved.Reserved1, &result);
    if ( v17 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
      __debugbreak();
    }
    if ( !result )
    {
      v19 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v18);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1FF,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
      v20 = CPeopleBarFlyoutExperienceManager::HideFlyout((CPeopleBarFlyoutExperienceManager *)((char *)this - 40));
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x201,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
        return v21;
      }
    }
  }
  else
  {
    v25[0] = a4;
    if ( a4 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a4 + 8LL))(a4);
    string = 0LL;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, (const WCHAR **)&off_1801BD030);
    WindowsDeleteString(string);
    string = 0LL;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)v25,
                (HSTRING)v10[1].Reserved.Reserved1,
                v11,
                (__int64)&string) >= 0 )
    {
      result = 0;
      v12 = WindowsCompareStringOrdinal(string, 0LL, &result);
      if ( v12 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
      }
      else if ( result )
      {
        v14 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v13);
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        SetWindowTextW(v14, StringRawBuffer);
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    if ( v25[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
  }
  return 0LL;
}
