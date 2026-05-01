/*
 * XREFs of ??1?$ComPtr@VLegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180100A34
 * Callers:
 *     _ViewEventDispatcher::_HandleWindowCreatedWithNoView_::_1_::dtor$8 @ 0x18019E892 (_ViewEventDispatcher--_HandleWindowCreatedWithNoView_--_1_--dtor$8.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_enum_LegacyViewWrapper::ViewLifetimePolicy_ViewEventDispatcher_____ptr64_const__::_1_::dtor$0 @ 0x18019EBE0 (_Microsoft--WRL--Details--MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal_unsigned_int_.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UILegacyViewWrapper@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FC920 (-Release@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UILegacyViewWrapper@.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<LegacyViewWrapper>::~ComPtr<LegacyViewWrapper>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<ILegacyViewWrapper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
