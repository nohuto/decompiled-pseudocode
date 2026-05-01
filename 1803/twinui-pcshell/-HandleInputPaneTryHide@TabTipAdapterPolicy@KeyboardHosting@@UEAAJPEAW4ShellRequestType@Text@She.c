/*
 * XREFs of ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1802522F0
 * Callers:
 *     ?OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryHideRequestedEventArgs@45678@@Z @ 0x18024B6F0 (-OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  int v2; // eax

  v2 = 0;
  *(_DWORD *)a2 = 0;
  if ( *((_BYTE *)this + 392) && !*((_DWORD *)this + 124) )
  {
    if ( *((_DWORD *)this + 129) != 512 )
      v2 = 2;
    *(_DWORD *)a2 = v2;
  }
  return 0LL;
}
