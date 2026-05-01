/*
 * XREFs of ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1801B0154
 * Callers:
 *     ?CreateInstance@AccessibilityExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B25A0 (-CreateInstance@AccessibilityExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800216CC (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180077658 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1800CDAD4 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x180102C20 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-.c)
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z @ 0x1801BF300 (-SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=25
__int64 __fastcall AccessibilityExperienceManager::RuntimeClassInitialize(LONG_PTR dwNewLong)
{
  HWND Window; // rax
  char *v3; // rax
  _QWORD *v4; // rcx
  volatile signed __int32 *v5; // rbx
  _QWORD *v6; // rbx
  LONG_PTR v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r8d
  int EndpointHost; // ebx
  __int64 v12; // r14
  __int64 v13; // rdx
  int wnf_subscription; // eax
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // r15
  _QWORD *v18; // r12
  unsigned __int64 v19; // r9
  __int64 *v20; // rbx
  int InputDeviceWatcher; // eax
  __int64 v22; // rcx
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  void (__fastcall ***v27)(_QWORD, __int64); // [rsp+80h] [rbp-88h] BYREF
  void *v28; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v29; // [rsp+90h] [rbp-78h] BYREF
  char *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  __int128 v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B8h] [rbp-50h]
  WNDCLASSEXW v34; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v35; // [rsp+118h] [rbp+10h] BYREF
  __int64 v36; // [rsp+128h] [rbp+20h]
  __int64 v37; // [rsp+130h] [rbp+28h]
  _QWORD v38[13]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD *v39; // [rsp+1A0h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v33 = -2LL;
  memset(&v34.style, 0, 0x4CuLL);
  v34.cbSize = 80;
  v34.lpfnWndProc = (WNDPROC)_AccessibilityEMWndProc;
  v34.lpszClassName = L"AccessibilityEMWndClass";
  RegisterClassExW(&v34);
  Window = CreateWindowExW(
             0,
             L"AccessibilityEMWndClass",
             L"AccessibilityEMWnd",
             0,
             0,
             0,
             0,
             0,
             HWND_MESSAGE,
             0LL,
             0LL,
             0LL);
  *(_QWORD *)(dwNewLong + 424) = Window;
  SetWindowLongPtrW(Window, -21, dwNewLong);
  v3 = (char *)operator new(0x20uLL);
  v30 = v3;
  *((_DWORD *)v3 + 2) = 1;
  *((_DWORD *)v3 + 3) = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj<WnfHelper>::`vftable';
  v4 = v3 + 16;
  if ( v3 != (char *)-16LL )
  {
    *v4 = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
  }
  v32 = 0LL;
  v5 = *(volatile signed __int32 **)(dwNewLong + 312);
  *(_QWORD *)(dwNewLong + 312) = v3;
  *(_QWORD *)(dwNewLong + 304) = v4;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( *(_QWORD *)(dwNewLong + 304) )
  {
    v6 = *(_QWORD **)(dwNewLong + 304);
    if ( !v6[1] )
    {
      *v6 = (dwNewLong + 136) & ((unsigned __int128)-(__int128)(unsigned __int64)dwNewLong >> 64);
      if ( (int)RtlQueryWnfStateData(&v25, WNF_ACC_EC_ENABLED, WnfHelper::s_WnfCallback, 0LL, 0LL) >= 0 )
        RtlSubscribeWnfStateChangeNotification(
          v6 + 1,
          WNF_ACC_EC_ENABLED,
          (unsigned int)v25,
          WnfHelper::s_WnfCallback,
          v6,
          0LL,
          0,
          0);
    }
  }
  v7 = (dwNewLong + 144) & -(__int64)(dwNewLong != 0);
  v30 = (char *)v7;
  if ( v7 )
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)v7 + 8LL))((dwNewLong + 144) & -(__int64)(dwNewLong != 0));
  v26 = 0LL;
  v8 = AgileGitPtr::Initialize(
         (AgileGitPtr *)&v26,
         &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c,
         (struct IUnknown *)((dwNewLong + 144) & -(__int64)(dwNewLong != 0)));
  EndpointHost = v8;
  v12 = v26;
  if ( v8 < 0 )
  {
    v13 = 69LL;
LABEL_40:
    v19 = (unsigned int)v8;
    goto LABEL_41;
  }
  v31 = v26;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  v38[0] = off_180211080;
  v31 = 0LL;
  v38[1] = v12;
  v39 = v38;
  wnf_subscription = wil::details::make_wnf_subscription_state<unsigned long>(v9, (__int64)v38, v10, &v29);
  v15 = 0LL;
  if ( wnf_subscription >= 0 )
    v15 = (void (__fastcall ***)(_QWORD, __int64))v29;
  v27 = v15;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (void (__fastcall ****)(_QWORD, __int64))(dwNewLong + 320),
    &v27);
  if ( v27 )
    (**v27)(v27, 1LL);
  if ( v39 )
  {
    v16 = v38;
    LOBYTE(v16) = v39 != v38;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v39 + 24LL))(v39, v16);
    v39 = 0LL;
  }
  if ( !*(_QWORD *)(dwNewLong + 320) )
  {
    EndpointHost = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)0x80004005LL);
    goto LABEL_48;
  }
  v17 = operator new(0x48uLL);
  v29 = v17;
  *v17 = &EyeControlApp::`vftable';
  v18 = v17 + 1;
  v17[1] = 0LL;
  v17[2] = 0LL;
  v17[3] = 0LL;
  v17[7] = 0LL;
  v17[8] = 0LL;
  v17[5] = 0LL;
  v17[6] = 0LL;
  *(_QWORD *)(dwNewLong + 416) = v17;
  v24 = 0LL;
  v28 = 0LL;
  EndpointHost = CoreUICreate(v17 + 1);
  if ( EndpointHost >= 0 )
  {
    EndpointHost = CoreUICallCreateEndpointHost(*v18, v17 + 2, v17 + 3);
    if ( EndpointHost >= 0 )
    {
      SecurityShim_SharedMessagePortSecurity(0LL, &v28);
      EndpointHost = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD *))(*(_QWORD *)*v18 + 56LL))(*v18, v28, v17 + 4);
      if ( EndpointHost >= 0 )
      {
        EndpointHost = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, const void *, int), _QWORD *, _QWORD, _QWORD *))(*(_QWORD *)*v18 + 80LL))(
                         *v18,
                         EyeControlApp::RawProc,
                         v17,
                         v17[4],
                         v17 + 5);
        if ( EndpointHost >= 0 )
        {
          EndpointHost = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v18 + 24LL))(*v18, &v24);
          if ( EndpointHost >= 0 )
          {
            EndpointHost = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v24 + 40LL))(
                             v24,
                             L"EyeControlUI",
                             v17[5],
                             1LL);
            if ( EndpointHost >= 0 )
              v17[8] = (dwNewLong + 144) & -(__int64)(dwNewLong != 0);
          }
        }
      }
    }
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( EndpointHost < 0 )
  {
    v19 = (unsigned int)EndpointHost;
    v13 = 85LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v19);
    goto LABEL_48;
  }
  v35 = *(_OWORD *)&SID_AccessibilityExperienceManager.Revision;
  v36 = 0LL;
  v37 = 0LL;
  v8 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveShellComponent *)(dwNewLong + 48),
         (__int64)&v35,
         1uLL);
  EndpointHost = v8;
  if ( v8 < 0 )
  {
    v13 = 87LL;
    goto LABEL_40;
  }
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((volatile signed __int32 **)(dwNewLong + 296));
  EndpointHost = v8;
  if ( v8 < 0 )
  {
    v13 = 89LL;
    goto LABEL_40;
  }
  v20 = (__int64 *)(dwNewLong + 232);
  if ( !*(_QWORD *)(dwNewLong + 232) )
  {
    InputDeviceWatcher = CreateInputDeviceWatcher((dwNewLong + 152) & -(__int64)(dwNewLong != 0), 0x4000LL, v20);
    if ( InputDeviceWatcher != -2018375671 && InputDeviceWatcher != -2147467263 )
    {
      v22 = *v20;
      if ( *v20 )
      {
        *v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  EndpointHost = 0;
LABEL_48:
  if ( v12 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v7 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(LONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)EndpointHost;
}
