/*
 * XREFs of ?QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00232B0
 * Callers:
 *     ?QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0013B00 (-QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C001FC00 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

__int64 __fastcall FxIoTarget::QueryInterface(FxIoTarget *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4608 )
    return FxObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0LL;
}
