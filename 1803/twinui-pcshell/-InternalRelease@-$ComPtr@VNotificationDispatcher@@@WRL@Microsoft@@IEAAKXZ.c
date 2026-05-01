/*
 * XREFs of ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800955F4
 * Callers:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18000B794 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ??1?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F8924 (--1-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_303b3e4a139562c0eeb46ede40d5983a_::__lambda_303b3e4a139562c0eeb46ede40d5983a_ @ 0x1800F8998 (_lambda_303b3e4a139562c0eeb46ede40d5983a_--__lambda_303b3e4a139562c0eeb46ede40d5983a_.c)
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x180139468 (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificati.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x18013A470 (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x18013C510 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x18013D91C (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x18013E088 (-RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewColl.c)
 *     ??$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z @ 0x18019D5D0 (--$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z.c)
 *     ??1?$PrivilegedOperationsBase@UIPrivilegedWindowGroupingOperations@@@@UEAA@XZ @ 0x18019E0FC (--1-$PrivilegedOperationsBase@UIPrivilegedWindowGroupingOperations@@@@UEAA@XZ.c)
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x18019E1A8 (--1PrivilegedOperationsService@@UEAA@XZ.c)
 *     ??4?$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z @ 0x18019E27C (--4-$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18019F160 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOpera.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
