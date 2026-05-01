/*
 * XREFs of _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x1800879B8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___ptr64_::Invoke @ 0x1800878C0 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-___ptr64_--Invoke.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x180013F50 (-GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?GetSystemVisualFadeTime@CApplicationFrameWrapper@@UEAAJPEAK@Z @ 0x180016DF0 (-GetSystemVisualFadeTime@CApplicationFrameWrapper@@UEAAJPEAK@Z.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ??1?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007115C (--1-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CDelayedTask@ComTaskPool@Internal@Windows@@QEAAJW4TaskApartment@34@W4TaskOptions@34@KKPEAUIComPoolTask@34@@Z @ 0x180087CE8 (-RuntimeClassInitialize@CDelayedTask@ComTaskPool@Internal@Windows@@QEAAJW4TaskApartment@34@W4Tas.c)
 *     ??0CDelayedTask@ComTaskPool@Internal@Windows@@QEAA@XZ @ 0x180087DE8 (--0CDelayedTask@ComTaskPool@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180090150 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_ca324c265ed58b3d9541d2204f682216_::operator()(signed __int64 **a1)
{
  CFrameApplicationPresentation *v2; // rcx
  __int64 (__fastcall *v3)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax
  int Frame; // eax
  __int64 (__fastcall *v5)(CApplicationFrameWrapper *, unsigned int *); // rax
  signed __int64 *v6; // r14
  CSplashScreen *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  struct IApplicationFrameProxy *v10; // rsi
  struct IApplicationFrameProxy *v11; // rax
  struct IApplicationFrameProxy *v12; // rdi
  struct IApplicationFrameProxy *v13; // r15
  DWORD CurrentThreadId; // eax
  DWORD v15; // r12d
  signed int v16; // edi
  Windows::Internal::ComTaskPool::CDelayedTask *v17; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  struct IApplicationFrameProxy *v20; // rcx
  Windows::Internal::ComTaskPool::CDelayedTask *v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h]
  signed __int64 v25; // [rsp+48h] [rbp-30h]
  __int64 v26; // [rsp+50h] [rbp-28h]
  __int64 v27; // [rsp+58h] [rbp-20h]
  struct IApplicationFrameProxy *v28; // [rsp+60h] [rbp-18h]
  __int64 v29; // [rsp+68h] [rbp-10h]
  unsigned int v30; // [rsp+C0h] [rbp+48h]
  unsigned int v31; // [rsp+C8h] [rbp+50h] BYREF
  struct IApplicationFrameProxy *v32; // [rsp+D0h] [rbp+58h] BYREF
  CSplashScreen *v33; // [rsp+D8h] [rbp+60h] BYREF

  v26 = -2LL;
  v31 = 0;
  v32 = 0LL;
  v2 = (CFrameApplicationPresentation *)(*a1)[15];
  v3 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v2 + 128LL);
  if ( v3 == CFrameApplicationPresentation::GetFrame )
    Frame = CFrameApplicationPresentation::GetFrame(v2, &v32);
  else
    Frame = v3(v2, &v32);
  if ( Frame >= 0 )
  {
    v5 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, unsigned int *))(*(_QWORD *)v32 + 168LL);
    if ( v5 == CApplicationFrameWrapper::GetSystemVisualFadeTime )
      CApplicationFrameWrapper::GetSystemVisualFadeTime(v32, &v31);
    else
      v5(v32, &v31);
  }
  v6 = *a1;
  v7 = (CSplashScreen *)v6;
  v33 = (CSplashScreen *)*a1;
  if ( v6 )
  {
    v8 = v6[8];
    v25 = v8;
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64(v6 + 8, v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      goto LABEL_15;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v8 + 16));
LABEL_15:
    v7 = v33;
  }
  v30 = v31;
  v10 = 0LL;
  v27 = 0LL;
  v11 = (struct IApplicationFrameProxy *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  v13 = 0LL;
  if ( v11 )
  {
    *(_QWORD *)v11 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    *((_DWORD *)v11 + 3) = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v12 = off_18031F138;
    *((_QWORD *)v12 + 2) = 0LL;
    if ( (CSplashScreen **)((char *)v12 + 16) != &v33 )
    {
      *((_QWORD *)v12 + 2) = v6;
      v7 = 0LL;
      v33 = 0LL;
    }
    v10 = v12;
    v13 = v12;
  }
  v28 = v10;
  CurrentThreadId = GetCurrentThreadId();
  v15 = CurrentThreadId;
  v16 = v13 == 0LL ? 0x8007000E : 0;
  if ( v13 )
  {
    v13 = 0LL;
    v29 = 0LL;
    if ( v30 )
    {
      v24 = 0LL;
      v17 = (Windows::Internal::ComTaskPool::CDelayedTask *)operator new(
                                                              0x28uLL,
                                                              (const struct std::nothrow_t *)&std::nothrow);
      v22 = v17;
      if ( v17 )
      {
        v18 = Windows::Internal::ComTaskPool::CDelayedTask::CDelayedTask(v17);
        v16 = Windows::Internal::ComTaskPool::CDelayedTask::RuntimeClassInitialize(
                v18,
                0LL,
                0LL,
                v15,
                v30,
                v10,
                0LL,
                v18);
        if ( v16 >= 0 )
        {
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v23);
          v24 = v18;
          Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v23);
          v16 = 0;
        }
        else
        {
          Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)&v23);
          Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v22);
        }
      }
      else
      {
        Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v22);
        v16 = -2147024882;
      }
      v19 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    else
    {
      v16 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0, 0, CurrentThreadId);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(v7);
  if ( v16 < 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *((_BYTE *)*a1 + 129) = (_BYTE)v13;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  v20 = v32;
  if ( v32 )
  {
    v32 = v13;
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return 0LL;
}
