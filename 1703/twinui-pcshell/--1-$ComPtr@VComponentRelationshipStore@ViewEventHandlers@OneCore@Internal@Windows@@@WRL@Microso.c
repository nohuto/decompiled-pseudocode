/*
 * XREFs of ??1?$ComPtr@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180100A54
 * Callers:
 *     _ViewEventDispatcher::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18019DF89 (_ViewEventDispatcher--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$InterfaceList@UIViewCUIEventStore@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD5A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore>::~ComPtr<Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,Microsoft::WRL::Details::InterfaceList<IViewCUIEventStore,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
