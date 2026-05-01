/*
 * XREFs of ?OnInputAppRequestedShow@TabTipAdapter@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@34567@@Z @ 0x18016EB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabTipAdapter::OnInputAppRequestedShow(
        TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // edx
  _DWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[4]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+34h] [rbp-34h]
  int v11; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedShowEventArgs *, _BYTE *))(*(_QWORD *)a3 + 48LL))(
         a3,
         v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *((_DWORD *)this + 21);
    v8[0] = *((_DWORD *)this + 20);
    v8[2] = v11 + v8[0];
    v8[1] = v7 + 50;
    v8[3] = v7 + v10 + 50;
    return (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6), v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x106,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
