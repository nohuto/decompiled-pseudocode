/*
 * XREFs of ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801DD660
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::ShowBorder(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  char v7; // si
  __int64 v8; // r15
  int v9; // ecx
  const char *v10; // r9
  int updated; // eax
  int v13; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v14; // [rsp+28h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-20h]
  unsigned __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v7 = (char)a2;
  v8 = ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)(*(_QWORD *)(a1 + 8) + 24LL), a2);
  v9 = 1024;
  v16 = 0LL;
  v17 = 0LL;
  if ( a5 )
    v9 = 3584;
  v16 = __PAIR64__(v9, a3);
  LODWORD(v17) = a4;
  if ( (v7 & 1) != 0 )
  {
    v9 |= 0x20u;
    HIDWORD(v16) = v9;
  }
  if ( (v7 & 2) != 0 )
  {
    v9 |= 0x40u;
    HIDWORD(v16) = v9;
  }
  if ( (v7 & 4) != 0 )
  {
    v9 |= 0x80u;
    HIDWORD(v16) = v9;
  }
  if ( (v7 & 8) != 0 )
    HIDWORD(v16) = v9 | 0x100;
  v13 = 19;
  v14 = &v16;
  v15 = 16;
  if ( !(unsigned int)SetWindowCompositionAttribute(v8, &v13) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0xCB,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      v10);
  if ( a5 )
  {
    updated = DwmpUpdateAccentBlurRect(v8, a5);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)updated);
  }
  return 0LL;
}
