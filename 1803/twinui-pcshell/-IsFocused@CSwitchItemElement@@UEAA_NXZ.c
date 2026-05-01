/*
 * XREFs of ?IsFocused@CSwitchItemElement@@UEAA_NXZ @ 0x180097160
 * Callers:
 *     ?IsFocused@CSwitchItemElement@@WOI@EAA_NXZ @ 0x1800AE320 (-IsFocused@CSwitchItemElement@@WOI@EAA_NXZ.c)
 *     ?IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ @ 0x1800AEA00 (-IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSwitchItemElement::IsFocused(CSwitchItemElement *this)
{
  return *((_BYTE *)this + 176);
}
