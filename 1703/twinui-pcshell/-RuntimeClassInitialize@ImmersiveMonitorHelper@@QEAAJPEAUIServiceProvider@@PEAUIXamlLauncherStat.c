/*
 * XREFs of ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x180151D40
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014B500 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801526F0 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ImmersiveMonitorHelper::RuntimeClassInitialize(
        ImmersiveMonitorHelper *this,
        struct IServiceProvider *a2,
        struct IXamlLauncherState *a3)
{
  __int64 v6; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 **v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // rbx
  __int64 *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct IImmersiveMonitor *v21; // rcx
  __int64 v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF
  __int64 v26; // [rsp+78h] [rbp+38h] BYREF
  struct IImmersiveMonitor *v27; // [rsp+80h] [rbp+40h] BYREF

  if ( *((struct IXamlLauncherState **)this + 7) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IXamlLauncherState *))(*(_QWORD *)a3 + 8LL))(a3);
    v6 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a3;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v25 = 0LL;
  lpVtbl = a2->lpVtbl;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v25);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 25LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_27;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v25 + 24LL))(
         v25,
         ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
         (char *)this + 64);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 26LL;
    goto LABEL_14;
  }
  v12 = (__int64 **)((char *)this + 48);
  v13 = *((_QWORD *)this + 6);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v25)(
         v25,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         (char *)this + 48);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 27LL;
    goto LABEL_14;
  }
  v27 = 0LL;
  v14 = *v12;
  v15 = *v14;
  v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v27);
  v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64 *))(v15 + 72))(
          v14,
          0LL,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          v16);
  v10 = v17;
  if ( v17 >= 0 )
  {
    ImmersiveMonitorHelper::ConnectToMonitor(this, v27);
    v26 = 0LL;
    v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IActiveZBandNotificationForMonitorService,
            &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
            &v26);
    v10 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v26 + 24LL))(
              v26,
              (char *)this + 24,
              (char *)this + 68);
      v10 = v18;
      if ( v18 >= 0 )
      {
        v10 = 0;
LABEL_23:
        v20 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        goto LABEL_25;
      }
      v19 = 34LL;
    }
    else
    {
      v19 = 33LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1D,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
    (const char *)(unsigned int)v17);
LABEL_25:
  v21 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_27:
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v10;
}
