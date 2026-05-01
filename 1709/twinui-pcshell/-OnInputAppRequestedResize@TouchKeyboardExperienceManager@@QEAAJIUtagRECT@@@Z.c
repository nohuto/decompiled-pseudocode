/*
 * XREFs of ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x1801999E8
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x1801A3AA0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180199404 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18019DB1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedResize(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        struct tagRECT *a3)
{
  int ViewInfo; // eax
  TouchKeyboardExperienceManager *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12 = -2LL;
  v11 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, a2, &v11);
  v6 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    v8 = v11;
    ViewInfo = TouchKeyboardExperienceManager::SetHostedPos(v5, *(struct IApplicationFrameWrapper **)(v11 + 8), 0LL, a3);
    v6 = ViewInfo;
    if ( ViewInfo >= 0 )
    {
      ViewInfo = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 8) + 96LL))(*(_QWORD *)(v8 + 8));
      v6 = ViewInfo;
      if ( ViewInfo >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v7 = 356LL;
    }
    else
    {
      v7 = 355LL;
    }
  }
  else
  {
    v7 = 354LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
LABEL_9:
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return v6;
}
