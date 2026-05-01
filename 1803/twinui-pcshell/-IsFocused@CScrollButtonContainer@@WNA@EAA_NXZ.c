/*
 * XREFs of ?IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ @ 0x1800AEA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CScrollButtonContainer::IsFocused(__int64 a1)
{
  return CSwitchItemElement::IsFocused((CSwitchItemElement *)(a1 - 208));
}
