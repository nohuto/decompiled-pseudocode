/*
 * XREFs of ?v_CanPositionWindow@LegacyViewWrapper@@EEAA_NXZ @ 0x180110AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall LegacyViewWrapper::v_CanPositionWindow(LegacyViewWrapper *this)
{
  return (*((_DWORD *)this + 108) & 0x10) == 0;
}
