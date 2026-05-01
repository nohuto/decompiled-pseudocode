/*
 * XREFs of ?Hide@SwitchItemThumbnailElement@@UEAAXXZ @ 0x18029D510
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CMultitaskingViewElementBase@@UEAAXXZ @ 0x18028A930 (-Hide@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall SwitchItemThumbnailElement::Hide(SwitchItemThumbnailElement *this)
{
  CMultitaskingViewElementBase::Hide(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 74);
}
