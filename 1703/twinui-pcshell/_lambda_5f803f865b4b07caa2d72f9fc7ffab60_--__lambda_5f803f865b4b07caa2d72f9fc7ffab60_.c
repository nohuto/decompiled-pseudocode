/*
 * XREFs of _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::__lambda_5f803f865b4b07caa2d72f9fc7ffab60_ @ 0x180079408
 * Callers:
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$3 @ 0x18019B074 (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIApplicationViewCollection@@U?$InterfaceList@UIApplicationViewCollectionTestHook@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079AC0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationViewVisibilityDebounced.c)
 */

__int64 __fastcall lambda_5f803f865b4b07caa2d72f9fc7ffab60_::__lambda_5f803f865b4b07caa2d72f9fc7ffab60_(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollection,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollectionTestHook,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
