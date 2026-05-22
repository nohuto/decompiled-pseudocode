/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@0@@Z @ 0x180077C2C
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_WGIController______ptr64_Microsoft::WRL::ComPtr_WGIController______ptr64_std::allocator_Microsoft::WRL::ComPtr_WGIController______::_1_::catch$2 @ 0x1800E7669 (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--ComPtr_WGIController______ptr64_Microsoft.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800779D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<WGIController>>>(
        volatile signed __int64 **a1,
        volatile signed __int64 **a2)
{
  volatile signed __int64 **v3; // rbx
  volatile signed __int64 *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
