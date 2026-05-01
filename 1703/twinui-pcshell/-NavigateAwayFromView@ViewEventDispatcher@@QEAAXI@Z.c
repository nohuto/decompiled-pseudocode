/*
 * XREFs of ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x1800F3E90
 * Callers:
 *     ?OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z @ 0x18010BE10 (-OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1800F91E0 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::NavigateAwayFromView(RTL_SRWLOCK *this, unsigned int a2)
{
  _QWORD *v4; // rbx
  struct IViewWrapperInternal *v5; // rcx
  int MatchingViewEventRegistration; // eax
  RTL_SRWLOCK *v7; // rcx
  struct IViewWrapperInternal *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v10 = 0LL;
    v4 = 0LL;
    v11 = 0LL;
    Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 28, &SRWLock);
    v5 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v10) >= 0 )
    {
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v10, &v11);
      if ( MatchingViewEventRegistration < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x4B0,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      v4 = v11;
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    if ( v4 )
    {
      v7 = (RTL_SRWLOCK *)v4[4];
      SRWLock = v7;
      if ( v7 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v7->Ptr + 1))(v7);
      ViewEventDispatcher::_RaiseViewEvent(this, v10, 3LL, &SRWLock);
    }
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  catch ( ... )
  {
  }
}
