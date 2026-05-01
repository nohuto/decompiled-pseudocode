/*
 * XREFs of ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x18023FA6C
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18024AFF0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18023D284 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x18024179C (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180243754 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedResize(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct tagRECT *a3,
        bool a4)
{
  int ViewInfo; // eax
  TouchKeyboardExperienceManager *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v15 = -2LL;
  v14 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, a2, &v14);
  v10 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v11 = 428LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_11;
  }
  v12 = v14;
  ViewInfo = TouchKeyboardExperienceManager::SetHostedPos(v9, *(struct IApplicationFrameWrapper **)(v14 + 8), 0LL, a3);
  v10 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v11 = 429LL;
    goto LABEL_9;
  }
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 8) + 96LL))(*(_QWORD *)(v12 + 8));
  v10 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v11 = 430LL;
    goto LABEL_9;
  }
  ViewInfo = TouchKeyboardExperienceManager::UpdateBorder((TouchKeyboardExperienceManager *)this, a2, a4);
  v10 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v11 = 432LL;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_11:
  if ( *((_QWORD *)&v14 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v14 + 1));
  return v10;
}
