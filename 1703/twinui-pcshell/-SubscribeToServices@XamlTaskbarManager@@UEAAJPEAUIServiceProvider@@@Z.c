/*
 * XREFs of ?SubscribeToServices@XamlTaskbarManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801204E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??_9IImmersiveApplicationNotificationService@@$BBI@AA @ 0x180076C8C (--_9IImmersiveApplicationNotificationService@@$BBI@AA.c)
 *     ?SubscribeToServices@XamlExplorerHost@@QE$AAAXPEAUIServiceProvider@@@Z @ 0x18011D74C (-SubscribeToServices@XamlExplorerHost@@QE$AAAXPEAUIServiceProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlTaskbarManager::SubscribeToServices(XamlTaskbarManager *this, struct IServiceProvider *a2)
{
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v5; // rax
  int v6; // eax
  struct IServiceProviderVtbl *v7; // rbx
  __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  const char *v17; // r9
  __int64 v18; // rcx
  __int64 result; // rax
  _QWORD v20[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h]

  try
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 33, &SRWLock);
    lpVtbl = a2->lpVtbl;
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 8);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v6);
    v22 = 0LL;
    v7 = a2->lpVtbl;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v22);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v7->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           v8);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x41,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v9);
    v10 = v22;
    v11 = (_QWORD *)((char *)this + 144);
    if ( *((_DWORD *)this + 64) )
    {
      v12 = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
        (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
        (const char *)0x8007139FLL);
    }
    else
    {
      v13 =  IImmersiveApplicationNotificationService::`vcall'{24,{flat}}(v22);
      v12 = v13;
      if ( v13 >= 0 )
      {
        v24 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v15 = v10;
        v20[0] = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v20[1] =  IImmersiveApplicationNotificationService::`vcall'{32,{flat}};
        v16 = (_QWORD *)*((_QWORD *)this + 31);
        if ( v16 )
        {
          LOBYTE(v14) = v16 != v11;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v16 + 24LL))(v16, v14);
          *((_QWORD *)this + 31) = 0LL;
        }
        *v11 = off_18023EC18;
        *((_QWORD *)this + 19) = 0LL;
        if ( (_QWORD *)((char *)this + 152) != v20 )
        {
          *((_QWORD *)this + 19) = v10;
          v15 = 0LL;
        }
        *((_QWORD *)this + 20) =  IImmersiveApplicationNotificationService::`vcall'{32,{flat}};
        *((_QWORD *)this + 31) = (char *)this + 144;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v12 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x29,
          (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
          (const char *)(unsigned int)v13);
      }
    }
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v12);
    XamlExplorerHost::SubscribeToServices(*((RTL_SRWLOCK **)this + 6), (__int64 *)a2);
    v18 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4A,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
                           v17);
  }
  return result;
}
