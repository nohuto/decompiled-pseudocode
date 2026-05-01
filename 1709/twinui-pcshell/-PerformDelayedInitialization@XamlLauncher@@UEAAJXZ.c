/*
 * XREFs of ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180180310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017CCD4 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ @ 0x18017E3FC (-StartActivity@PerformDelayedInitialization@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18017FFB0 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1801807A0 (-InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experien.c)
 *     ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180180B3C (-InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Exper.c)
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1801819EC (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183268 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801838F4 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180186E7C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     _anonymous_namespace_::queryLockdownMode @ 0x1801DEC80 (_anonymous_namespace_--queryLockdownMode.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncher::PerformDelayedInitialization(XamlLauncher *this)
{
  int LockdownMode; // eax
  PerSessionState *v3; // rcx
  HKEY v4; // rdi
  bool v5; // bl
  int v6; // eax
  IUnknown *v7; // rbx
  __int64 *v8; // rax
  HRESULT Service; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rax
  HRESULT started; // eax
  __int64 v13; // rdx
  IUnknown *v14; // rbx
  IUnknown *v15; // rax
  IUnknown *v16; // rdi
  DWORD CurrentThreadId; // eax
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v18; // rcx
  __int64 v19; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  DWORD cbData; // [rsp+60h] [rbp-A8h] BYREF
  DWORD Type; // [rsp+64h] [rbp-A4h] BYREF
  BYTE Data[8]; // [rsp+68h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-98h] BYREF
  IUnknown *v27; // [rsp+78h] [rbp-90h]
  __int64 v28; // [rsp+80h] [rbp-88h]
  __int64 v29; // [rsp+88h] [rbp-80h]
  _QWORD v30[4]; // [rsp+98h] [rbp-70h] BYREF
  int v31; // [rsp+B8h] [rbp-50h]
  int *v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h] BYREF
  char v35; // [rsp+D4h] [rbp-34h]
  int v36; // [rsp+F8h] [rbp-10h] BYREF
  const char *v37; // [rsp+100h] [rbp-8h]
  __int64 v38; // [rsp+108h] [rbp+0h]
  char v39; // [rsp+110h] [rbp+8h]
  __int64 v40; // [rsp+118h] [rbp+10h]
  _BYTE v41[144]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v42; // [rsp+1B0h] [rbp+A8h]
  __int64 v43; // [rsp+1B8h] [rbp+B0h]
  __int64 v44; // [rsp+1C0h] [rbp+B8h]
  __int64 v45; // [rsp+1C8h] [rbp+C0h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v28 = -2LL;
  v30[1] = 0LL;
  v30[2] = v30;
  v30[3] = 0LL;
  v31 = 0;
  v32 = &v36;
  v33 = &v34;
  v34 = 0;
  v35 = 0;
  v39 = 0;
  v36 = 0;
  v37 = "PerformDelayedInitialization";
  v38 = 0LL;
  v40 = 1LL;
  v42 = 0LL;
  v43 = 0LL;
  memset(v41, 0, sizeof(v41));
  v44 = 0LL;
  v45 = 0LL;
  v30[0] = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  StartWindowTelemetry::PerformDelayedInitialization::StartActivity((StartWindowTelemetry::PerformDelayedInitialization *)v30);
  LockdownMode = anonymous_namespace_::queryLockdownMode();
  if ( LockdownMode <= 0 )
    goto LABEL_12;
  if ( LockdownMode <= 2 )
  {
    v5 = 1;
    goto LABEL_13;
  }
  if ( LockdownMode != 3 )
    goto LABEL_12;
  hKey = 0LL;
  if ( RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\StartMenu",
         0,
         0x20019u,
         &hKey) )
  {
    goto LABEL_12;
  }
  v4 = hKey;
  cbData = 4;
  if ( RegQueryValueExW(hKey, L"KioskMode", 0LL, &Type, Data, &cbData) || Type != 4 )
  {
    if ( v4 )
      RegCloseKey(v4);
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  v5 = *(_DWORD *)Data != 0;
  if ( v4 )
    RegCloseKey(v4);
LABEL_13:
  *((_BYTE *)this + 176) = v5;
  v6 = `IsRemoteAppSession'::`2'::s_stSessionType;
  if ( !`IsRemoteAppSession'::`2'::s_stSessionType )
  {
    *(_DWORD *)&Data[4] = 0;
    WinStationQueryCurrentSessionInformation(39LL, &`IsRemoteAppSession'::`2'::s_stSessionType, 4LL, &Data[4]);
    v6 = 0;
    `IsRemoteAppSession'::`2'::s_stSessionType = 0;
  }
  *((_BYTE *)this + 178) = v6 == 5;
  if ( !PerSessionState::HasLoginCompleted(v3) )
    SetWinEventHook(0x20u, 0x20u, 0LL, XamlLauncher::s_LauncherDesktopSwitchEventProc, 0, 0, 0);
  v22 = 0LL;
  v7 = (IUnknown *)*((_QWORD *)this - 5);
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v22);
  Service = IUnknown_QueryService(
              v7,
              &IID_IRealmActivationHistory,
              &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
              (void **)v8);
  v10 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x18B,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_39;
  }
  v21 = 0LL;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v21);
  started = XamlLauncher::QueryService(
              (XamlLauncher *)((char *)this - 8),
              &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
              &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
              (void **)v11);
  v10 = started;
  if ( started >= 0 )
  {
    started = XamlLauncher::InitializeStartExperienceManager((XamlLauncher *)((char *)this - 56), v21);
    v10 = started;
    if ( started >= 0 )
    {
      started = XamlLauncher::InitializeCortanaExperienceManager((XamlLauncher *)((char *)this - 56), v21);
      v10 = started;
      if ( started >= 0 )
      {
        started = XamlLauncher::InitializeJumpViewExperienceManager((XamlLauncher *)((char *)this - 56), v21);
        v10 = started;
        if ( started >= 0 )
        {
          started = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned __int64))(**((_QWORD **)this + 24)
                                                                                                 + 24LL))(
                      *((_QWORD *)this + 24),
                      *((_QWORD *)this + 6),
                      *((_QWORD *)this + 7),
                      v22,
                      ((unsigned __int64)this + 16) & -(__int64)(this != (XamlLauncher *)56));
          v10 = started;
          if ( started >= 0 )
          {
            v14 = 0LL;
            v29 = 0LL;
            v15 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
            v16 = v15;
            if ( v15 )
            {
              v15->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
              HIDWORD(v15[1].lpVtbl) = 1;
              v15->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
              v16->lpVtbl = (struct IUnknownVtbl *)off_18020E440;
              v14 = v16;
            }
            v27 = v14;
            CurrentThreadId = GetCurrentThreadId();
            Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v14, 0LL);
            if ( v14 )
            {
              v27 = 0LL;
              ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
            }
            wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v30);
            v10 = 0;
            goto LABEL_37;
          }
          v13 = 410LL;
        }
        else
        {
          v13 = 408LL;
        }
      }
      else
      {
        v13 = 405LL;
      }
    }
    else
    {
      v13 = 402LL;
    }
  }
  else
  {
    v13 = 400LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)started);
LABEL_37:
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_39:
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v30[0] = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v30);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v30);
  return v10;
}
