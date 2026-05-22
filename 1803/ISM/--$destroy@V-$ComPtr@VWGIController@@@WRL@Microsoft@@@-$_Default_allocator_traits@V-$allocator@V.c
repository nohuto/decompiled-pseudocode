/*
 * XREFs of ??$destroy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@1@QEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@@Z @ 0x180077B68
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_WGIController__std::allocator_Microsoft::WRL::ComPtr_WGIController_____::emplace_back_Microsoft::WRL::ComPtr_WGIController____::_1_::catch$103 @ 0x1800E7537 (_std--vector_Microsoft--WRL--ComPtr_WGIController__std--allocator_Microsoft--WRL--ComPtr_WGICont.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800779D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<WGIController>>>::destroy<Microsoft::WRL::ComPtr<WGIController>>(
        __int64 a1,
        volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v2);
  }
  return result;
}
