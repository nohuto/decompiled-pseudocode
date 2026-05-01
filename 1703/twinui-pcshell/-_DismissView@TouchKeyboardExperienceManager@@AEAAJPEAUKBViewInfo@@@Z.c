/*
 * XREFs of ?_DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18016C3F0
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@UEAAJPEAUMsgString@@@Z @ 0x18016B4A0 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@UEAAJPEAUMsgString@@@Z.c)
 *     ?_OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18016C960 (-_OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJ_N0@Z @ 0x18016B734 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJ_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::_DismissView(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  TouchKeyboardExperienceManager *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)a2 + 1) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 32LL))(*((_QWORD *)this + 41));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x286,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  if ( *(_QWORD *)a2
    && (v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 336LL))(*(_QWORD *)a2, 0LL), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x28B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    v7 = (TouchKeyboardExperienceManager *)*((_QWORD *)a2 + 1);
    if ( v7 )
    {
      *((_QWORD *)a2 + 1) = 0LL;
      (*(void (__fastcall **)(TouchKeyboardExperienceManager *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(v7, 0, 0);
    v9 = v8;
    if ( v8 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x291,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
