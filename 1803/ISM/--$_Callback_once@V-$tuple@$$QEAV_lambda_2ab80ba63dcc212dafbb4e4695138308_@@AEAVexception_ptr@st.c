/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180042340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x18003FCC8 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180044F90 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x180045338 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_2ab80ba63dcc212dafbb4e4695138308_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  LSTATUS v2; // eax
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  int v5; // eax
  wil::details *v6; // rdi
  DWORD LastError; // ebx
  struct wil::details::registry_watcher_state *v8; // rdx
  _QWORD *v9; // rdx
  void *v11; // rbx
  HKEY hKey; // [rsp+50h] [rbp-B8h] BYREF
  wil::details *v13; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v15[13]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v16; // [rsp+E8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v14[2] = -2LL;
  v14[0] = a2;
  try
  {
    MPCSixDofProcessor::UpdateRegistryTuneables();
    v15[0] = off_1800EDC58;
    v16 = v15;
    v13 = 0LL;
    hKey = 0LL;
    v2 = RegCreateKeyExW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\ISM\\6dof",
           0,
           0LL,
           0,
           0x10u,
           0LL,
           &hKey,
           0LL);
    v4 = (unsigned __int16)v2 | 0x80070000;
    if ( v2 <= 0 )
      v4 = (unsigned int)v2;
    if ( (v4 & 0x80000000) == 0LL )
    {
      v5 = wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
             &v13,
             &hKey,
             v3,
             v15);
      if ( v5 >= 0 )
      {
LABEL_8:
        if ( hKey )
          RegCloseKey(hKey);
        v6 = MPCSixDofProcessor::s_registryWatcher;
        if ( MPCSixDofProcessor::s_registryWatcher )
        {
          LastError = GetLastError();
          wil::details::delete_registry_watcher_state(v6, v8);
          SetLastError(LastError);
        }
        MPCSixDofProcessor::s_registryWatcher = v13;
        if ( v16 )
        {
          v9 = v15;
          LOBYTE(v9) = v16 != v15;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v16 + 24LL))(v16, v9);
        }
        return 1LL;
      }
      v4 = (unsigned int)v5;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)v4);
    goto LABEL_8;
  }
  catch ( ... )
  {
    v11 = *(void **)v14[0];
    __ExceptionPtrCreate(v14);
    __ExceptionPtrCurrentException(v14);
    __ExceptionPtrAssign(v11, v14);
    __ExceptionPtrDestroy(v14);
    return 0LL;
  }
  return 1LL;
}
