/*
 * XREFs of ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18003E5EC
 * Callers:
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18003E728 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x18003E96C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003F160 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x18003F2C8 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??0registry_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18003F2F8 (--0registry_watcher_state@details@wil@@QEAA@$$QEAV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180067694 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800676AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180067728 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18006901C (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800693E4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rsi
  wil::details::registry_watcher_state *v10; // rbx
  HANDLE Event; // rdi
  const char *v12; // r9
  int LastError; // edi
  unsigned int v14; // eax
  void *v15; // rdx
  unsigned int v16; // r8d
  PTP_WAIT ThreadpoolWait; // rax
  const char *v18; // r9
  unsigned int v19; // edx
  int v21; // eax
  BOOL fAsynchronous; // [rsp+20h] [rbp-18h]
  BOOL fAsynchronousa; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         152LL);
  if ( v7 )
    v9 = wil::details::registry_watcher_state::registry_watcher_state(v7, a2, v8, a4);
  else
    v9 = 0LL;
  v10 = (wil::details::registry_watcher_state *)v9;
  if ( v9 )
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        v9 + 120,
        Event);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x15E3,
                    (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                    v12);
    }
    if ( LastError < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xAA,
        (unsigned int)"internal\\sdk\\inc\\wil\\registry.h",
        (const char *)(unsigned int)LastError,
        fAsynchronous);
    }
    else
    {
      v14 = RegNotifyChangeKeyValue(
              *(HKEY *)(v9 + 112),
              *(unsigned __int8 *)(v9 + 136),
              0x10000005u,
              *(HANDLE *)(v9 + 120),
              1);
      if ( v14 )
      {
        v21 = wil::details::in1diag3::Return_Win32(retaddr, v15, v16, (const char *)v14, fAsynchronousa);
      }
      else
      {
        ThreadpoolWait = CreateThreadpoolWait(
                           lambda_f1fd7dcd3a18171c461af661371627e6_::_lambda_invoker_cdecl_,
                           (PVOID)v9,
                           0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,0,std::nullptr_t>>::reset(
          v9 + 128,
          ThreadpoolWait);
        if ( *(_QWORD *)(v9 + 128) )
        {
          v10 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
            a1,
            v9);
          SetThreadpoolWait(*(PTP_WAIT *)(*(_QWORD *)a1 + 128LL), *(HANDLE *)(*(_QWORD *)a1 + 120LL), 0LL);
          LastError = 0;
          goto LABEL_10;
        }
        v21 = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0xC8,
                (unsigned int)"internal\\sdk\\inc\\wil\\registry.h",
                v18);
      }
      LastError = v21;
    }
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (unsigned int)"internal\\sdk\\inc\\wil\\registry.h",
      (const char *)0x8007000ELL,
      fAsynchronous);
  }
LABEL_10:
  if ( v10 )
    wil::details::registry_watcher_state::`scalar deleting destructor'(v10, v19);
  return (unsigned int)LastError;
}
