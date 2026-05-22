/*
 * XREFs of ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180060794
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180061270 (--$_Callback_once@V-$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800030E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000771C (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007E7C (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009880 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18006057C (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x180060EF0 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180060FA8 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHeadUpdateListener::Initialize(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // r14
  void *v2; // rbx
  HANDLE Event; // rdi
  const char *v4; // r9
  int LastError; // eax
  int v6; // eax
  __int64 v7; // rdx
  wil::details::event_watcher_state **v8; // rdi
  wil::details::event_watcher_state *v9; // rsi
  DWORD v10; // ebx
  __int64 v11; // rdx
  wil::details::event_watcher_state *v12; // rcx
  void ***v13; // rdx
  RTL_SRWLOCK *InstanceOffInputThread; // rax
  struct MPC3DStateHelper *v15; // rdi
  char v16; // bl
  wil::details::event_watcher_state *v17; // [rsp+28h] [rbp-59h] BYREF
  void *v18; // [rsp+30h] [rbp-51h] BYREF
  __int128 v19; // [rsp+38h] [rbp-49h]
  MPCHeadUpdateListener *v20; // [rsp+48h] [rbp-39h]
  __int64 v21; // [rsp+50h] [rbp-31h]
  void **v22; // [rsp+58h] [rbp-29h] BYREF
  __int128 v23; // [rsp+60h] [rbp-21h]
  MPCHeadUpdateListener *v24; // [rsp+70h] [rbp-11h]
  void ***v25; // [rsp+90h] [rbp+Fh]
  void ***v26; // [rsp+C0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v21 = -2LL;
  v1 = MPCHeadUpdateListener::s_instance;
  v22 = (void **)off_1800EF0B8;
  v26 = &v22;
  v17 = 0LL;
  v2 = 0LL;
  v18 = 0LL;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &v18,
      Event);
    LastError = 0;
    v2 = v18;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1621,
                  (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v4);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)LastError);
    __debugbreak();
  }
  v18 = 0LL;
  v6 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create_take_hevent_ownership(
         &v17,
         v2,
         &v22);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180060996LL);
  }
  v8 = (wil::details::event_watcher_state **)((char *)v1 + 24);
  if ( (wil::details::event_watcher_state **)((char *)v1 + 24) == &v17 )
  {
    v12 = v17;
  }
  else
  {
    v9 = *v8;
    if ( *v8 )
    {
      v10 = GetLastError();
      wil::details::event_watcher_state::`scalar deleting destructor'(v9, v11);
      SetLastError(v10);
    }
    *v8 = v17;
    v12 = 0LL;
  }
  if ( v12 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v12, v7);
  if ( v26 )
  {
    v13 = &v22;
    LOBYTE(v13) = v26 != &v22;
    ((void (__fastcall *)(void ***, void ***))(*v26)[3])(v26, v13);
  }
  *(_QWORD *)&v19 = MPCHeadUpdateListener::On3DCompositorRunningChanged;
  v20 = v1;
  v22 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHeadUpdateListener::*)(bool),MPCHeadUpdateListener *,std::_Ph<1> const &>,void,bool>::`vftable';
  v23 = v19;
  v24 = v1;
  v25 = &v22;
  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(
    InstanceOffInputThread,
    (__int64)&v22,
    (unsigned int *)v1 + 45);
  v15 = MPC3DStateHelper::GetInstanceOffInputThread();
  AcquireSRWLockShared((PSRWLOCK)v15);
  v16 = *((_BYTE *)v15 + 20);
  ReleaseSRWLockShared((PSRWLOCK)v15);
  if ( v16 )
    MPCHeadUpdateListener::On3DCompositorRunningChanged(v1, 1);
}
