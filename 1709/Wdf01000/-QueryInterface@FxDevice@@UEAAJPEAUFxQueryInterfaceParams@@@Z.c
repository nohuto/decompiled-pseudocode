/*
 * XREFs of ?QueryInterface@FxDevice@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1C0004120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::QueryInterface(FxDevice *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // r8
  void *v3; // r10
  __int64 result; // rax

  Type = Params->Type;
  v3 = this;
  if ( Type == 4098 )
  {
    *Params->Object = this;
    return 0LL;
  }
  result = 0LL;
  if ( Type == 4144 )
  {
LABEL_8:
    *Params->Object = v3;
    return result;
  }
  if ( Type == 5379 )
  {
    if ( this )
      v3 = &this->IFxHasCallbacks;
    else
      v3 = 0LL;
    goto LABEL_8;
  }
  if ( Type != 4096 )
    return 3221226169LL;
  *Params->Object = this;
  return 0LL;
}
