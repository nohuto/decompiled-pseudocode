/*
 * XREFs of ?OnInputAppChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppChangedEventArgs@45678@@Z @ 0x18024AD40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024AB14 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024D448 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // edi
  unsigned __int16 *StringRawBuffer; // rax
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UINT32 length; // [rsp+40h] [rbp+18h] BYREF
  HSTRING string; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  string = 0LL;
  length = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppChangedEventArgs *, HSTRING *))(v3 + 48))(
         a3,
         &string);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, &length);
  if ( length )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v9 = KeyboardHosting::TabTipAdapter::SetInputAppAUMID(this, StringRawBuffer);
      if ( v9 < 0 )
      {
        v10 = 549LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    else
    {
      v9 = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(this, StringRawBuffer);
      if ( v9 < 0 )
      {
        v10 = 553LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
