/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180017610
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B0C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBa.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180017440 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??4?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180017DA8 (--4-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Destroy@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180017E60 (-Destroy@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180017F00 (--0-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180088E58 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::__lambda_4181134c5161f261fff3e61f273c9fd8_ @ 0x1800F9C90 (_lambda_4181134c5161f261fff3e61f273c9fd8_--__lambda_4181134c5161f261fff3e61f273c9fd8_.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___(
        NotificationDispatcher *this,
        volatile signed __int64 **a2)
{
  volatile signed __int64 *v4; // rdx
  unsigned int (__fastcall *v5)(__int64); // rax
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  volatile signed __int64 *v8; // rcx
  volatile signed __int64 *v9; // rcx
  void *v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  HANDLE ProcessHeap; // rax
  volatile signed __int64 *v15; // rcx
  volatile signed __int64 *v16; // rcx
  volatile signed __int64 *v17; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  HANDLE v21; // rax
  volatile signed __int64 *v22; // rcx
  volatile signed __int64 *v23; // rcx
  volatile signed __int64 *v24; // rcx
  WINBOOL fPending; // [rsp+20h] [rbp-E0h] BYREF
  WINBOOL v26; // [rsp+24h] [rbp-DCh] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+28h] [rbp-D8h] BYREF
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID v29; // [rsp+38h] [rbp-C8h] BYREF
  void *v30[6]; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int64 *v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h]
  volatile signed __int64 *v33; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int64 *v34; // [rsp+88h] [rbp-78h] BYREF
  void **v35; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v36[3]; // [rsp+98h] [rbp-68h] BYREF
  int v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  int *v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h] BYREF
  char v41; // [rsp+CCh] [rbp-34h]
  char v42[32]; // [rsp+D0h] [rbp-30h] BYREF
  int v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  LPVOID lpMem; // [rsp+100h] [rbp+0h]
  char v46; // [rsp+108h] [rbp+8h]
  __int64 v47; // [rsp+110h] [rbp+10h]
  char v48[144]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v49[3]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v50; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v30[2] = (void *)-2LL;
  v30[4] = a2;
  v4 = *a2;
  v31 = v4;
  if ( v4 )
  {
    v5 = *(unsigned int (__fastcall **)(__int64))(*v4 + 8);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
    {
      v6 = *((_QWORD *)v4 + 24);
      v30[1] = (void *)v6;
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != 0x7FFFFFFF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64(v4 + 24, v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_12;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v6 + 16));
    }
    else if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef((__int64)v4);
    }
    else
    {
      v5((__int64)v4);
    }
  }
LABEL_12:
  v32 = *((_DWORD *)a2 + 2);
  v8 = a2[2];
  v33 = v8;
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int64 *))(*v8 + 8))(v8);
  v9 = a2[3];
  v34 = v9;
  if ( v9 )
    (*(void (__fastcall **)(volatile signed __int64 *))(*v9 + 8))(v9);
  v35 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v36[0] = 0LL;
  v36[1] = &v35;
  v36[2] = 0LL;
  v37 = 0;
  v38 = 0LL;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v36);
  v39 = &v40;
  v40 = 0;
  v41 = 0;
  v46 = 0;
  v43 = 0;
  v44 = 0LL;
  lpMem = 0LL;
  v47 = 1LL;
  v49[0] = 0LL;
  memset_0(v48, 0, sizeof(v48));
  v49[1] = 0LL;
  v49[2] = 0LL;
  v50 = 0LL;
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
    &v35,
    a2 + 4);
  v35 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v10 = 0LL;
  v30[3] = 0LL;
  v11 = operator new(0x188uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v11[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v11[4] = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v12 = v11[4];
      if ( v12 )
      {
        v11[4] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v11 + 4);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    *((_DWORD *)v11 + 11) = 1;
    *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
    v11[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v11[6] = 0LL;
    if ( v11 + 6 != &v31 )
    {
      v11[6] = v31;
      v31 = 0LL;
    }
    *((_DWORD *)v11 + 14) = v32;
    v11[8] = 0LL;
    if ( v11 + 8 != &v33 )
    {
      v11[8] = v33;
      v33 = 0LL;
    }
    v11[9] = 0LL;
    if ( v11 + 9 != &v34 )
    {
      v11[9] = v34;
      v34 = 0LL;
    }
    LOBYTE(v13) = v37 != 0;
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      v11 + 10,
      &v35,
      v13);
    v11[10] = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    *v11 = off_18031F238;
    v11[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v10 = v11;
  }
  v30[0] = v10;
  v35 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)&v35);
  wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v50);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v49);
  if ( v46 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v46 = 0;
  }
  lpMem = 0LL;
  if ( v40 == 1 )
  {
    v40 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438758;
      qword_180438758[0] = &LockScreenServiceLogging::`vftable';
      qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v42);
  }
  v40 = 3;
  if ( v37 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v36);
  v15 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(volatile signed __int64 *))(*v15 + 16))(v15);
  }
  v16 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(volatile signed __int64 *))(*v16 + 16))(v16);
  }
  v17 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(volatile signed __int64 *))(*v17 + 16))(v17);
  }
  if ( v10 )
  {
    v19 = NotificationDispatcher::AddTask(this, (struct IAsyncCallback *)v10);
    v20 = v19;
    if ( v19 >= 0 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
      a2[4] = (volatile signed __int64 *)&ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
      wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)(a2 + 4));
      wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a2 + 42);
      wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a2 + 39));
      if ( *((_BYTE *)a2 + 152) )
      {
        v21 = GetProcessHeap();
        HeapFree(v21, 0, (LPVOID)a2[18]);
        *((_BYTE *)a2 + 152) = 0;
      }
      a2[18] = 0LL;
      if ( *((_DWORD *)a2 + 22) == 1 )
      {
        *((_DWORD *)a2 + 22) = 2;
        v29 = 0LL;
        if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v26, &v29) && v26 )
        {
          v29 = qword_180438758;
          qword_180438758[0] = &LockScreenServiceLogging::`vftable';
          qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770);
          InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
        }
        _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v29 + 1), a2 + 12);
      }
      *((_DWORD *)a2 + 22) = 3;
      if ( *((_DWORD *)a2 + 16) )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 5));
      v22 = a2[3];
      if ( v22 )
      {
        a2[3] = 0LL;
        (*(void (__fastcall **)(volatile signed __int64 *))(*v22 + 16))(v22);
      }
      v23 = a2[2];
      if ( v23 )
      {
        a2[2] = 0LL;
        (*(void (__fastcall **)(volatile signed __int64 *))(*v23 + 16))(v23);
      }
      v24 = *a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(volatile signed __int64 *))(*v24 + 16))(v24);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)(unsigned int)v19,
        fPending);
      Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(v30);
      lambda_4181134c5161f261fff3e61f273c9fd8_::__lambda_4181134c5161f261fff3e61f273c9fd8_(a2);
      return v20;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
      (const char *)0x8007000ELL,
      fPending);
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(v30);
    lambda_4181134c5161f261fff3e61f273c9fd8_::__lambda_4181134c5161f261fff3e61f273c9fd8_(a2);
    return 2147942414LL;
  }
}
