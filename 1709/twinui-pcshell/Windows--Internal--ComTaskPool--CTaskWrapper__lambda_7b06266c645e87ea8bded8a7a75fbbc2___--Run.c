/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7b06266c645e87ea8bded8a7a75fbbc2___::Run @ 0x18019F350
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18019C124 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7b06266c645e87ea8bded8a7a75fbbc2___::Run(
        __int64 a1)
{
  HWND WindowW; // rax
  TouchKeyboardExperienceManager *v3; // rcx
  int ModalExperienceAsync; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( WindowW )
  {
    if ( !GetPropW(WindowW, L"IsExplorerShuttingDown") )
    {
      v3 = *(TouchKeyboardExperienceManager **)(a1 + 24);
      if ( *((_QWORD *)v3 + 58) )
      {
        ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync(v3);
        if ( ModalExperienceAsync < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1FF,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)ModalExperienceAsync);
      }
    }
  }
}
