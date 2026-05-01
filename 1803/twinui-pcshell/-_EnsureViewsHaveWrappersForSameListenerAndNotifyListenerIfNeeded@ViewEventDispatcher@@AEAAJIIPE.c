/*
 * XREFs of ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18003291C
 * Callers:
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180036674 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1801CEF80 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1801CF328 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18003220C (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180032D68 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a4,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a5,
        struct IUnknown **a6)
{
  unsigned int v10; // edi
  struct IUnknown *v11; // rsi
  int HasWrapperAndListener; // eax
  int v13; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v14; // r15
  struct IUnknown *v15; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v16; // r14
  struct IUnknown *v17; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  struct IUnknownVtbl *v20; // rcx
  int v21; // [rsp+20h] [rbp-40h]
  int v22; // [rsp+20h] [rbp-40h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v23; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v24; // [rsp+38h] [rbp-28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v25; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown *v26[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+58h] BYREF

  v26[1] = (struct IUnknown *)-2LL;
  v10 = 0;
  *a4 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  LOBYTE(v28) = 0;
  v23 = 0LL;
  v26[0] = 0LL;
  LOBYTE(v29) = 0;
  v11 = (struct IUnknown *)&this[37];
  AcquireSRWLockExclusive(this + 37);
  v26[2] = v11;
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v25);
  HasWrapperAndListener = ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
                            (ViewEventDispatcher *)this,
                            a2,
                            (__int64)&v28);
  if ( HasWrapperAndListener < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA19,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)HasWrapperAndListener,
      v21);
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(v26);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v23);
  v13 = ViewEventDispatcher::_EnsureViewHasWrapperAndListener((ViewEventDispatcher *)this, a3, (__int64)&v29);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA1A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v13,
      v22);
  if ( v11 )
    ReleaseSRWLockExclusive((PSRWLOCK)v11);
  v14 = v25;
  v15 = v24;
  if ( (_BYTE)v28 )
  {
    lpVtbl = v24[4].lpVtbl;
    v28 = (__int64)lpVtbl;
    if ( lpVtbl )
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet((__int64)this, v14, 0, 0LL, &v28);
  }
  v16 = v23;
  v17 = v26[0];
  if ( (_BYTE)v29 )
  {
    v20 = v26[0][4].lpVtbl;
    v28 = (__int64)v20;
    if ( v20 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v20->QueryInterface + 1))(v20);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet((__int64)this, v16, 0, 0LL, &v28);
  }
  if ( (unsigned int)SHIsSameObject(v15, v17) )
  {
    v25 = 0LL;
    *a4 = v14;
    v23 = 0LL;
    *a5 = v16;
    v24 = 0LL;
    *a6 = v15;
  }
  else
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA29,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x80070057LL,
      v22);
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(v26);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v25);
  return v10;
}
