/*
 * XREFs of ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18016C230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x18006C838 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18007ABD0 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x18016BBD0 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18016CF98 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnEventQueued(
        CPeopleBarFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v8; // rax
  HSTRING v9; // r8
  __int64 v10; // rbx
  __int64 v11; // r8
  HSTRING v12; // r8
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // rdx
  HWND v14; // rbx
  const WCHAR *StringRawBuffer; // rax
  __int64 v17; // rax
  HSTRING v18; // r8
  CPeopleBarFlyoutExperienceManager *v19; // rcx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebx
  HSTRING string; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v25[32]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v24[1] = -2LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, (const WCHAR **)&off_18034C468);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v8 + 24), v9) )
  {
    v24[0] = (__int64)a4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v24);
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, (const WCHAR **)&off_18034C460);
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)v24,
                *(HSTRING *)(v10 + 24),
                v11,
                &string) >= 0 )
    {
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           (Microsoft::WRL::Wrappers::Details *)string,
                           0LL,
                           v12) )
      {
        v14 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v13);
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        SetWindowTextW(v14, StringRawBuffer);
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
    return 0LL;
  }
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, (const WCHAR **)&off_18034C470);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v17 + 24), v18) )
    return 0LL;
  v20 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v19);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      738LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
  v21 = CPeopleBarFlyoutExperienceManager::HideFlyout((CPeopleBarFlyoutExperienceManager *)((char *)this - 64));
  v22 = v21;
  if ( v21 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v21);
  return v22;
}
