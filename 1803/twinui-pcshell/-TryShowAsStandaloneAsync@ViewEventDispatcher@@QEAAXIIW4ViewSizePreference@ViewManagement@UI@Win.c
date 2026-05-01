/*
 * XREFs of ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180036674
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055748 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800047AC (-InternalRelease@-$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18000CC20 (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800319A4 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18003291C (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewEventDispatcher::TryShowAsStandaloneAsync(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  RTL_SRWLOCK *v7; // rdi
  __int64 v10; // rbx
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  __int64 v12; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // rbx
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 result; // rax
  wil *v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  unsigned int v23; // eax
  int v24; // [rsp+20h] [rbp-78h]
  int v25; // [rsp+20h] [rbp-78h]
  void *v26; // [rsp+40h] [rbp-58h] BYREF
  ViewEventArgsForShowAsStandalone *v27; // [rsp+48h] [rbp-50h] BYREF
  struct IUnknown *v28; // [rsp+50h] [rbp-48h] BYREF
  int v29[2]; // [rsp+58h] [rbp-40h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v30; // [rsp+60h] [rbp-38h] BYREF
  __int64 v31; // [rsp+68h] [rbp-30h] BYREF
  __int64 v32; // [rsp+70h] [rbp-28h] BYREF
  __int64 v33; // [rsp+78h] [rbp-20h] BYREF
  __int64 v34[2]; // [rsp+80h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v36; // [rsp+B8h] [rbp+20h] BYREF

  v36 = a4;
  v34[1] = -2LL;
  v7 = (RTL_SRWLOCK *)a3;
  try
  {
    v30 = 0LL;
    *(_QWORD *)v29 = 0LL;
    v28 = 0LL;
    v10 = 0LL;
    v31 = 0LL;
    Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v30);
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             a1,
                                                             a2,
                                                             (unsigned int)v7,
                                                             &v30,
                                                             (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)v29,
                                                             &v28);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x190,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded,
        v24);
    }
    else
    {
      v12 = a6;
      if ( !a6 )
        goto LABEL_8;
      v7 = a1 + 37;
      AcquireSRWLockShared(a1 + 37);
      if ( (int)ViewEventDispatcher::_FindPendingActivation((__int64)a1, v12, &v32) >= 0 )
      {
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v31, v32 + 32);
        v10 = v31;
        goto LABEL_6;
      }
    }
    a6 = 0LL;
LABEL_6:
    if ( v7 )
      ReleaseSRWLockShared(v7);
LABEL_8:
    v27 = 0LL;
    v32 = v10;
    v33 = *(_QWORD *)v29;
    v13 = v30;
    v34[0] = (__int64)v30;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs>::InternalRelease(&v27);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *>(
            (__int64 *)&v27,
            v34,
            &v33,
            &v36,
            &a5,
            &a6,
            (__int64 *)&a7,
            &v32);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AA,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v14,
        v25);
    }
    else
    {
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      v15 = AgileGitPtr::CopyLocal((AgileGitPtr *)&v28[4], &GUID_d1b9407f_a351_5319_bce5_178ee5585391, &v26);
      v16 = retaddr;
      if ( v15 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(void *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, ViewEventArgsForShowAsStandalone *))(*(_QWORD *)v26 + 24LL))(
                v26,
                v13,
                v27);
        v18 = retaddr;
        if ( v17 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
          Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs>::InternalRelease(&v27);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v29);
          return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v30);
        }
LABEL_16:
        wil::details::in1diag3::Throw_Hr(
          v18,
          (void *)0x1AE,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v17,
          v25);
        JUMPOUT(0x1800C819FLL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x1AD,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v15,
      v25);
    goto LABEL_16;
  }
  catch ( ... )
  {
    v21 = a7;
    v22 = *a7;
    v23 = wil::ResultFromCaughtException(v20);
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v22 + 24))(v21, v23);
  }
  return result;
}
