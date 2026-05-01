/*
 * XREFs of ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1801CF328
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055748 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800047AC (-InternalRelease@-$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18003291C (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ViewSizePreference@ViewManagement@UI@7@AEAUSize@Foundation@7@AEAPEAUIAsyncCallback@@@Z @ 0x1801C7008 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::TryShowAsViewModeAsync(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 result; // rax
  wil *v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // eax
  void *v20; // [rsp+40h] [rbp-48h] BYREF
  ViewEventArgsForShowAsStandalone *v21; // [rsp+48h] [rbp-40h] BYREF
  char *v22; // [rsp+50h] [rbp-38h] BYREF
  int v23[2]; // [rsp+58h] [rbp-30h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v24; // [rsp+60h] [rbp-28h] BYREF
  __int64 v25; // [rsp+68h] [rbp-20h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v28; // [rsp+A8h] [rbp+20h] BYREF

  v28 = a4;
  v26[1] = -2LL;
  try
  {
    v24 = 0LL;
    *(_QWORD *)v23 = 0LL;
    v22 = 0LL;
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v23);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v24);
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             a1,
                                                             a2,
                                                             a3,
                                                             &v24,
                                                             (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)v23,
                                                             (struct IUnknown **)&v22);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        497LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v21 = 0LL;
    v25 = *(_QWORD *)v23;
    v11 = v24;
    v26[0] = v24;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs>::InternalRelease(&v21);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ApplicationViewMode &,enum Windows::UI::ViewManagement::ViewSizePreference &,Windows::Foundation::Size &,IAsyncCallback * &>(
            &v21,
            v26,
            &v25,
            &v28,
            &a5,
            &a6,
            &a7);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        506LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v12);
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v13 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v22 + 32), &GUID_d1b9407f_a351_5319_bce5_178ee5585391, &v20);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        509LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(void *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, ViewEventArgsForShowAsStandalone *))(*(_QWORD *)v20 + 24LL))(
            v20,
            v11,
            v21);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        510LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v23);
    result = Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v24);
  }
  catch ( ... )
  {
    v17 = a7;
    v18 = *a7;
    v19 = wil::ResultFromCaughtException(v16);
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v18 + 24))(v17, v19);
  }
  return result;
}
