/*
 * XREFs of ?v_CanPositionWindow@LegacyViewWrapper@@EEAA_NXZ @ 0x18013AD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall LegacyViewWrapper::v_CanPositionWindow(LegacyViewWrapper *this)
{
  return (*((_DWORD *)this + 114) & 0x10) == 0;
}
