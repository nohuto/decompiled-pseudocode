/*
 * XREFs of ?HandleHardwareKeyboardUIEnabled@TabTipAdapterPolicy@KeyboardHosting@@UEAAJE@Z @ 0x1802522E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleHardwareKeyboardUIEnabled(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  *((_BYTE *)this + 484) = a2 != 0;
  return 0LL;
}
