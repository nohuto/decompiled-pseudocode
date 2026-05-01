/*
 * XREFs of ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x18011EB18
 * Callers:
 *     ?OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z @ 0x180136D50 (-OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180124460 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::NavigateAwayFromView(RTL_SRWLOCK *this, unsigned int a2)
{
  _QWORD *v4; // rbx
  RTL_SRWLOCK *v5; // rdi
  struct IViewWrapperInternal *v6; // rcx
  int MatchingViewEventRegistration; // eax
  RTL_SRWLOCK *v8; // rcx
  struct IViewWrapperInternal *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v13; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v11 = 0LL;
    v4 = 0LL;
    v12 = 0LL;
    v5 = this + 37;
    AcquireSRWLockShared(this + 37);
    v13 = v5;
    v6 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v11) >= 0 )
    {
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v11, &v12);
      if ( MatchingViewEventRegistration < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x4B6,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      v4 = v12;
    }
    if ( v5 )
      ReleaseSRWLockShared(v5);
    if ( v4 )
    {
      v8 = (RTL_SRWLOCK *)v4[4];
      v13 = v8;
      if ( v8 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 1))(v8);
      ViewEventDispatcher::_RaiseViewEvent(this, v11, 3LL, &v13);
    }
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  catch ( ... )
  {
  }
}
