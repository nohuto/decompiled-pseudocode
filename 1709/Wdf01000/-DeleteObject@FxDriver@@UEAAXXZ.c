/*
 * XREFs of ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C007E560
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 */

void __fastcall FxDriver::DeleteObject(FxDriver *this)
{
  FxObject::DeleteObject(this);
}
