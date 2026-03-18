/*
 * XREFs of ?QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C001CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C001FC00 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxDriver::QueryInterface(FxDriver *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4097 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
