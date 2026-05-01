/*
 * XREFs of ?OnInputAppRequestedHide@TabTipAdapter@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@34567@@Z @ 0x18016EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabTipAdapter::OnInputAppRequestedHide(
        TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedHideEventArgs *))(**((_QWORD **)this + 6) + 40LL))(
           *((_QWORD *)this + 6),
           a2,
           a3);
}
