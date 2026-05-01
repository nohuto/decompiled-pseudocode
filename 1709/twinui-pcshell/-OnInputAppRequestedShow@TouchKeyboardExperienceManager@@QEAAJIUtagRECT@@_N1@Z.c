/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z @ 0x1801995CC
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1801A3610 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180199404 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180199E28 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x18019CC38 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18019DB1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedShow(
        TouchKeyboardExperienceManager *this,
        int a2,
        struct tagRECT *a3,
        char a4,
        bool a5)
{
  int ViewInfo; // eax
  unsigned int v10; // edi
  const struct KBViewInfo *v11; // rbx
  int v12; // eax
  TouchKeyboardExperienceManager *v13; // rcx
  __int64 v14; // rdx
  _BOOL8 v15; // rdx
  TouchKeyboardExperienceManager *v16; // rcx
  bool v17; // r8
  bool v18; // r9
  struct IApplicationFrame *v19; // rcx
  struct KBViewInfo *v20; // rbx
  struct IApplicationFrame *v22; // [rsp+20h] [rbp-20h] BYREF
  struct KBViewInfo *v23[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  v24 = -2LL;
  *((_DWORD *)this + 160) = a2;
  *(_OWORD *)v23 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, 0LL, v23);
  v10 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x116,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_24;
  }
  v22 = 0LL;
  v11 = v23[0];
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationFrame **))(**((_QWORD **)v23[0] + 1) + 32LL))(
          *((_QWORD *)v23[0] + 1),
          &v22);
  v10 = v12;
  if ( v12 < 0 )
  {
    v14 = 280LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_22;
  }
  v12 = TouchKeyboardExperienceManager::SetHostedPos(v13, *((struct IApplicationFrameWrapper **)v11 + 1), v22, a3);
  v10 = v12;
  if ( v12 < 0 )
  {
    v14 = 281LL;
    goto LABEL_20;
  }
  v15 = a4 || a5;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8))(**((_QWORD **)v11 + 2) + 32LL))(*((_QWORD *)v11 + 2), v15);
  v10 = v12;
  if ( v12 < 0 )
  {
    v14 = 283LL;
    goto LABEL_20;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v11 + 2) + 80LL))(*((_QWORD *)v11 + 2));
  v10 = v12;
  if ( v12 < 0 )
  {
    v14 = 284LL;
    goto LABEL_20;
  }
  if ( !a2 )
  {
    LOBYTE(v16) = 1;
    v12 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(v16, 0, v17, v18);
    v10 = v12;
    if ( v12 < 0 )
    {
      v14 = 285LL;
      goto LABEL_20;
    }
  }
  *(struct tagRECT *)((char *)v11 + 40) = *a3;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v11 + 336LL))(*(_QWORD *)v11, 4LL);
  v10 = v12;
  if ( v12 < 0 )
  {
    v14 = 287LL;
    goto LABEL_20;
  }
  TouchKeyboardExperienceManager::ShowView(this, v11);
  v10 = 0;
LABEL_22:
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_24:
  if ( v23[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v20 = v23[1];
      (**(void (__fastcall ***)(struct KBViewInfo *))v23[1])(v23[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(struct KBViewInfo *))(*(_QWORD *)v23[1] + 8LL))(v23[1]);
    }
  }
  return v10;
}
