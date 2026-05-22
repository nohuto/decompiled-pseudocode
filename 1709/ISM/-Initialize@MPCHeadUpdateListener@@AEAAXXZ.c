/*
 * XREFs of ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180069334
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18006A4B0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004BF0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180007980 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007D08 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009B58 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180068EFC (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x180069990 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18006A1F0 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHeadUpdateListener::Initialize(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rsi
  void *v2; // rbx
  HANDLE Event; // rdi
  const char *v4; // r9
  int LastError; // eax
  int v6; // eax
  __int64 v7; // rdx
  wil::details::event_watcher_state **v8; // rbx
  wil::details::event_watcher_state *v9; // rdi
  DWORD v10; // r14d
  __int64 v11; // rdx
  wil::details::event_watcher_state *v12; // rcx
  _QWORD *v13; // rdx
  RTL_SRWLOCK *InstanceOffInputThread; // rax
  struct MPC3DStateHelper *v15; // rdi
  char v16; // bl
  char v17; // [rsp+28h] [rbp-49h]
  wil::details::event_watcher_state *v18; // [rsp+30h] [rbp-41h] BYREF
  void *v19[2]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-29h] BYREF
  char v21; // [rsp+58h] [rbp-19h]
  MPCHeadUpdateListener *v22; // [rsp+60h] [rbp-11h]
  _QWORD *v23; // [rsp+80h] [rbp+Fh]
  _QWORD *v24; // [rsp+B0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v19[1] = (void *)-2LL;
  v1 = MPCHeadUpdateListener::s_instance;
  v20[0] = off_1800D6AA8;
  v24 = v20;
  v18 = 0LL;
  v2 = 0LL;
  v19[0] = 0LL;
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      v19,
      Event);
    LastError = 0;
    v2 = v19[0];
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x15E3,
                  (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v4);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)LastError);
    __debugbreak();
  }
  v19[0] = 0LL;
  v6 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create_take_hevent_ownership(
         &v18,
         v2,
         v20);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v6);
  v8 = (wil::details::event_watcher_state **)((char *)v1 + 24);
  if ( (wil::details::event_watcher_state **)((char *)v1 + 24) == &v18 )
  {
    v12 = v18;
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
    *v8 = v18;
    v12 = 0LL;
  }
  if ( v12 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v12, v7);
  if ( v24 )
  {
    v13 = v20;
    LOBYTE(v13) = v24 != v20;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v24 + 24LL))(v24, v13);
  }
  v20[0] = &std::_Func_impl<std::_Binder<std::_Unforced,void (MPCHeadUpdateListener::*)(bool),MPCHeadUpdateListener *,std::_Ph<1> const &>,std::allocator<int>,void,bool>::`vftable';
  v20[1] = MPCHeadUpdateListener::On3DCompositorRunningChanged;
  v21 = v17;
  v22 = v1;
  v23 = v20;
  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(InstanceOffInputThread, (__int64)v20, (_DWORD *)v1 + 45);
  v15 = MPC3DStateHelper::GetInstanceOffInputThread();
  AcquireSRWLockShared((PSRWLOCK)v15);
  v16 = *((_BYTE *)v15 + 20);
  ReleaseSRWLockShared((PSRWLOCK)v15);
  if ( v16 )
    MPCHeadUpdateListener::On3DCompositorRunningChanged(v1, 1);
}
