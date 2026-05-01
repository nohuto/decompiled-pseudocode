/*
 * XREFs of ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58
 * Callers:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180047CE4 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_12ddbab8614a989b69f7362d775638f1___::Run @ 0x1800B9BC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_12ddbab8614a989b69f7362d775638f1___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c401736c1c7abf5bd14884b3d5be4201___::Run @ 0x1800E1060 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c401736c1c7abf5bd14884b3d5be4201___--Run.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800F189C (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1800F2778 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1800F2AD4 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1800F2D80 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x1800F3B34 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800F9274 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180113EE0 (-OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledR.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___::Run @ 0x18012A830 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___--Run.c)
 *     CreationThreadDispatcher::RunSync__lambda_c12dfab9154669097a3cd6f4b2210f79___ @ 0x180142C1C (CreationThreadDispatcher--RunSync__lambda_c12dfab9154669097a3cd6f4b2210f79___.c)
 *     CreationThreadDispatcher::RunSync__lambda_6b10e70171ff618d2ed46f6369068d10___ @ 0x180144878 (CreationThreadDispatcher--RunSync__lambda_6b10e70171ff618d2ed46f6369068d10___.c)
 *     CreationThreadDispatcher::RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa___ @ 0x180145E50 (CreationThreadDispatcher--RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa___.c)
 *     CreationThreadDispatcher::RunSync__lambda_d13633a7a08b5cc0e151eb1116ad5e08___ @ 0x1801460A0 (CreationThreadDispatcher--RunSync__lambda_d13633a7a08b5cc0e151eb1116ad5e08___.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18018EF10 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileGitPtr::CopyLocal(AgileGitPtr *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi

  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
  }
  else
  {
    *a3 = 0LL;
    v6 = -2147024809;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
