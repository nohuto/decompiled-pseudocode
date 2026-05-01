/*
 * XREFs of ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x18011E678
 * Callers:
 *     ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180136050 (-OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x180123DD0 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::ViewNavigationLevelChanged(RTL_SRWLOCK *a1, unsigned int a2, int a3)
{
  struct IViewWrapperInternal *v5; // rbx
  int v6; // eax
  int v7; // eax
  __int64 (__fastcall ***v8)(); // rdx
  struct IViewWrapperInternal *v9; // rcx
  struct IViewWrapperInternal *v10[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-58h] BYREF
  int v12; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall ***v13)(); // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v10[1] = (struct IViewWrapperInternal *)-2LL;
  try
  {
    if ( a3 == 1 )
    {
      v5 = (struct IViewWrapperInternal *)&a1[37];
      AcquireSRWLockExclusive(a1 + 37);
      v10[2] = v5;
      v10[0] = 0LL;
      v6 = ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a2, v10);
      if ( v6 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x467,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v6);
      v7 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v10[0] + 784LL))(v10[0]);
      v11 = off_180209B10;
      v12 = v7;
      v13 = &v11;
      ViewEventDispatcher::_ForEachComponent((ViewEventDispatcher *)a1);
      if ( v13 )
      {
        v8 = &v11;
        LOBYTE(v8) = v13 != &v11;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v13)[4])(v13, v8);
      }
      v9 = v10[0];
      if ( v10[0] )
      {
        v10[0] = 0LL;
        (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v5 )
        ReleaseSRWLockExclusive((PSRWLOCK)v5);
    }
  }
  catch ( ... )
  {
  }
}
