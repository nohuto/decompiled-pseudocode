/*
 * XREFs of ?OnKeyboardToggleButtonPressed@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x180096FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnKeyboardToggleButtonPressed(KeyboardHosting::TabTipAdapter *this)
{
  *(_BYTE *)(*((_QWORD *)this + 11) + 511LL) = 1;
  return 0LL;
}
