/*
 * XREFs of ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180123A18
 * Callers:
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18011D36C (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18011D6C8 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x18011D974 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180123720 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1801244F4 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct IViewWrapperInternal **a4,
        struct IUnknownVtbl *a5,
        struct IUnknown **a6)
{
  _QWORD *p_QueryInterface; // r13
  struct IUnknown *v11; // rdi
  int HasWrapperAndListener; // eax
  int v13; // eax
  struct IViewWrapperInternal *v14; // rsi
  struct IUnknown *v15; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  struct IViewWrapperInternal *v17; // r14
  struct IUnknown *v18; // rdi
  struct IUnknownVtbl *v19; // rcx
  int v20; // r15d
  struct IViewWrapperInternal *v21; // rax
  struct IViewWrapperInternal *v22; // rax
  struct IUnknown *v23; // rax
  unsigned int v24; // r15d
  struct IViewWrapperInternal *v26; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v27; // [rsp+38h] [rbp-28h] BYREF
  struct IUnknown *v28[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IUnknownVtbl *v30; // [rsp+A0h] [rbp+40h] BYREF
  struct IViewWrapperInternal *v31; // [rsp+B8h] [rbp+58h] BYREF

  v28[1] = (struct IUnknown *)-2LL;
  *a4 = 0LL;
  p_QueryInterface = &a5->QueryInterface;
  a5->QueryInterface = 0LL;
  *a6 = 0LL;
  v31 = 0LL;
  v27 = 0LL;
  LOBYTE(a5) = 0;
  v26 = 0LL;
  v28[0] = 0LL;
  LOBYTE(v30) = 0;
  v11 = (struct IUnknown *)(a1 + 296);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 296));
  v28[2] = v11;
  HasWrapperAndListener = ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
                            (ViewManagerBridge **)a1,
                            a2,
                            &v31,
                            &v27,
                            (char *)&a5);
  if ( HasWrapperAndListener < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBBC,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)HasWrapperAndListener);
  v13 = ViewEventDispatcher::_EnsureViewHasWrapperAndListener((ViewManagerBridge **)a1, a3, &v26, v28, (char *)&v30);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBBD,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v13);
  if ( v11 )
    ReleaseSRWLockExclusive((PSRWLOCK)v11);
  v14 = v31;
  v15 = v27;
  if ( (_BYTE)a5 )
  {
    lpVtbl = v27[4].lpVtbl;
    a5 = lpVtbl;
    if ( lpVtbl )
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, v14, 0LL, 0LL, &a5);
  }
  v17 = v26;
  v18 = v28[0];
  if ( (_BYTE)v30 )
  {
    v19 = v28[0][4].lpVtbl;
    a5 = v19;
    if ( v19 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v19->QueryInterface + 1))(v19);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, v17, 0LL, 0LL, &a5);
  }
  if ( !v15 || !v18 )
    goto LABEL_24;
  if ( v15 == v18 )
    goto LABEL_23;
  v30 = 0LL;
  a5 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknownVtbl **))v15->lpVtbl->QueryInterface)(
         v15,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v30) < 0 )
    goto LABEL_24;
  v20 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknownVtbl **))v18->lpVtbl->QueryInterface)(
          v18,
          &GUID_00000000_0000_0000_c000_000000000046,
          &a5);
  if ( v20 >= 0 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))a5->QueryInterface + 2))(a5);
  (*((void (__fastcall **)(struct IUnknownVtbl *))v30->QueryInterface + 2))(v30);
  if ( v20 >= 0 && v30 == a5 )
  {
LABEL_23:
    v21 = v14;
    v14 = 0LL;
    v31 = 0LL;
    *a4 = v21;
    v22 = v17;
    v17 = 0LL;
    v26 = 0LL;
    *p_QueryInterface = v22;
    v23 = v15;
    v15 = 0LL;
    v27 = 0LL;
    *a6 = v23;
    v24 = 0;
  }
  else
  {
LABEL_24:
    v24 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBCC,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x80070057LL);
  }
  if ( v18 )
    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
  if ( v17 )
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v15 )
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
  if ( v14 )
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v14 + 16LL))(v14);
  return v24;
}
