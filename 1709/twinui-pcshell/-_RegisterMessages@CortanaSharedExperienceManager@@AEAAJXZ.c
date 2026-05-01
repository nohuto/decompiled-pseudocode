/*
 * XREFs of ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A3B38
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800A0490 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180066A50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 *     ?_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800A23E0 (-_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5840 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaEx.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CortanaSharedExperienceManager::_RegisterMessages(CortanaSharedExperienceManager *this)
{
  __int64 *v2; // rax
  int Service; // eax
  int Interface; // r14d
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int128 v13; // xmm6
  _QWORD *v14; // r14
  _QWORD *v15; // rcx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  UINT v21; // eax
  const char *v22; // r9
  __int64 v23; // rdx
  UINT v24; // eax
  __int64 v25; // rcx
  __int64 *v27; // [rsp+38h] [rbp-49h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-41h]
  __int128 v29; // [rsp+48h] [rbp-39h]
  _QWORD *v30; // [rsp+58h] [rbp-29h]
  __int64 v31; // [rsp+60h] [rbp-21h]
  _QWORD v32[2]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v33; // [rsp+78h] [rbp-9h]
  __int64 v34; // [rsp+88h] [rbp+7h]
  __int128 v35; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  volatile signed __int64 *v37; // [rsp+F0h] [rbp+6Fh]
  __int64 v38; // [rsp+F8h] [rbp+77h] BYREF
  __int64 v39; // [rsp+100h] [rbp+7Fh] BYREF

  v34 = -2LL;
  v39 = 0LL;
  v2 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v39);
  Service = CortanaSharedExperienceManager::_ImmersiveShellQueryService(
              this,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              (void **)v2);
  Interface = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x49A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_65;
  }
  *(_QWORD *)&v29 = CortanaSharedExperienceManager::_OnMessageHandler;
  DWORD2(v29) = 0;
  v37 = 0LL;
  v5 = operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v30 = v5;
  if ( !v5 )
  {
    Interface = -2147024882;
LABEL_48:
    v18 = (unsigned int)Interface;
    v19 = 1181LL;
LABEL_61:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)v18);
    goto LABEL_63;
  }
  v5[4] = 1LL;
  *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveWindowMessageNotification>::`vftable';
  v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveWindowMessageNotification>::`vftable'{for `IImmersiveWindowMessageNotification'};
  v5[2] = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v6 = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable';
  v6[1] = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable'{for `IImmersiveWindowMessageNotification'};
  v6[2] = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v6[18] = 0LL;
  v28 = v6;
  v30 = 0LL;
  v7 = 0LL;
  v31 = 0LL;
  v27 = 0LL;
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::QueryInterface(
                this,
                &_uuidof__AUIWeakReferenceSource_Details_Platform__,
                (void **)&v27);
  if ( Interface < 0 )
  {
    if ( !v27 )
      goto LABEL_20;
    v9 = *v27;
    goto LABEL_10;
  }
  v38 = 0LL;
  v10 = v27;
  Interface = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v27 + 24))(v27, &v38);
  v11 = v38;
  if ( Interface < 0 )
  {
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v9 = *v10;
LABEL_10:
    (*(void (**)(void))(v9 + 16))();
    goto LABEL_20;
  }
  v7 = v38;
  *(_QWORD *)&v35 = v38;
  if ( v38 )
  {
    (*(void (**)(void))(*(_QWORD *)v38 + 8LL))();
    v11 = v38;
  }
  v31 = v7;
  if ( v11 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  Interface = 0;
LABEL_20:
  if ( Interface >= 0 )
  {
    v12 = v7;
    v32[0] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v32[1] = this;
    v13 = v29;
    v33 = v29;
    v14 = v6 + 5;
    v15 = (_QWORD *)v6[18];
    if ( v15 )
    {
      LOBYTE(v8) = v15 != v14;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v15 + 24LL))(v15, v8);
      v6[18] = 0LL;
    }
    *v14 = off_180201D70;
    v6[6] = 0LL;
    if ( v6 + 6 != v32 )
    {
      v6[6] = v7;
      v12 = 0LL;
      v32[0] = 0LL;
    }
    v6[7] = this;
    *((_OWORD *)v6 + 4) = v13;
    v6[18] = v6 + 5;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    Interface = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x56,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\handlers.h",
      (const char *)(unsigned int)Interface);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( Interface >= 0 )
  {
    if ( v6 )
    {
      v16 = v6[4];
      *(_QWORD *)&v29 = v16;
      while ( v16 >= 0 )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange64(v6 + 4, v16 + 1, v16);
        if ( v17 == v16 )
          goto LABEL_43;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
LABEL_43:
      v6 = v28;
    }
    v37 = v6;
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v6);
    Interface = 0;
  }
  else
  {
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v6);
    v6 = 0LL;
  }
  if ( Interface < 0 )
    goto LABEL_48;
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, char *))(*(_QWORD *)v39 + 24LL))(
          v39,
          0LL,
          (unsigned __int64)(v6 + 1) & -(__int64)(v6 != 0LL),
          (char *)this + 408);
  Interface = v20;
  if ( v20 < 0 )
  {
    v19 = 1187LL;
LABEL_60:
    v18 = (unsigned int)v20;
    goto LABEL_61;
  }
  v21 = RegisterWindowMessageW(L"CortanaExperienceManager.ResetActivationTimeoutPolicyMessage");
  *((_DWORD *)this + 106) = v21;
  if ( !v21 )
  {
    v23 = 1191LL;
LABEL_57:
    Interface = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v23,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
                  v22);
    goto LABEL_63;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, char *))(*(_QWORD *)v39 + 24LL))(
          v39,
          v21,
          (unsigned __int64)(v37 + 1) & -(__int64)(v37 != 0LL),
          (char *)this + 428);
  Interface = v20;
  if ( v20 < 0 )
  {
    v19 = 1192LL;
    goto LABEL_60;
  }
  v24 = RegisterWindowMessageW(L"CortanaExperienceManager.DeferredSuspensionMessage");
  *((_DWORD *)this + 110) = v24;
  if ( !v24 )
  {
    v23 = 1196LL;
    goto LABEL_57;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, char *))(*(_QWORD *)v39 + 24LL))(
          v39,
          v24,
          (unsigned __int64)(v37 + 1) & -(__int64)(v37 != 0LL),
          (char *)this + 444);
  Interface = v20;
  if ( v20 < 0 )
  {
    v19 = 1197LL;
    goto LABEL_60;
  }
  Interface = 0;
LABEL_63:
  if ( v37 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v37);
LABEL_65:
  v25 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)Interface;
}
