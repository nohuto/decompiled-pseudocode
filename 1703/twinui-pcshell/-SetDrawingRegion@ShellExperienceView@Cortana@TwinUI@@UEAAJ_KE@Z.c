/*
 * XREFs of ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x1800C1470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097AAC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetDrawingRegion(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        unsigned __int8 a3)
{
  ExperienceManagerUtils *v5; // rcx
  HWND v6; // rbx
  __int64 v7; // rdx
  const char *v9; // r9
  __int64 v10; // rdx
  int RgnBox; // eax
  char v12; // di
  struct tagRECT rc; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  if ( v5 )
    v6 = ExperienceManagerUtils::WindowFromViewWrapper(v5, a2);
  else
    v6 = 0LL;
  if ( !v6 )
    return 0LL;
  if ( a2 )
  {
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    RgnBox = GetRgnBox((HRGN)a2, &rc);
    v12 = 1;
    if ( RgnBox != 1 && (RgnBox != 2 || !IsRectEmpty(&rc)) )
      v12 = 0;
    if ( !SetWindowRgn(v6, (HRGN)a2, a3) )
    {
      v7 = 148LL;
      goto LABEL_8;
    }
    if ( !SetPropW(v6, L"UIA_WindowVisibilityOverridden", v12 != 0 ? HANDLE_FLAG_PROTECT_FROM_CLOSE : 0) )
    {
      v10 = 151LL;
      goto LABEL_19;
    }
  }
  else
  {
    if ( !SetWindowRgn(v6, 0LL, 1) )
    {
      v7 = 137LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    if ( !SetPropW(v6, L"UIA_WindowVisibilityOverridden", 0LL) )
    {
      v10 = 140LL;
LABEL_19:
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        v9);
    }
  }
  return 0LL;
}
