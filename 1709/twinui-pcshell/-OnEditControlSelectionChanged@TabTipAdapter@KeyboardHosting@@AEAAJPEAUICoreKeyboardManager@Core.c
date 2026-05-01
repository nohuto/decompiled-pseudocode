/*
 * XREFs of ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1801A3380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A40E4 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AAA50 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlSelectionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v12[1] = -2LL;
  v13 = 0uLL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlSelectionChangedEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12[0] = 0LL;
    v10 = v13;
    v6 = ((__int64 (__fastcall *)(_QWORD, __int128 *, _QWORD *, _BYTE *))KeyboardHosting::TabTipAdapterPolicy::HandleEditControlSelectionChanged)(
           *((_QWORD *)this + 12),
           &v10,
           v12,
           v11);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v8 = *((_QWORD *)this + 5);
      if ( v8
        && (LODWORD(v10) = (int)*(float *)&v13,
            DWORD1(v10) = (int)*((float *)&v13 + 1),
            DWORD2(v10) = (int)(float)(*((float *)&v13 + 2) + *(float *)&v13),
            HIDWORD(v10) = (int)(float)(*((float *)&v13 + 1) + *((float *)&v13 + 3)),
            v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 64LL))(v8, &v10),
            v5 = v6,
            v6 < 0) )
      {
        v7 = 348LL;
      }
      else
      {
        v6 = KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(this);
        v5 = v6;
        if ( v6 >= 0 )
          return 0;
        v7 = 353LL;
      }
    }
    else
    {
      v7 = 344LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x154,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
  }
  return v5;
}
