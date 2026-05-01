/*
 * XREFs of ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18013DE88
 * Callers:
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800978D0 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::__lambda_5f803f865b4b07caa2d72f9fc7ffab60_ @ 0x18009E0A8 (_lambda_5f803f865b4b07caa2d72f9fc7ffab60_--__lambda_5f803f865b4b07caa2d72f9fc7ffab60_.c)
 *     ??1?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@QEAA@XZ @ 0x18009E0B4 (--1-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x18013D640 (--$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewColle.c)
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18013D6F0 (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 *     ??_E?$CAsyncCallbackWithLambda@V_lambda_e06f31f306e1f92e5da87b2d7004ab51_@@@@UEAAPEAXI@Z @ 0x18013DAC0 (--_E-$CAsyncCallbackWithLambda@V_lambda_e06f31f306e1f92e5da87b2d7004ab51_@@@@UEAAPEAXI@Z.c)
 *     ??_E?$CTaskWrapper@V_lambda_5f803f865b4b07caa2d72f9fc7ffab60_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18013DB10 (--_E-$CTaskWrapper@V_lambda_5f803f865b4b07caa2d72f9fc7ffab60_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18013DBC4 (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013DFA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_18013DFA0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
