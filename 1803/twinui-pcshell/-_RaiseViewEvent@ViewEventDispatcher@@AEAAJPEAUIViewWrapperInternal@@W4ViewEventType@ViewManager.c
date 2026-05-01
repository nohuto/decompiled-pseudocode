/*
 * XREFs of ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D0A84
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7___::Run @ 0x1801CCE50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7___--Run.c)
 * Callees:
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180032188 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800324F4 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ @ 0x180091FD8 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::_RaiseViewEvent(RTL_SRWLOCK *a1, ViewWrapperBase *a2)
{
  RTL_SRWLOCK *v4; // rdi
  int MatchingViewEventRegistration; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = a1 + 37;
  AcquireSRWLockShared(a1 + 37);
  v12 = (__int64)v4;
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v11);
  MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)a1, a2, &v11);
  v6 = MatchingViewEventRegistration;
  if ( MatchingViewEventRegistration >= 0 )
  {
    if ( v4 )
      ReleaseSRWLockShared(v4);
    v7 = v11[4];
    v12 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = ViewEventDispatcher::_RaiseViewEvent((__int64)a1, (__int64)a2, 0x22u, &v12);
    v6 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0B,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB08,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)MatchingViewEventRegistration);
    if ( v4 )
      ReleaseSRWLockShared(v4);
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease((void **)&v11);
  return v6;
}
