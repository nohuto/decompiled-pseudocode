/*
 * XREFs of ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x18019CC38
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z @ 0x1801995CC (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N1@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x180198938 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1801A47DC (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreIn.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ShowView(
        TouchKeyboardExperienceManager *this,
        const struct KBViewInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 (*v8)(void); // rax
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  unsigned int v11; // edi
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v14[1] = -2LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x476,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v14[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)a2 + 1) + 32LL))(*((_QWORD *)a2 + 1), v14);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1145LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_22;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1), 0LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 1149LL;
    goto LABEL_20;
  }
  v8 = *(__int64 (**)(void))(**((_QWORD **)a2 + 1) + 40LL);
  if ( *((_DWORD *)this + 160) )
  {
    v6 = v8();
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 1180LL;
      goto LABEL_20;
    }
  }
  else
  {
    v6 = v8();
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 1160LL;
      goto LABEL_20;
    }
    FocusedWindow = anonymous_namespace_::GetFocusedWindow();
    Ancestor = GetAncestor(FocusedWindow, 2u);
    v15 = *(_OWORD *)((char *)a2 + 40);
    v11 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 79) + 96LL) + 364LL);
    v6 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int128 *, _QWORD))(**((_QWORD **)this + 37) + 24LL))(
           *((_QWORD *)this + 37),
           Ancestor,
           &v15,
           v11);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 1167LL;
      goto LABEL_20;
    }
    if ( v11 == 3 )
    {
      v6 = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(*((_QWORD *)this + 79), &v15, 0LL);
      v5 = v6;
      if ( v6 < 0 )
      {
        v7 = 1171LL;
        goto LABEL_20;
      }
    }
    else if ( v11 == 2 )
    {
      v6 = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(*((_QWORD *)this + 79), &v15, 1LL);
      v5 = v6;
      if ( v6 < 0 )
      {
        v7 = 1175LL;
        goto LABEL_20;
      }
    }
  }
  v5 = 0;
LABEL_22:
  v12 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v5;
}
