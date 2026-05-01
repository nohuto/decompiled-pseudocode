/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB164
 * Callers:
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$15 @ 0x18019E094 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$15.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@U?$InterfaceList@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DCD00 (-Release@-$RuntimeClass@U-$InterfaceList@VViewEventArgsBase@@U-$InterfaceList@UIViewEventArgsFor.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::~ComPtr<ViewEventArgsForSelectTargetView>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewEventArgsBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(result);
  }
  return result;
}
