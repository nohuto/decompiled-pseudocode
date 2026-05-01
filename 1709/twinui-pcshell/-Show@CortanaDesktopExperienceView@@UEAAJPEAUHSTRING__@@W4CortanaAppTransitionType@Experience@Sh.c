/*
 * XREFs of ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800D51E0
 * Callers:
 *     ?ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@6@@Z @ 0x1800D47A0 (-ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inter.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D7488 (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800D8054 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800D8870 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800DA1E0 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1800DA7A0 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::Show(_BYTE *a1, HSTRING a2, unsigned int a3)
{
  bool v6; // di
  HRESULT v7; // eax
  int v8; // ebx
  const wchar_t *StringRawBuffer; // rax
  __int64 v10; // rdx
  CortanaDesktopExperienceView *v12; // rdi
  int ActivateArgs; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HSTRING length; // [rsp+68h] [rbp+38h] BYREF
  HSTRING newString; // [rsp+78h] [rbp+48h] BYREF

  v6 = 0;
  if ( a2 )
  {
    newString = 0LL;
    WindowsDeleteString(0LL);
    newString = 0LL;
    v7 = WindowsDuplicateString(a2, &newString);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6FC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v7);
      WindowsDeleteString(newString);
      goto LABEL_8;
    }
    LODWORD(length) = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(newString, (UINT32 *)&length);
    if ( StringRawBuffer )
      v6 = wcsstr(StringRawBuffer, L"StartMode=AppTransition") != 0LL;
    WindowsDeleteString(newString);
  }
  v8 = 0;
LABEL_8:
  if ( v8 < 0 )
  {
    v10 = 683LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  a1[175] = 0;
  if ( !v6 )
  {
    a1[178] = 1;
    length = 0LL;
    WindowsDeleteString(0LL);
    length = 0LL;
    v12 = (CortanaDesktopExperienceView *)(a1 - 24);
    ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs((CortanaDesktopExperienceView *)(a1 - 24), a2, &length);
    v8 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      if ( a1[174] )
        v15 = 2LL;
      else
        v15 = a1[216] != 0;
      ActivateArgs = CortanaDesktopExperienceView::ShowInternal(a1 - 24, length, v15, a3, -2LL);
      v8 = ActivateArgs;
      if ( ActivateArgs >= 0 )
      {
        WindowsDeleteString(length);
        goto LABEL_24;
      }
      v14 = 719LL;
    }
    else
    {
      v14 = 704LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
    WindowsDeleteString(length);
    return (unsigned int)v8;
  }
  a1[178] = 0;
  v12 = (CortanaDesktopExperienceView *)(a1 - 24);
  v8 = CortanaDesktopExperienceView::NotifyAppWithTransitionType(a1 - 24, L"NotifyAppTransitionRequestHandled", a3, 0LL);
  if ( v8 < 0 )
  {
    v10 = 697LL;
    goto LABEL_10;
  }
LABEL_24:
  if ( CortanaDesktopExperienceView::IsViewVisible(v12) )
    CortanaDesktopExperienceView::RegisterGlobalBackButton(v12);
  return 0LL;
}
