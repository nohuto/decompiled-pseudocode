/*
 * XREFs of ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BDE30
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801D0D98 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x1801D0DF4 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1801DB1A4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1801DB1A4.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewUncloaking(
        CJumpViewExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v3; // rax
  HSTRING v4; // rcx
  HWND v5; // rdi
  HRESULT v6; // eax
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  INT32 result; // [rsp+50h] [rbp+8h] BYREF

  v3 = ExperienceManagerUtils::WindowFromViewWrapper(
         a2[3],
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  v4 = (HSTRING)*((_QWORD *)this + 41);
  result = 0;
  v5 = v3;
  v6 = WindowsCompareStringOrdinal(v4, 0LL, &result);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    JUMPOUT(0x1800BDFBELL);
  }
  if ( result )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 41), 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1AA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        v8);
  }
  if ( *((_QWORD *)this + 11) )
    CSingleViewShellExperience::SetWindowBand((char *)this + 64, *((unsigned int *)this + 102));
  v9 = *((_DWORD *)this + 100);
  v10 = 92;
  if ( v9 )
  {
    v11 = v9 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          v10 = 90;
      }
      else
      {
        v10 = 88;
      }
    }
    else
    {
      v10 = 91;
    }
  }
  else
  {
    v10 = 89;
  }
  v13 = 15LL;
  if ( *((_DWORD *)this + 101) == 3 )
  {
    v14 = *((_DWORD *)this + 100);
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            v13 = 7LL;
        }
        else
        {
          v13 = 11LL;
        }
      }
      else
      {
        v13 = 13LL;
      }
    }
    else
    {
      v13 = 14LL;
    }
  }
  CSingleViewShellExperience::ShowBorder((char *)this + 64, v13, 1LL, 0LL, 0LL);
  if ( *((_DWORD *)this + 101) == 3 )
  {
    if ( (int)DwmpBeginTransitionRequest(64LL) >= 0 )
      DwmpEndTransitionRequest(64LL);
    v17 = CExperienceManagerAnimationHelper::Begin((char *)this + 336, *((_QWORD *)this + 11), v10 | 0x200000u);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1CE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
  }
  return 0LL;
}
