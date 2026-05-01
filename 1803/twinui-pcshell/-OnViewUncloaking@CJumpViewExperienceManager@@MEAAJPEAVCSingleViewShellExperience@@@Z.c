/*
 * XREFs of ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180177A90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18006C090 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006C0CC (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1800765D0 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18007ABD0 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewUncloaking(
        CJumpViewExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v3; // rdi
  HSTRING v4; // r8
  const WCHAR *StringRawBuffer; // rax
  const char *v6; // r9
  int v7; // ecx
  int v8; // edi
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       *((Microsoft::WRL::Wrappers::Details **)this + 41),
                       0LL,
                       v4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 41), 0LL);
    if ( !SetWindowTextW(v3, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1A3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        v6);
  }
  if ( *((_QWORD *)this + 11) )
    CSingleViewShellExperience::SetWindowBand((__int64)this + 64);
  v7 = *((_DWORD *)this + 100);
  v8 = 92;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v8 = 90;
      }
      else
      {
        v8 = 88;
      }
    }
    else
    {
      v8 = 91;
    }
  }
  else
  {
    v8 = 89;
  }
  v11 = 15LL;
  if ( *((_DWORD *)this + 101) == 3 )
  {
    v12 = *((_DWORD *)this + 100);
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            v11 = 7LL;
        }
        else
        {
          v11 = 11LL;
        }
      }
      else
      {
        v11 = 13LL;
      }
    }
    else
    {
      v11 = 14LL;
    }
  }
  CSingleViewShellExperience::ShowBorder((__int64)this + 64, v11, 1LL, 0LL, 0LL);
  if ( *((_DWORD *)this + 101) == 3 )
  {
    if ( (int)DwmpBeginTransitionRequest(64LL) >= 0 )
      DwmpEndTransitionRequest(64LL);
    v15 = CExperienceManagerAnimationHelper::Begin(
            (__int64)this + 336,
            *((ExperienceManagerUtils **)this + 11),
            v8 | 0x200000u);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        455LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
  }
  return 0LL;
}
