/*
 * XREFs of ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x1800F3A04
 * Callers:
 *     ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18010B3D0 (-OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800F8B48 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::ViewNavigationLevelChanged(RTL_SRWLOCK *a1, unsigned int a2, int a3)
{
  int v5; // eax
  int v6; // eax
  __int64 (__fastcall ***v7)(); // rdx
  struct IViewWrapperInternal *v8; // rcx
  struct IViewWrapperInternal *v9; // [rsp+20h] [rbp-78h] BYREF
  PSRWLOCK SRWLock[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-58h] BYREF
  int v12; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall ***v13)(); // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  try
  {
    if ( a3 == 1 )
    {
      wil::srwlock::lock_exclusive(a1 + 28, SRWLock);
      v9 = 0LL;
      v5 = ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a2, &v9);
      if ( v5 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x461,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v5);
      v6 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v9 + 784LL))(v9);
      v11 = off_1801B4640;
      v12 = v6;
      v13 = &v11;
      ViewEventDispatcher::_ForEachComponent((ViewEventDispatcher *)a1);
      if ( v13 )
      {
        v7 = &v11;
        LOBYTE(v7) = v13 != &v11;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v13)[4])(v13, v7);
      }
      v8 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( SRWLock[0] )
        ReleaseSRWLockExclusive(SRWLock[0]);
    }
  }
  catch ( ... )
  {
  }
}
