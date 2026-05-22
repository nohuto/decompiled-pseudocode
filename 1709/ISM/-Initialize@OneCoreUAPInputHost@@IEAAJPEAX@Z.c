/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004384
 * Callers:
 *     CreateSystemInputHost @ 0x180003FD0 (CreateSystemInputHost.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180005C38 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180006028 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18000EC74 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180016D78 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z @ 0x18003606C (-CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800A8B3C (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x1800CB21C (IsGetMPCInputPostProcessorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, struct IDWMInputProxy *a2)
{
  struct ISystemInputRouter **v3; // r14
  struct ISystemInputRouter **v4; // r12
  struct ISystemInputRouter *v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  DWMInputRouter *v10; // rax
  DWMInputRouter *v11; // rbx
  DWMInputRouter *v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  OneCoreUAPInputHost *v17; // rcx
  OneCoreUAPInputHost *v18; // rcx
  __int64 v19; // rcx
  struct ISystemInputRouter *v20; // rsi
  int v21; // ebx
  InputStateManager *v22; // rax
  InputStateManager *v23; // rbx
  InputStateManager *v24; // rsi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  const char *v28; // r9
  int v29; // r9d
  struct ISystemInputRouter *v30; // rcx
  __int128 v32; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v33[8]; // [rsp+58h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  OneCoreUAPInputHost *v35; // [rsp+C8h] [rbp+67h] BYREF

  v35 = this;
  v3 = (struct ISystemInputRouter **)OneCoreUAPInputHost::s_pInputHost;
  if ( (gdwMitConfig & 7) != 0 )
    MITSetInputCallbacks(
      Win32kInterop::s_DeviceNotificationsCallback,
      &Win32kInterop::s_NonMinUserCallback,
      Win32kInterop::s_MsgRoutingInfoCallback,
      &Win32kInterop::s_QMsgCallback);
  v4 = v3 + 5;
  v5 = v3[5];
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *v4 = 0LL;
  v7 = -2147024809;
  if ( (unsigned __int8)IsGetMPCInputPostProcessorPresent() )
  {
    v8 = MPCInputRouter::Create(
           a2,
           (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL)),
           v3 + 5);
    v7 = v8;
    if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 32, v8);
    goto LABEL_29;
  }
  if ( !a2 )
  {
    v9 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 578, 87);
      goto LABEL_27;
    }
LABEL_26:
    v7 = v9;
    if ( v9 >= 0 )
      goto LABEL_29;
    goto LABEL_27;
  }
  v10 = (DWMInputRouter *)malloc(0x2D0uLL);
  v11 = v10;
  if ( v10 )
    memset(v10, 0, 0x2D0uLL);
  v35 = v11;
  if ( v11 )
    v12 = DWMInputRouter::DWMInputRouter(
            v11,
            a2,
            (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL)));
  else
    v12 = 0LL;
  if ( v12 )
  {
    v13 = DWMInputRouter::Initialize(v12);
    v9 = v13;
    if ( v13 >= 0 )
    {
      *v4 = v12;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 590, v13);
    }
    if ( v9 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v12 + 8) + 24LL))((__int64)v12 + 64, 1LL);
    goto LABEL_26;
  }
  v9 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    goto LABEL_26;
  McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 587, 14);
  v7 = -2147024882;
LABEL_27:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 36, v9);
LABEL_29:
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 94, v7);
    goto LABEL_76;
  }
  v35 = 0LL;
  if ( (**(int (__fastcall ***)(struct ISystemInputRouter *, GUID *, OneCoreUAPInputHost **))*v4)(
         *v4,
         &GUID_fb9e888a_e52b_424f_8fab_f05676d1b357,
         &v35) >= 0 )
  {
    v32 = DWM_COMPOSITOR_ID;
    v33[0] = &std::_Func_impl<long (*)(IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *),std::allocator<int>,long,IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *>::`vftable';
    v33[1] = DWMInputRouter::s_HitTestHandler;
    v33[7] = v33;
    v14 = (*(__int64 (__fastcall **)(OneCoreUAPInputHost *, __int128 *, _QWORD *))(*(_QWORD *)v35 + 24LL))(
            v35,
            &v32,
            v33);
    v16 = v14;
    if ( v14 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 102, v14);
      v17 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      return v16;
    }
  }
  v18 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = (__int64)v3[6];
  if ( v19 )
  {
    v3[6] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = *v4;
  if ( !*v4 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 1, 188, 87);
    LOBYTE(v21) = 87;
LABEL_60:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 106, v21);
LABEL_76:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v22 = (InputStateManager *)malloc(0x2078uLL);
  v23 = v22;
  if ( v22 )
    memset(v22, 0, 0x2078uLL);
  if ( v23 )
    v24 = InputStateManager::InputStateManager(v23, v20);
  else
    v24 = 0LL;
  if ( !v24 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 1, 195, 14);
    LOBYTE(v21) = 14;
    goto LABEL_60;
  }
  v25 = InputStateManager::Initialize(v24);
  v21 = v25;
  if ( v25 >= 0 )
  {
    v3[6] = v24;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 1, 198, v25);
  }
  if ( v21 < 0 )
    goto LABEL_60;
  v26 = InputProviderManager::CreateAndInitialize((InputProviderManager *)(v3 + 7), v3[6]);
  v16 = v26;
  if ( v26 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_76;
    v29 = 108;
LABEL_75:
    McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, v29, v26);
    goto LABEL_76;
  }
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v28);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance && ((gdwMitConfig & 6) != 0 || (gdwMitConfig & 1) != 0) )
  {
    v30 = v3[10];
    if ( v30 )
    {
      v3[10] = 0LL;
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v26 = Win32kInterop::Create(v3[6], *v4, v3 + 10);
    v16 = v26;
    if ( v26 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_76;
      v29 = 112;
      goto LABEL_75;
    }
  }
  return v16;
}
