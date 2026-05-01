/*
 * XREFs of _lambda_de7a847248f7e9ff51c83bca1460305a_::__lambda_de7a847248f7e9ff51c83bca1460305a_ @ 0x18005FEF0
 * Callers:
 *     _Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged_::_1_::dtor$2 @ 0x18019A64A (_Windows--Internal--Shell--Desktop--ViewManagerInterop--ObjectWithVisibility--Raise_ea_18019A64A.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E960 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_de7a847248f7e9ff51c83bca1460305a_::__lambda_de7a847248f7e9ff51c83bca1460305a_(__int64 a1)
{
  volatile signed __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(volatile signed __int64 **)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v2);
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
