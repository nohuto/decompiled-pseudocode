/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18011749C
 * Callers:
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x180113160 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1801146C0 (-SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801148C0 (-HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180115B80 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z @ 0x180116700 (-put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800F8B48 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1801141A0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180117638 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ??$DesiredNavigationLevelChange@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@AEAW412345@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@1@Z @ 0x180119EC4 (--$DesiredNavigationLevelChange@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass(ViewWrapperBase *this)
{
  __int64 v1; // rdx
  int *v2; // rsi
  int v4; // eax
  unsigned int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // edx
  ViewEventDispatcher *v9; // rcx
  __int64 (__fastcall ***v10)(); // rdx
  int v11; // [rsp+20h] [rbp-60h] BYREF
  int v12[3]; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 (__fastcall **v13)(); // [rsp+30h] [rbp-50h] BYREF
  int v14; // [rsp+38h] [rbp-48h]
  __int64 (__fastcall ***v15)(); // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = *((_QWORD *)this + 21);
  v2 = (int *)((char *)this + 256);
  v11 = *((_DWORD *)this + 64);
  if ( v1 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(*((_QWORD *)this + 19) + 448LL) + 240LL))(
           *(_QWORD *)(*((_QWORD *)this + 19) + 448LL),
           v1,
           &v11);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8C0,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = *((_DWORD *)this + 20);
  v6 = *v2;
  if ( (v5 & 0x10) != 0 && (~(v5 >> 5) & 1) != 0 )
    v6 = v6 != 0;
  if ( v6 >= *((_DWORD *)this + 66) )
    v6 = *((_DWORD *)this + 66);
  v12[0] = v6;
  ViewManagerInteropTraceLogging::DesiredNavigationLevelChange<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
    (char *)this + 132,
    v12,
    v2);
  if ( v6 != (*(unsigned int (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 120LL))(this) )
  {
    (*(void (__fastcall **)(ViewWrapperBase *, _QWORD))(*(_QWORD *)this + 144LL))(this, (unsigned int)v6);
    v7 = *((_QWORD *)this + 30);
    if ( v7 )
      ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange(this, v7, 2LL);
    if ( v6 == 1 && v11 > 1 )
      v6 = 3;
    v8 = *((_DWORD *)this + 33);
    v9 = (ViewEventDispatcher *)*((_QWORD *)this + 19);
    v13 = off_1801B4580;
    v15 = &v13;
    v14 = v6;
    ViewEventDispatcher::_ForEachComponent(v9, v8, (__int64)&v13);
    if ( v15 )
    {
      v10 = &v13;
      LOBYTE(v10) = v15 != &v13;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v15)[4])(v15, v10);
    }
    ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(this);
  }
}
