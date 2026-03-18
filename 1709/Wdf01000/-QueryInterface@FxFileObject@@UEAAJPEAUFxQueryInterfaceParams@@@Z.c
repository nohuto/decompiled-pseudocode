/*
 * XREFs of ?QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C007DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C001FC00 (-QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

__int64 __fastcall FxFileObject::QueryInterface(FxFileObject *this, FxQueryInterfaceParams *Params)
{
  int Type; // eax

  Type = Params->Type;
  if ( Type != 4120 )
  {
    if ( Type != 5379 )
      return FxObject::QueryInterface(this, Params);
    this = (FxFileObject *)((unsigned __int64)&this->IFxHasCallbacks & -(__int64)(this != 0LL));
  }
  *Params->Object = this;
  return 0LL;
}
