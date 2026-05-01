/*
 * XREFs of _lambda_16dbbe28c6f74937ed7301029aac4a5a_::operator() @ 0x18006EEE0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_16dbbe28c6f74937ed7301029aac4a5a___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke @ 0x18006ED30 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18006ED30.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B130 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z @ 0x1800534D0 (-get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18006F894 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 *     ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x18007C390 (-Release@CActionCenterExperienceManager@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800F7954 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180136A60 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_16dbbe28c6f74937ed7301029aac4a5a_::operator()(__int64 a1, ViewWrapperBase *a2, __int64 a3)
{
  struct IInspectable *v6; // r13
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(ViewWrapperBase *, unsigned int *); // rax
  int ClientWindow; // eax
  struct IInspectable *v10; // rbx
  const struct _TlgProvider_t *v11; // rcx
  Microsoft::WRL::Details::WeakReferenceImpl *v12; // rcx
  __int64 (__fastcall *v13)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int v14; // eax
  int v15; // esi
  IStream **v16; // rbx
  HRESULT InterfaceAndReleaseStream; // eax
  volatile int *v18; // rdx
  unsigned int (__fastcall *v19)(__int64, volatile int *); // rax
  int v20; // eax
  __int64 v21; // rcx
  CActionCenterExperienceManager *v22; // rcx
  void (*v23)(void); // rax
  __int64 v24; // r14
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v26; // rax
  const struct _TlgProvider_t *v28; // rcx
  IStream *v29; // rcx
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  HANDLE ProcessHeap; // rax
  int cData; // [rsp+28h] [rbp-E0h]
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v37[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct IInspectable *v38[3]; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v39[2]; // [rsp+78h] [rbp-90h] BYREF
  LPVOID lpMem; // [rsp+88h] [rbp-80h]
  char v41; // [rsp+90h] [rbp-78h]
  __int128 v42; // [rsp+98h] [rbp-70h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-58h]
  LPVOID *v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  __int128 v48; // [rsp+D8h] [rbp-30h]
  char v49; // [rsp+E8h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-18h] BYREF
  struct IInspectable **v51; // [rsp+110h] [rbp+8h]
  __int64 v52; // [rsp+118h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v47 = -2LL;
  v6 = (struct IInspectable *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 72);
  if ( *(_DWORD *)v7 == 1 )
  {
    v41 = 0;
    LODWORD(v39[0]) = *(_DWORD *)(v7 + 40);
    v39[1] = *(LPVOID *)(v7 + 48);
    if ( *(_BYTE *)(v7 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)v39,
        *(const unsigned __int16 **)(v7 + 56));
    else
      lpMem = *(LPVOID *)(v7 + 56);
    *(_QWORD *)&v42 = 0LL;
    *((_QWORD *)&v42 + 1) = v6;
    v43 = 0LL;
    v44 = 0;
    v45 = v39;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)&v42);
  }
  else
  {
    memset_0(v39, 0, 0x20uLL);
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0;
    v45 = 0LL;
  }
  v46 = *(_QWORD *)(a1 + 8);
  v38[1] = v6;
  v38[2] = (struct IInspectable *)v46;
  v48 = *(_OWORD *)&v38[1];
  v49 = 1;
  v8 = *(__int64 (__fastcall **)(ViewWrapperBase *, unsigned int *))(*(_QWORD *)a2 + 48LL);
  if ( v8 == ViewWrapperBase::get_ClientWindow )
    ClientWindow = ViewWrapperBase::get_ClientWindow(a2, v37);
  else
    ClientWindow = v8(a2, v37);
  if ( ClientWindow >= 0 )
  {
    v10 = (struct IInspectable *)v37[0];
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v11 > 5u && TlgKeywordOn(v11, 0x200000000000uLL) )
    {
      v38[1] = v10;
      v51 = &v38[1];
      v52 = 8LL;
      TlgWrite(v28, &unk_18039F39C, (LPCGUID)(*(_QWORD *)(a1 + 72) + 8LL), 0LL, 3u, &pData);
    }
  }
  v38[0] = 0LL;
  v12 = *(Microsoft::WRL::Details::WeakReferenceImpl **)a1;
  if ( *(_QWORD *)a1 )
  {
    v13 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v12 + 24LL);
    if ( v13 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
      Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v38);
    else
      v13(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v38);
  }
  if ( !v38[0] )
    goto LABEL_29;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 48LL))(a3, &v34);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32C,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v14,
      cData);
  }
  else
  {
    if ( !(_BYTE)v34 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x336,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x80070015LL,
        cData);
LABEL_29:
      v15 = 0;
      goto LABEL_30;
    }
    *(_QWORD *)fPending = 0LL;
    v15 = -2147467259;
    v16 = *(IStream ***)(a1 + 16);
    if ( !v16 )
      goto LABEL_53;
    Context = 0LL;
    if ( *((_DWORD *)v16 + 6) == 2 )
    {
      (*((void (__fastcall **)(IStream **))*v16 + 1))(v16);
      Context = v16;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&Context, v16);
      v16 = (IStream **)Context;
    }
    *(_QWORD *)fPending = 0LL;
    if ( *((_DWORD *)v16 + 6) == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal(
                                    (AgileGitPtr *)(v16 + 4),
                                    &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
                                    (void **)fPending);
    }
    else
    {
      v29 = v16[2];
      v16[2] = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(
                                    v29,
                                    &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
                                    (LPVOID *)fPending);
    }
    v15 = InterfaceAndReleaseStream;
    v19 = (unsigned int (__fastcall *)(__int64, volatile int *))*((_QWORD *)*v16 + 2);
    if ( v19 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v16,
        v18);
    else
      ((void (__fastcall *)(IStream **))v19)(v16);
    if ( v15 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, ViewWrapperBase *, __int64))(**(_QWORD **)fPending + 24LL))(
              *(_QWORD *)fPending,
              a2,
              a3);
      v15 = v20;
      if ( v20 >= 0 )
      {
        v21 = *(_QWORD *)fPending;
        if ( *(_QWORD *)fPending )
        {
          *(_QWORD *)fPending = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        goto LABEL_29;
      }
      v30 = (unsigned int)v20;
      v31 = 818LL;
    }
    else
    {
LABEL_53:
      v30 = (unsigned int)v15;
      v31 = 817LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v30,
      cData);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)fPending);
  }
LABEL_30:
  v22 = (CActionCenterExperienceManager *)v38[0];
  if ( v38[0] )
  {
    v38[0] = 0LL;
    v23 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
    if ( (char *)v23 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release();
    }
    else if ( (char *)v23 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::Release )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::Release((__int64)v22);
    }
    else if ( (char *)v23 == (char *)CActionCenterExperienceManager::Release )
    {
      CActionCenterExperienceManager::Release(v22);
    }
    else
    {
      v23();
    }
  }
  v24 = v46;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v46 + 16), 0LL);
  v26 = WindowsGetStringRawBuffer(*(HSTRING *)(v24 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v6,
    v26,
    StringRawBuffer);
  if ( v44 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v42);
  if ( v41 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return (unsigned int)v15;
}
