/*
 * XREFs of ?OnInputAppChanged@TabTipAdapter@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@34567@@Z @ 0x18016EA90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabTipAdapter::OnInputAppChanged(
        TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppChangedEventArgs *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 v8; // rcx
  HSTRING string[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UINT32 length; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  string[0] = 0LL;
  v12 = 0LL;
  length = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppChangedEventArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         string);
  if ( v4 < 0 )
  {
    v5 = 239LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string[0], &length);
  v4 = MsgStringCreateShared(StringRawBuffer, length, &v12);
  if ( v4 < 0 )
  {
    v5 = 242LL;
    goto LABEL_3;
  }
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 72LL))(v8, v12);
    if ( v4 < 0 )
    {
      v5 = 246LL;
      goto LABEL_3;
    }
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8, v12);
    if ( v4 < 0 )
    {
      v5 = 250LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
