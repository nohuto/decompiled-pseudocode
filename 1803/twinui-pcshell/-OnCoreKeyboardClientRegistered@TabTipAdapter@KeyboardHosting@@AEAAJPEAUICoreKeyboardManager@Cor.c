/*
 * XREFs of ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x18024A370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardClientRegistered(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs *a3)
{
  *((_BYTE *)this + 296) = 1;
  return KeyboardHosting::TabTipAdapter::ExecutePendingRequest(this);
}
