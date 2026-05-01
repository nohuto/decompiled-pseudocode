/*
 * XREFs of ?WindowChanged@AppViewSwitchItem@@UEAAXXZ @ 0x180164070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewSwitchItem::WindowChanged(struct IApplicationView **this)
{
  AppViewSwitchItem::InititializeThumbnailFactory((AppViewSwitchItem *)(this - 17), this[6], this[7]);
}
