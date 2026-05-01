/*
 * XREFs of ?SetThumbnailSourceSize@CSwitchItemElement@@UEAAXAEBUtagSIZE@@@Z @ 0x1802890D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwitchItemElement::SetThumbnailSourceSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  this[54] = *a2;
  CMultitaskingViewElementBase::_LayoutChildren(&this[-28], 0LL, 0LL);
}
