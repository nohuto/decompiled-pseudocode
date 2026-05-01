/*
 * XREFs of ?HandleConvertibleSlateModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_N@Z @ 0x180096780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleConvertibleSlateModeChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  *((_BYTE *)this + 490) = a2;
  return 0LL;
}
