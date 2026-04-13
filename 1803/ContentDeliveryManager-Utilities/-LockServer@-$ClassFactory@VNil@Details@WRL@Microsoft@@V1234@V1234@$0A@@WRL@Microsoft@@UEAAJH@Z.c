/*
 * XREFs of ?LockServer@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJH@Z @ 0x18004F510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::LockServer(
        __int64 a1,
        int a2)
{
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    else
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    return 0LL;
  }
  else
  {
    RoOriginateError(2147500037LL, 0LL);
    return 2147500037LL;
  }
}
