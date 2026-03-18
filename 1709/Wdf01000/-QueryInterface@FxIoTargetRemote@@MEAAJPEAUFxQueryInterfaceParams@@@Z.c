/*
 * XREFs of ?QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0013B00
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C00232B0 (-QueryInterface@FxIoTarget@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxIoTargetRemote::QueryInterface(FxIoTargetRemote *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4609 )
    return FxIoTarget::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
