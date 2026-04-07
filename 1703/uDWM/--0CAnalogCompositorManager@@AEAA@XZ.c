/*
 * XREFs of ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180048FE8
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18001341C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     ?SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z @ 0x1800102E4 (-SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180016F04 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x180049258 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x1800493C0 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180049418 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800494B0 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180049780 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800498C8 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180072454 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800745BC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074A58 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180074B48 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

CAnalogCompositorManager *__fastcall CAnalogCompositorManager::CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  void *v1; // rdx
  int v2; // eax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  int wnf_subscription; // eax
  wil::details *v7; // rsi
  wil::details *v8; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v10; // r9
  __int64 v11; // rcx
  DWORD LastError; // edi
  struct wil::details::wnf_subscription_state_base *v14; // rdx
  int v15; // [rsp+28h] [rbp-49h] BYREF
  wil::details *v16; // [rsp+30h] [rbp-41h] BYREF
  int v17; // [rsp+38h] [rbp-39h] BYREF
  int v18; // [rsp+3Ch] [rbp-35h] BYREF
  wil::details *v19; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v20[13]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD *v21; // [rsp+B0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  qword_1800C0EB0 = 0LL;
  Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&qword_1800C0EB8);
  qword_1800C0EF0 = 0LL;
  qword_1800C0F40 = 0LL;
  qword_1800C0F48 = 0LL;
  *(_OWORD *)&xmmword_1800C0F10 = 0LL;
  dword_1800C0F50 = 0;
  xmmword_1800C0EE0 = 0LL;
  xmmword_1800C0F30 = (__int128)GUID_NULL;
  word_1800C0F54 = 0;
  *(__m128i *)&hObject = _mm_load_si128((const __m128i *)&_xmm);
  byte_1800C0F56 = 0;
  dword_1800C0F58 = 0;
  v17 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 7)
                                                             + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
         L"DisableHologramCompositor",
         &v17) < 0
    || !v17 )
  {
    v18 = 0;
    if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 7)
                                                               + 8LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
           L"SimulateVR",
           &v18) >= 0
      && v18 )
    {
      wil::details::SetEvent(qword_1800C0EB8, v1);
    }
    else
    {
      v2 = Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications((Windows::Mirage::HolographicDriverDetectedWatcher *)&qword_1800C0EB8);
      if ( v2 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xB1,
          (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
          (const char *)(unsigned int)v2,
          v15);
        __debugbreak();
      }
    }
    v20[0] = off_1800A5FF8;
    v21 = v20;
    if ( qword_1800C0EC8 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2A,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)0x8000000ELL,
        v15);
      __debugbreak();
    }
    v3 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
           &qword_1800C0EC8,
           qword_1800C0EB8,
           v20);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2E,
        (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
        (const char *)(unsigned int)v3,
        v15);
      __debugbreak();
    }
    wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v20);
    wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v20);
    v20[0] = off_1800A5FC0;
    v21 = v20;
    wnf_subscription = wil::details::make_wnf_subscription_state<unsigned long>(v4, v20, v5, &v16);
    v7 = xmmword_1800C0F10;
    v8 = 0LL;
    if ( wnf_subscription >= 0 )
      v8 = v16;
    if ( xmmword_1800C0F10 )
    {
      LastError = GetLastError();
      wil::details::delete_wnf_subscription_state(v7, v14);
      SetLastError(LastError);
    }
    xmmword_1800C0F10 = v8;
    wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v20);
    wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v20);
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_855ca075e0ac3c7a60546b478bdcde3e_::_lambda_invoker_cdecl_, 0LL, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)&hObject + 1,
      ThreadpoolTimer);
    if ( !*(&hObject + 1) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0xC4,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        v10);
      __debugbreak();
    }
    GetDesktopID(1LL, &v19);
    GetDesktopID(2LL, &v16);
    if ( v19 != v16 )
      CAnalogCompositorManager::SetIdleState(0, 1);
    LODWORD(v16) = 0;
    wil::wnf_query_nothrow<unsigned long>(v11, &v15, &v16);
    if ( (_DWORD)v16 )
      CAnalogCompositorManager::SetIdleState(1, 1);
  }
  return (CAnalogCompositorManager *)&qword_1800C0EB0;
}
