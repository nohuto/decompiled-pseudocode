/*
 * XREFs of ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180013820
 * Callers:
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F370 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005C444 (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005C68C (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CE5C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005D3A0 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___ @ 0x180016210 (Windows--Internal--ComTaskPool--QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___.c)
 *     ?InternalRelease@?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180016678 (-InternalRelease@-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Destroy@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180017E60 (-Destroy@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??_G?$CAsyncCallbackWithLambda@AEAV_lambda_54ac9d587a7c1793639a2e20f13dcbfb_@@@@UEAAPEAXI@Z @ 0x180019580 (--_G-$CAsyncCallbackWithLambda@AEAV_lambda_54ac9d587a7c1793639a2e20f13dcbfb_@@@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180072174 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_G?$CAsyncCallbackWithLambda@AEAV_lambda_ca324c265ed58b3d9541d2204f682216_@@@@UEAAPEAXI@Z @ 0x1800878E0 (--_G-$CAsyncCallbackWithLambda@AEAV_lambda_ca324c265ed58b3d9541d2204f682216_@@@@UEAAPEAXI@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180088E58 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??_E?$CAsyncCallbackWithLambda@V_lambda_c57b015ca5be0aa76b5ef311fd246426_@@@@UEAAPEAXI@Z @ 0x18008FC80 (--_E-$CAsyncCallbackWithLambda@V_lambda_c57b015ca5be0aa76b5ef311fd246426_@@@@UEAAPEAXI@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::QueueAsyncCallback(
        CFrameApplicationPresentation *this,
        struct IAsyncCallback *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  void *v6; // rcx
  volatile int *v7; // rdx
  __int64 (__fastcall *v8)(void *); // rax
  __int64 (__fastcall *v9)(void *); // rax
  __int64 v10; // rcx
  CFrameApplicationPresentation *v12; // [rsp+20h] [rbp-68h] BYREF
  struct IAsyncCallback *v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-58h]
  _QWORD v15[2]; // [rsp+38h] [rbp-50h] BYREF
  void *v16; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  WINBOOL fPending; // [rsp+98h] [rbp+10h] BYREF
  void *v19; // [rsp+A0h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp+20h] BYREF

  v14 = -2LL;
  v13 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v19 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_DWORD *)this + 14) == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      (int)v12);
  }
  else
  {
    v12 = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v15[0] = this;
    (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 8LL))(this);
    v15[1] = this;
    v6 = v19;
    v16 = v19;
    if ( v19 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 8LL))(v19);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___(
           v6,
           v5,
           *((unsigned int *)this + 12),
           v15);
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(v15);
    if ( (v4 & 0x80000000) == 0 )
      ++*((_DWORD *)this + 51);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v19);
  if ( !a2 )
    return v4;
  v13 = 0LL;
  v8 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)a2 + 16LL);
  if ( v8 != Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release )
  {
    v8(a2);
    return v4;
  }
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((struct IAsyncCallback *)((char *)a2 + 44), v7) )
  {
    v9 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)a2 + 32LL);
    if ( v9 == CAsyncCallbackWithLambda<_lambda_fe83376184101c6f34c22c2b5aa5bb70_>::`vector deleting destructor' )
    {
      *((_QWORD *)a2 + 10) = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
      wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((struct IAsyncCallback *)((char *)a2 + 80));
      wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)a2 + 384);
      wil::details::shared_buffer::reset((struct IAsyncCallback *)((char *)a2 + 360));
      wil::details::StoredCallContextInfo::ClearMessage((struct IAsyncCallback *)((char *)a2 + 176));
      if ( *((_DWORD *)a2 + 34) == 1 )
      {
        *((_DWORD *)a2 + 34) = 2;
        Context = 0LL;
        if ( InitOnceBeginInitialize(
               &`ApplicationViewManagementLogging::Instance'::`2'::wrapper,
               0,
               &fPending,
               &Context)
          && fPending )
        {
          Context = qword_180438758;
          qword_180438758[0] = &LockScreenServiceLogging::`vftable';
          qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770);
          InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
        }
        _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), (char *)a2 + 144);
      }
      *((_DWORD *)a2 + 34) = 3;
      if ( *((_DWORD *)a2 + 28) )
        wil::details::ThreadFailureCallbackHolder::StopWatching((struct IAsyncCallback *)((char *)a2 + 88));
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((char *)a2 + 72);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)a2 + 64);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)a2 + 6);
      *((_DWORD *)a2 + 11) = -1073741823;
      v10 = *((_QWORD *)a2 + 4);
      if ( v10 )
      {
        *((_QWORD *)a2 + 4) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      operator delete(a2, (const struct std::nothrow_t *)0x188);
    }
    else
    {
      if ( v9 == CAsyncCallbackWithLambda<_lambda_54ac9d587a7c1793639a2e20f13dcbfb_ &>::`scalar deleting destructor' )
        goto LABEL_27;
      if ( v9 == CAsyncCallbackWithLambda<_lambda_ca324c265ed58b3d9541d2204f682216_ &>::`scalar deleting destructor' )
      {
        CAsyncCallbackWithLambda<_lambda_ca324c265ed58b3d9541d2204f682216_ &>::`scalar deleting destructor'(a2);
        goto LABEL_34;
      }
      if ( v9 == CAsyncCallbackWithLambda<_lambda_54ac9d587a7c1793639a2e20f13dcbfb_ &>::`scalar deleting destructor' )
      {
LABEL_27:
        CAsyncCallbackWithLambda<_lambda_54ac9d587a7c1793639a2e20f13dcbfb_ &>::`scalar deleting destructor'(a2);
        goto LABEL_34;
      }
      if ( v9 == CAsyncCallbackWithLambda<_lambda_c57b015ca5be0aa76b5ef311fd246426_>::`vector deleting destructor' )
        CAsyncCallbackWithLambda<_lambda_c57b015ca5be0aa76b5ef311fd246426_>::`vector deleting destructor'(a2);
      else
        ((void (__fastcall *)(struct IAsyncCallback *, __int64))v9)(a2, 1LL);
    }
LABEL_34:
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL) == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        return v4;
      }
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
