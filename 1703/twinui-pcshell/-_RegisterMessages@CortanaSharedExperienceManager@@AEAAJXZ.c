/*
 * XREFs of ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BD4A4
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800BA138 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveRawInputMouseNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180064DD0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveRawInputMouseNotification@@VNil@Details@WRL@.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UITaskWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180064E70 (-AddRef@-$RuntimeClass@U-$InterfaceList@UITaskWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@M.c)
 *     ?_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800BBE68 (-_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@UIInitializeTrustedComponentForegroundControl@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BE6A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UICortanaExperienceManager@Experience@Shell@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CortanaSharedExperienceManager::_RegisterMessages(CortanaSharedExperienceManager *this)
{
  __int64 *v2; // rax
  int Service; // eax
  int LastError; // r14d
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int128 v13; // xmm6
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  UINT v19; // eax
  const char *v20; // r9
  __int64 v21; // rdx
  UINT v22; // eax
  __int64 v23; // rcx
  __int64 *v25; // [rsp+38h] [rbp-49h] BYREF
  __int64 v26; // [rsp+40h] [rbp-41h]
  _QWORD *v27; // [rsp+48h] [rbp-39h]
  __int64 v28; // [rsp+50h] [rbp-31h]
  __int64 v29; // [rsp+58h] [rbp-29h]
  __int128 v30; // [rsp+60h] [rbp-21h]
  _QWORD v31[2]; // [rsp+70h] [rbp-11h] BYREF
  __int128 v32; // [rsp+80h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  volatile signed __int64 *v34; // [rsp+F0h] [rbp+6Fh]
  __int64 v35; // [rsp+F8h] [rbp+77h] BYREF
  __int64 v36; // [rsp+100h] [rbp+7Fh] BYREF

  v29 = -2LL;
  v36 = 0LL;
  v2 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v36);
  Service = CortanaSharedExperienceManager::_ImmersiveShellQueryService(
              this,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              (void **)v2);
  LastError = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x48B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_61;
  }
  *(_QWORD *)&v30 = CortanaSharedExperienceManager::_OnMessageHandler;
  DWORD2(v30) = 0;
  v34 = 0LL;
  v26 = 0LL;
  v5 = operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v5;
  v27 = v5;
  if ( !v5 )
  {
    LastError = -2147024882;
LABEL_44:
    v16 = (unsigned int)LastError;
    v17 = 1166LL;
LABEL_57:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)v16);
    goto LABEL_59;
  }
  v5[4] = 1LL;
  *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveWindowMessageNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveWindowMessageNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IImmersiveWindowMessageNotification'};
  v5[2] = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v6 = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable';
  *(_QWORD *)(v6 + 8) = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable'{for `IImmersiveWindowMessageNotification'};
  *(_QWORD *)(v6 + 16) = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
  *(_QWORD *)(v6 + 144) = 0LL;
  v26 = v6;
  v27 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  LastError = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::ICortanaExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                this,
                &_uuidof__AUIWeakReferenceSource_Details_Platform__,
                &v25);
  if ( LastError < 0 )
  {
    if ( !v25 )
      goto LABEL_20;
    v9 = *v25;
    goto LABEL_10;
  }
  v35 = 0LL;
  v10 = v25;
  LastError = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v25 + 24))(v25, &v35);
  v11 = v35;
  if ( LastError < 0 )
  {
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v9 = *v10;
LABEL_10:
    (*(void (**)(void))(v9 + 16))();
    goto LABEL_20;
  }
  v7 = v35;
  if ( v35 )
  {
    (*(void (**)(void))(*(_QWORD *)v35 + 8LL))();
    v11 = v35;
  }
  v28 = v7;
  if ( v11 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  LastError = 0;
LABEL_20:
  if ( LastError >= 0 )
  {
    v12 = v7;
    v31[0] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v31[1] = this;
    v13 = v30;
    v32 = v30;
    v14 = (_QWORD *)(v6 + 40);
    v15 = *(_QWORD **)(v6 + 144);
    if ( v15 )
    {
      LOBYTE(v8) = v15 != v14;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v15 + 24LL))(v15, v8);
      *(_QWORD *)(v6 + 144) = 0LL;
    }
    *v14 = off_1801B03A0;
    *(_QWORD *)(v6 + 48) = 0LL;
    if ( (_QWORD *)(v6 + 48) != v31 )
    {
      *(_QWORD *)(v6 + 48) = v7;
      v12 = 0LL;
    }
    *(_QWORD *)(v6 + 56) = this;
    *(_OWORD *)(v6 + 64) = v13;
    *(_QWORD *)(v6 + 144) = v6 + 40;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x56,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\handlers.h",
      (const char *)(unsigned int)LastError);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( LastError >= 0 )
  {
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ITaskWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v6);
    v34 = (volatile signed __int64 *)v6;
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveRawInputMouseNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v6);
    LastError = 0;
  }
  else
  {
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveRawInputMouseNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v6);
    v6 = 0LL;
  }
  if ( LastError < 0 )
    goto LABEL_44;
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v36 + 24LL))(
          v36,
          0LL,
          (v6 + 8) & -(__int64)(v6 != 0),
          (char *)this + 408);
  LastError = v18;
  if ( v18 < 0 )
  {
    v17 = 1172LL;
LABEL_56:
    v16 = (unsigned int)v18;
    goto LABEL_57;
  }
  v19 = RegisterWindowMessageW(L"CortanaExperienceManager.ResetActivationTimeoutPolicyMessage");
  *((_DWORD *)this + 106) = v19;
  if ( !v19 )
  {
    v21 = 1176LL;
LABEL_53:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v21,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
                  v20);
    goto LABEL_59;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, char *))(*(_QWORD *)v36 + 24LL))(
          v36,
          v19,
          (unsigned __int64)(v34 + 1) & -(__int64)(v34 != 0LL),
          (char *)this + 428);
  LastError = v18;
  if ( v18 < 0 )
  {
    v17 = 1177LL;
    goto LABEL_56;
  }
  v22 = RegisterWindowMessageW(L"CortanaExperienceManager.DeferredSuspensionMessage");
  *((_DWORD *)this + 110) = v22;
  if ( !v22 )
  {
    v21 = 1181LL;
    goto LABEL_53;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, char *))(*(_QWORD *)v36 + 24LL))(
          v36,
          v22,
          (unsigned __int64)(v34 + 1) & -(__int64)(v34 != 0LL),
          (char *)this + 444);
  LastError = v18;
  if ( v18 < 0 )
  {
    v17 = 1182LL;
    goto LABEL_56;
  }
  LastError = 0;
LABEL_59:
  if ( v34 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveRawInputMouseNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v34);
LABEL_61:
  v23 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)LastError;
}
