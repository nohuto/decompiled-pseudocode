/*
 * XREFs of ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x1800CEFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x1800CF9A8 (-SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetDrawingRegion(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        unsigned __int8 a3)
{
  ExperienceManagerUtils *v6; // rcx
  HWND v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  const char *v11; // r9
  __int64 v12; // rdx
  int RgnBox; // eax
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // esi
  struct tagRECT rc; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  if ( v6 )
    v7 = ExperienceManagerUtils::WindowFromViewWrapper(v6, a2);
  else
    v7 = 0LL;
  if ( !v7 )
    return 0LL;
  if ( !a2 )
  {
    v8 = TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(this, v7, 0LL, a3);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x8B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    if ( SetPropW(v7, L"UIA_WindowVisibilityOverridden", 0LL) )
      return 0LL;
    v12 = 142LL;
    goto LABEL_18;
  }
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  RgnBox = GetRgnBox((HRGN)a2, &rc);
  v14 = 2LL;
  if ( RgnBox != 1 && (RgnBox != 2 || !IsRectEmpty(&rc)) )
    v14 = 0LL;
  v15 = TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(this, v7, (HRGN)a2, a3);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v15);
    return v16;
  }
  if ( !SetPropW(v7, L"UIA_WindowVisibilityOverridden", (HANDLE)v14) )
  {
    v12 = 153LL;
LABEL_18:
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      v11);
  }
  return 0LL;
}
