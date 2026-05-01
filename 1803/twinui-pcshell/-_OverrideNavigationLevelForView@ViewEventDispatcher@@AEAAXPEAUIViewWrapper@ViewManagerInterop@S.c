/*
 * XREFs of ?_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1801D0598
 * Callers:
 *     ?OverrideNavigationLevelForView@ViewEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1801CC090 (-OverrideNavigationLevelForView@ViewEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180032188 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800324F4 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewEventDispatcher::_OverrideNavigationLevelForView(
        RTL_SRWLOCK *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, ViewWrapperBase **),
        int a3)
{
  unsigned __int8 (__fastcall *v6)(ViewWrapperBase *, __int64); // rax
  int MatchingViewEventRegistration; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  const char *v10; // r9
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  ViewWrapperBase **v13; // [rsp+30h] [rbp-18h]
  char v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  ViewWrapperBase *v16; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp+20h] BYREF

  v12 = -2LL;
  try
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
    (**a2)(a2, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v16);
    v6 = *(unsigned __int8 (__fastcall **)(ViewWrapperBase *, __int64))(*(_QWORD *)v16 + 760LL);
    if ( a3 == 2 )
    {
      if ( v6(v16, 1LL) )
      {
        v13 = &v16;
        v14 = 1;
        v17 = 0LL;
        AcquireSRWLockShared(a1 + 37);
        *(_QWORD *)v11 = a1 + 37;
        Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v17);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)a1, v16, &v17);
        if ( MatchingViewEventRegistration < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2102LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        if ( a1 != (RTL_SRWLOCK *)-296LL )
          ReleaseSRWLockShared(a1 + 37);
        v8 = v17[4];
        *(_QWORD *)v11 = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        ViewEventDispatcher::_RaiseViewEvent((__int64)a1, (__int64)a2, 7u, (__int64 *)v11);
        Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v17);
        (*(void (__fastcall **)(ViewWrapperBase *, __int64))(*(_QWORD *)v16 + 760LL))(v16, 2LL);
      }
    }
    else
    {
      v6(v16, 0LL);
    }
    result = Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x844,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
             v10);
  }
  return result;
}
