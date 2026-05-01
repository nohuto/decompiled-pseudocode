/*
 * XREFs of ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800216CC
 * Callers:
 *     ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x18002176C (-RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800CA7A8 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SetDirectorReference@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIUnknown@@@Z @ 0x1800E1860 (-SetDirectorReference@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x1800F9F84 (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 *     ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1801216A0 (-RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWr.c)
 *     ?TryBack@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x180140240 (-TryBack@ViewWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIAppLayoutCache@@@Z @ 0x180170C84 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1801B0154 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5d878536394a9e5d6c15e6b3f5940618___::Run @ 0x1801CEBB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5d878536394a9e5d6c15e6b3f5940618___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AgileGitPtr::Initialize(AgileGitPtr *this, const struct _GUID *a2, struct IUnknown *a3)
{
  __int64 v5; // rcx
  int AgileReference; // edi
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)this;
  if ( v5 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  AgileReference = 0;
  if ( a3 )
  {
    v10 = 0LL;
    AgileReference = RoGetAgileReference(0LL, a2, a3, &v10);
    if ( AgileReference < 0 )
    {
      v8 = v10;
    }
    else
    {
      v8 = *(_QWORD *)this;
      *(_QWORD *)this = v10;
    }
    if ( v8 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)AgileReference;
}
