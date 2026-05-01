/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18004ED1C
 * Callers:
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1800514D0 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180052CA0 (-HostNavigationLevelChanged@ViewWrapperBase@@UEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1801E6490 (-SetNavigationLevelOverride@ViewWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z @ 0x1801E8020 (-put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18004EC5C (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18004F6C0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?GetNavigationLevelForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800577A0 (-GetNavigationLevelForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAW4NavigationLevel@ViewManage.c)
 *     ?v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x18005AC10 (-v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA-AW4NavigationLevel@ViewManagerInterop@Shell@In.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x1800F061C (-ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInter.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass(ViewWrapperBase *this)
{
  struct IUnknown *v1; // rdx
  ViewManagerBridge *v3; // rcx
  __int64 (__fastcall *v4)(ViewManagerBridge *__hidden, struct IUnknown *, enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *); // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // r10
  int v8; // eax
  REGHANDLE v9; // rcx
  __int64 (__fastcall *v10)(ViewWrapperBase *); // rax
  int DesiredNavigationLevel; // eax
  __int64 v12; // rdx
  ULONG UserDataCount; // [rsp+20h] [rbp-59h]
  unsigned int v14; // [rsp+30h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-45h] BYREF
  int v16; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v18; // [rsp+40h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v22; // [rsp+70h] [rbp-9h]
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  int *v25; // [rsp+80h] [rbp+7h]
  int v26; // [rsp+88h] [rbp+Fh]
  int v27; // [rsp+8Ch] [rbp+13h]
  int *v28; // [rsp+90h] [rbp+17h]
  int v29; // [rsp+98h] [rbp+1Fh]
  int v30; // [rsp+9Ch] [rbp+23h]
  int *v31; // [rsp+A0h] [rbp+27h]
  int v32; // [rsp+A8h] [rbp+2Fh]
  int v33; // [rsp+ACh] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v1 = (struct IUnknown *)*((_QWORD *)this + 24);
  v14 = *((_DWORD *)this + 70);
  if ( v1 )
  {
    v3 = *(ViewManagerBridge **)(*((_QWORD *)this + 21) + 520LL);
    v4 = *(__int64 (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *))(*(_QWORD *)v3 + 256LL);
    v5 = v4 == ViewManagerBridge::GetNavigationLevelForView
       ? ViewManagerBridge::GetNavigationLevelForView(
           v3,
           v1,
           (enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *)&v14)
       : v4(v3, v1, (enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *)&v14);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x952,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        UserDataCount);
  }
  v6 = *((_DWORD *)this + 70);
  if ( (*((_BYTE *)this + 96) & 0x10) != 0 && (*((_BYTE *)this + 96) & 0x20) == 0 )
    v6 = v6 != 0;
  if ( (signed int)v6 >= *((_DWORD *)this + 72) )
    v6 = *((_DWORD *)this + 72);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *((_DWORD *)this + 37);
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v16 = v8;
    v25 = &v16;
    v28 = (int *)&v17;
    v18 = *((_DWORD *)this + 70);
    v31 = &v18;
    v26 = 4;
    v17 = v6;
    v29 = 4;
    v32 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039714B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v9 = *(_QWORD *)(v7 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v22 = &unk_180397156;
    UserData.Reserved = 2;
    v23 = 117;
    v24 = 1;
    EventWriteTransfer(v9, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v10 = *(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 120LL);
  if ( (char *)v10 == (char *)UAPViewWrapper::v_GetDesiredNavigationLevel )
    DesiredNavigationLevel = UAPViewWrapper::v_GetDesiredNavigationLevel(this);
  else
    DesiredNavigationLevel = v10(this);
  if ( v6 != DesiredNavigationLevel )
  {
    (*(void (__fastcall **)(ViewWrapperBase *, _QWORD))(*(_QWORD *)this + 144LL))(this, v6);
    v12 = *((_QWORD *)this + 33);
    if ( v12 )
      ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this, v12, 2);
    ViewEventDispatcher::ViewDesiredNavigationLevelChanged(
      *((_QWORD *)this + 21),
      *((unsigned int *)this + 37),
      v14,
      v6);
    ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(this);
  }
}
