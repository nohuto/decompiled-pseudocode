/*
 * XREFs of ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8790
 * Callers:
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1800F2778 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1800F2AD4 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1800F2D80 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x1800F8480 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800F9274 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  int HasWrapperAndListener; // eax
  int v12; // eax
  struct IViewWrapperInternal *v13; // rsi
  struct IUnknown *v14; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  struct IViewWrapperInternal *v16; // r14
  struct IUnknown *v17; // rdi
  struct IUnknownVtbl *v18; // rcx
  int v19; // r15d
  struct IViewWrapperInternal *v20; // rax
  struct IViewWrapperInternal *v21; // rax
  struct IUnknown *v22; // rax
  unsigned int v23; // r15d
  struct IViewWrapperInternal *v25; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v26; // [rsp+38h] [rbp-28h] BYREF
  struct IUnknown *v27; // [rsp+40h] [rbp-20h] BYREF
  PSRWLOCK SRWLock[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IUnknownVtbl *v30; // [rsp+A0h] [rbp+40h] BYREF
  struct IViewWrapperInternal *v31; // [rsp+B8h] [rbp+58h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  *a4 = 0LL;
  p_QueryInterface = &a5->QueryInterface;
  a5->QueryInterface = 0LL;
  *a6 = 0LL;
  v31 = 0LL;
  v26 = 0LL;
  LOBYTE(a5) = 0;
  v25 = 0LL;
  v27 = 0LL;
  LOBYTE(v30) = 0;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 224), SRWLock);
  HasWrapperAndListener = ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
                            (ViewManagerBridge **)a1,
                            a2,
                            &v31,
                            &v26,
                            (char *)&a5);
  if ( HasWrapperAndListener < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB3A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)HasWrapperAndListener);
  v12 = ViewEventDispatcher::_EnsureViewHasWrapperAndListener((ViewManagerBridge **)a1, a3, &v25, &v27, (char *)&v30);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB3B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v12);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  v13 = v31;
  v14 = v26;
  if ( (_BYTE)a5 )
  {
    lpVtbl = v26[4].lpVtbl;
    a5 = lpVtbl;
    if ( lpVtbl )
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, v13, 0LL, 0LL, &a5);
  }
  v16 = v25;
  v17 = v27;
  if ( (_BYTE)v30 )
  {
    v18 = v27[4].lpVtbl;
    a5 = v18;
    if ( v18 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v18->QueryInterface + 1))(v18);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, v16, 0LL, 0LL, &a5);
  }
  if ( !v14 || !v17 )
    goto LABEL_24;
  if ( v14 == v17 )
    goto LABEL_23;
  v30 = 0LL;
  a5 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknownVtbl **))v14->lpVtbl->QueryInterface)(
         v14,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v30) < 0 )
    goto LABEL_24;
  v19 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknownVtbl **))v17->lpVtbl->QueryInterface)(
          v17,
          &GUID_00000000_0000_0000_c000_000000000046,
          &a5);
  if ( v19 >= 0 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))a5->QueryInterface + 2))(a5);
  (*((void (__fastcall **)(struct IUnknownVtbl *))v30->QueryInterface + 2))(v30);
  if ( v19 >= 0 && v30 == a5 )
  {
LABEL_23:
    v20 = v13;
    v13 = 0LL;
    v31 = 0LL;
    *a4 = v20;
    v21 = v16;
    v16 = 0LL;
    v25 = 0LL;
    *p_QueryInterface = v21;
    v22 = v14;
    v14 = 0LL;
    v26 = 0LL;
    *a6 = v22;
    v23 = 0;
  }
  else
  {
LABEL_24:
    v23 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x80070057LL);
  }
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  if ( v16 )
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v14 )
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  if ( v13 )
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v13 + 16LL))(v13);
  return v23;
}
