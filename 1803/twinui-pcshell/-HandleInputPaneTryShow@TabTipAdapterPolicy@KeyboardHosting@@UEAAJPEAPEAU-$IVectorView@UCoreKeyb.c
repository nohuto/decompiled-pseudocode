/*
 * XREFs of ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x180252320
 * Callers:
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x18024B770 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800F3430 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NXZ @ 0x180249CB8 (-IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@QEBA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int v4; // eax
  _QWORD *v5; // rdx
  KeyboardHosting::TabTipAdapterPolicy *v6; // rcx
  int PositionAndSizeOptions; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  *a2 = 0LL;
  if ( !*(_BYTE *)(a1 + 392) || *(_DWORD *)(a1 + 496) )
  {
    v4 = *(_DWORD *)(a1 + 516);
    if ( (v4 == 2 || v4 == 16)
      && (*(_BYTE *)(a1 + 509) || *(_BYTE *)(a1 + 510))
      && !KeyboardHosting::TabTipAdapterPolicy::IsHardwareKeyboardAvailable((KeyboardHosting::TabTipAdapterPolicy *)a1) )
    {
      PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(v6, v5);
      v8 = PositionAndSizeOptions;
      if ( PositionAndSizeOptions < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x99,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
          (const char *)(unsigned int)PositionAndSizeOptions);
        return v8;
      }
      *a3 = 1;
    }
  }
  return 0LL;
}
