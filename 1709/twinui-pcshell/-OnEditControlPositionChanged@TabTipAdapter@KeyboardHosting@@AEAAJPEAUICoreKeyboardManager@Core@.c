/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1801A3140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x180199D34 (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AA930 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v12; // [rsp+48h] [rbp+7h] BYREF
  __int128 v13; // [rsp+58h] [rbp+17h] BYREF
  int v14; // [rsp+68h] [rbp+27h] BYREF
  __int64 v15; // [rsp+70h] [rbp+2Fh]
  __int128 v16; // [rsp+78h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v15 = -2LL;
  v16 = 0uLL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x126,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v12 = 0LL;
  v13 = v16;
  v6 = KeyboardHosting::TabTipAdapterPolicy::HandleEditControlPositionChanged(*((_QWORD *)this + 12), &v13, &v12, &v14);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 299LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    LODWORD(v13) = (int)*(float *)&v16;
    DWORD1(v13) = (int)*((float *)&v16 + 1);
    DWORD2(v13) = (int)(float)(*((float *)&v16 + 2) + *(float *)&v16);
    HIDWORD(v13) = (int)(float)(*((float *)&v16 + 1) + *((float *)&v16 + 3));
    v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 48LL))(v8, &v13);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 303LL;
      goto LABEL_12;
    }
  }
  if ( v14 == 3 && (unsigned int)TouchKeyboardExperienceManager::GetInputAppState(*((_QWORD *)this + 7)) == 1 )
  {
    LOBYTE(v9) = *((_BYTE *)this + 209);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, _DWORD))(**((_QWORD **)this + 3) + 352LL))(
           *((_QWORD *)this + 3),
           v12,
           *((unsigned int *)this + 68),
           v9,
           3,
           0);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 317LL;
      goto LABEL_12;
    }
  }
  v5 = 0;
LABEL_14:
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v5;
}
