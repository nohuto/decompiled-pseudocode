/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849___ @ 0x180012700
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180014FA0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18000E15C (--0-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18000FF50 (--4-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPresentationLayer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800166C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPres.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800F6594 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849___(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  void *v5; // rdi
  _DWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r12
  void (*v9)(void); // rax
  bool v10; // al
  char *v11; // r13
  __int64 v12; // rax
  int v13; // ebx
  __int64 (__fastcall *v14)(void *); // rax
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  void (__fastcall *v17)(_DWORD *); // rax
  volatile signed __int32 *v18; // rax
  __int64 v19; // rcx
  void *v21; // rdi
  HANDLE ProcessHeap; // rax
  char *v23; // rdi
  HANDLE v24; // rax
  int v25; // [rsp+20h] [rbp-E0h]
  unsigned int v26; // [rsp+30h] [rbp-D0h]
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  WINBOOL v28; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v30; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  _DWORD *v33; // [rsp+60h] [rbp-A0h]
  void *v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  _DWORD *v36; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h]
  void **v40; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v41[3]; // [rsp+A8h] [rbp-58h] BYREF
  int v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  int *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h] BYREF
  char v46; // [rsp+DCh] [rbp-24h]
  char v47[32]; // [rsp+E0h] [rbp-20h] BYREF
  int v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  LPVOID lpMem; // [rsp+110h] [rbp+10h]
  char v51; // [rsp+118h] [rbp+18h]
  __int64 v52; // [rsp+120h] [rbp+20h]
  char v53[144]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v54[3]; // [rsp+1B8h] [rbp+B8h] BYREF
  void *v55; // [rsp+1D0h] [rbp+D0h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v32 = -2LL;
  v35 = a2;
  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v25);
    CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)(a2 + 16));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a2);
    return 2147947423LL;
  }
  else
  {
    v33 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v36 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v37 = a1;
    v4 = *(_QWORD *)a2;
    v38 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v39 = *(_QWORD *)(a2 + 8);
    v40 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v41[0] = 0LL;
    v41[1] = &v40;
    v41[2] = 0LL;
    v42 = 0;
    v43 = 0LL;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v41);
    v44 = &v45;
    v45 = 0;
    v46 = 0;
    v51 = 0;
    v48 = 0;
    v49 = 0LL;
    lpMem = 0LL;
    v52 = 1LL;
    v54[0] = 0LL;
    memset_0(v53, 0, sizeof(v53));
    v54[1] = 0LL;
    v54[2] = 0LL;
    v55 = 0LL;
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
      (__int64)&v40,
      (_QWORD *)(a2 + 16));
    v40 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v26 = a1[12];
    v5 = 0LL;
    v31 = 0LL;
    v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    v8 = 0LL;
    if ( v6 )
    {
      *(_QWORD *)v6 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
      v6[3] = 1;
      *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v9 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
        if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        else
          v9();
      }
      *v7 = off_18031B950;
      v7[2] = 0LL;
      if ( v7 + 2 != &v36 )
      {
        v7[2] = v36;
        v36 = 0LL;
      }
      v7[3] = v37;
      v7[4] = 0LL;
      if ( v7 + 4 != &v38 )
      {
        v7[4] = v38;
        v38 = 0LL;
      }
      v7[5] = v39;
      v10 = v42 != 0;
      v7[6] = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
      v7[7] = 0LL;
      v7[8] = v7 + 6;
      v7[9] = 0LL;
      *((_DWORD *)v7 + 20) = 0;
      v7[11] = 0LL;
      if ( v10 )
        wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(v7 + 7));
      v11 = (char *)(v7 + 13);
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)(v7 + 13),
        (__int64)&v45);
      v7[44] = v55;
      v55 = 0LL;
      v12 = v7[44];
      if ( v12 )
        v11 = (char *)(v12 + 8);
      v7[12] = v11;
      v7[11] = v11 + 40;
      v44 = &v45;
      if ( v42 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v41);
      v7[6] = &CFramePresentationTelemetry::PresentWindow::`vftable';
      v5 = v7;
      v31 = v7;
      v8 = v7;
    }
    v34 = v5;
    v13 = Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v26);
    if ( v8 )
    {
      v14 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL);
      if ( v14 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v5);
      else
        v14(v5);
    }
    v40 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v40);
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v55, 0xFFFFFFFF) == 1 )
      {
        v21 = v55;
        if ( v55 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v55 + 8);
          operator delete(v21, (const struct std::nothrow_t *)0x100);
        }
      }
      v55 = 0LL;
    }
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)v54);
    if ( v51 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
      v51 = 0;
    }
    lpMem = 0LL;
    if ( v45 == 1 )
    {
      v45 = 2;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
      {
        Context = qword_180438670;
        qword_180438670[0] = &LockScreenServiceLogging::`vftable';
        qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
      }
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v47);
    }
    v45 = 3;
    if ( v42 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v41);
    v15 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v13 >= 0 )
      ++a1[51];
    v17 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(a1);
    else
      v17(a1);
    *(_QWORD *)(a2 + 16) = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 16);
    v18 = *(volatile signed __int32 **)(a2 + 320);
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18, 0xFFFFFFFF) == 1 )
      {
        v23 = *(char **)(a2 + 320);
        if ( v23 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v23 + 8);
          operator delete(v23, (const struct std::nothrow_t *)0x100);
        }
      }
      *(_QWORD *)(a2 + 320) = 0LL;
    }
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a2 + 296));
    if ( *(_BYTE *)(a2 + 136) )
    {
      v24 = GetProcessHeap();
      HeapFree(v24, 0, *(LPVOID *)(a2 + 128));
      *(_BYTE *)(a2 + 136) = 0;
    }
    *(_QWORD *)(a2 + 128) = 0LL;
    if ( *(_DWORD *)(a2 + 72) == 1 )
    {
      *(_DWORD *)(a2 + 72) = 2;
      v30 = 0LL;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v28, &v30) && v28 )
      {
        v30 = qword_180438670;
        qword_180438670[0] = &LockScreenServiceLogging::`vftable';
        qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
      }
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v30 + 1), a2 + 80);
    }
    *(_DWORD *)(a2 + 72) = 3;
    if ( *(_DWORD *)(a2 + 48) )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 24));
    v19 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return (unsigned int)v13;
  }
}
