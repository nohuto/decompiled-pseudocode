/*
 * XREFs of ?SubscribeToServices@XamlTaskbarManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IImmersiveApplicationNotificationService@@$BBI@AA @ 0x1800798CC (--_9IImmersiveApplicationNotificationService@@$BBI@AA.c)
 *     ?SubscribeToServices@XamlExplorerHost@@QE$AAAXPEAUIServiceProvider@@@Z @ 0x1801479BC (-SubscribeToServices@XamlExplorerHost@@QE$AAAXPEAUIServiceProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlTaskbarManager::SubscribeToServices(XamlTaskbarManager *this, struct IServiceProvider *a2)
{
  RTL_SRWLOCK *v4; // r12
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v6; // rax
  int v7; // eax
  struct IServiceProviderVtbl *v8; // rbx
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  _QWORD *v12; // rsi
  int v13; // edi
  int v14; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64); // rdx
  _QWORD *v17; // rcx
  const char *v18; // r9
  __int64 v19; // rcx
  __int64 result; // rax
  _QWORD v21[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  RTL_SRWLOCK *v24; // [rsp+88h] [rbp+10h]
  __int64 v25; // [rsp+90h] [rbp+18h]

  try
  {
    v4 = (RTL_SRWLOCK *)((char *)this + 280);
    AcquireSRWLockExclusive((PSRWLOCK)this + 35);
    v24 = v4;
    lpVtbl = a2->lpVtbl;
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 10);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v7);
    v23 = 0LL;
    v8 = a2->lpVtbl;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v23);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v8->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x41,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v10);
    v11 = v23;
    v12 = (_QWORD *)((char *)this + 160);
    if ( *((_DWORD *)this + 68) )
    {
      v13 = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
        (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
        (const char *)0x8007139FLL);
    }
    else
    {
      v14 =  IImmersiveApplicationNotificationService::`vcall'{24,{flat}}(v23);
      v13 = v14;
      if ( v14 >= 0 )
      {
        v25 = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v15 = v11;
        v21[0] = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v16 =  IVirtualDesktopNotificationService::`vcall'{32,{flat}};
        v21[1] =  IVirtualDesktopNotificationService::`vcall'{32,{flat}};
        v17 = (_QWORD *)*((_QWORD *)this + 33);
        if ( v17 )
        {
          LOBYTE(v16) = v17 != v12;
          (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall *)(__int64)))(*v17 + 24LL))(v17, v16);
          *((_QWORD *)this + 33) = 0LL;
        }
        *v12 = off_1802B2CA8;
        *((_QWORD *)this + 21) = 0LL;
        if ( (_QWORD *)((char *)this + 168) != v21 )
        {
          *((_QWORD *)this + 21) = v11;
          v15 = 0LL;
        }
        *((_QWORD *)this + 22) =  IVirtualDesktopNotificationService::`vcall'{32,{flat}};
        *((_QWORD *)this + 33) = (char *)this + 160;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v13 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x29,
          (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
          (const char *)(unsigned int)v14);
      }
    }
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v13);
    XamlExplorerHost::SubscribeToServices(*((RTL_SRWLOCK **)this + 8), (__int64 *)a2);
    v19 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4A,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
                           v18);
  }
  return result;
}
