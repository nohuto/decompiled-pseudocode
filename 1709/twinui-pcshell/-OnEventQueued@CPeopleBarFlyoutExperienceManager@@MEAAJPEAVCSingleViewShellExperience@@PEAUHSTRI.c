/*
 * XREFs of ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800AEDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x1800A7B7C (--$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__.c)
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x1800ADC10 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1800AF364 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnEventQueued(
        CPeopleBarFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v8; // rax
  HRESULT v9; // eax
  __int64 v10; // rbx
  struct Windows::Foundation::IPropertyValue *v11; // r8
  HRESULT v12; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // rdx
  HWND v14; // rbx
  const WCHAR *StringRawBuffer; // rax
  __int64 v16; // rax
  HRESULT v17; // eax
  CPeopleBarFlyoutExperienceManager *v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  INT32 result; // [rsp+20h] [rbp-50h] BYREF
  HSTRING string; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v25[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v26[32]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v25[1] = -2LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v26, (const WCHAR **)&off_180214738);
  result = 0;
  v9 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v8 + 24), &result);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    __debugbreak();
  }
  if ( result )
  {
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v26, (const WCHAR **)&off_180214730);
    result = 0;
    v17 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v16 + 24), &result);
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
          (void *)0x2E5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
      v20 = CPeopleBarFlyoutExperienceManager::HideFlyout((CPeopleBarFlyoutExperienceManager *)((char *)this - 64));
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2E7,
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
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v26, (const WCHAR **)&off_180214728);
    WindowsDeleteString(string);
    string = 0LL;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)v25,
                *(HSTRING *)(v10 + 24),
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
