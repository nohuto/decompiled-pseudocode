/*
 * XREFs of ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18005E0C8
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x180013F50 (-GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?IsVisible@CFrameApplicationPresentation@@UEBA_NXZ @ 0x1800148A0 (-IsVisible@CFrameApplicationPresentation@@UEBA_NXZ.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800157F0 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x180015F98 (--0CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180016678 (-InternalRelease@-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPresentationLayer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800166C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPres.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPresentationLayer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016740 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x180016F00 (-GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B860 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18002B860.c)
 *     ??0CSplashScreen@@QEAA@XZ @ 0x18005BA60 (--0CSplashScreen@@QEAA@XZ.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C300 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x18006F1FC (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180090150 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F9504 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::Initialize(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IIAMServiceProvider *a2)
{
  char v3; // bl
  __int64 v4; // rdx
  struct IImmersiveApplicationInternal *v5; // r14
  CFrameApplicationPresentation **v6; // r15
  __int64 v7; // rcx
  unsigned int v8; // r12d
  const unsigned __int16 *v9; // r13
  CFrameApplicationPresentation *v10; // rax
  volatile int *v11; // rdx
  int v12; // ebx
  CFrameApplicationPresentation *v13; // rdi
  unsigned int (__fastcall *v14)(__int64, volatile int *); // rax
  __int64 (__fastcall *v15)(__int64, __int64, void **); // rax
  void **v16; // r8
  int Interface; // eax
  void (*v18)(void); // rax
  CFrameApplicationPresentation *v19; // rcx
  __int64 (__fastcall *v20)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax
  int Frame; // eax
  __int64 (__fastcall *v22)(CApplicationFrameWrapper *, HWND *); // rax
  int v23; // eax
  __int64 (__fastcall ***v24)(__int64, GUID *, struct IIAMServiceProvider **); // rcx
  __int64 (__fastcall *v25)(__int64, GUID *, struct IIAMServiceProvider **); // rax
  struct IIAMServiceProvider *v26; // r12
  CFrameApplicationPresentation *v27; // rbx
  char *v28; // r14
  CSplashScreen *v29; // rcx
  CSplashScreen *v30; // rax
  CSplashScreen *v31; // rdi
  char v32; // r14
  CFrameApplicationPresentation *v33; // rcx
  __int64 v34; // rcx
  volatile int *v35; // rdx
  signed __int64 v36; // rax
  int v37; // r10d
  signed __int64 v38; // rtt
  signed __int64 v39; // rax
  unsigned int v40; // ecx
  signed __int64 v41; // rtt
  struct IIAMServiceProvider *v42; // rcx
  struct IApplicationFrameProxy *v43; // rcx
  __int64 (*v44)(void); // rax
  char IsVisible; // al
  CSplashScreen *v47; // [rsp+30h] [rbp-38h] BYREF
  HWND v48; // [rsp+38h] [rbp-30h] BYREF
  CFrameApplicationPresentation *v49; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v50[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v51; // [rsp+58h] [rbp-10h]
  CFrameApplicationPresentation *v52; // [rsp+B0h] [rbp+48h]
  struct IIAMServiceProvider *v53; // [rsp+B8h] [rbp+50h] BYREF
  struct IApplicationFrameProxy *v54; // [rsp+C0h] [rbp+58h] BYREF
  CFrameApplicationPresentation *v55; // [rsp+C8h] [rbp+60h] BYREF

  v53 = a2;
  v50[1] = -2LL;
  *((_BYTE *)this + 186) = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 18) + 88LL) + 328LL))(
          *((_QWORD *)this + 18) + 88LL,
          0LL)
    || (v3 = 1,
        (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 88LL) + 328LL))(
          *((_QWORD *)this + 18) + 88LL,
          4LL)) )
  {
    v3 = 0;
  }
  v4 = *((_QWORD *)this + 18);
  v5 = (struct IImmersiveApplicationInternal *)((v4 + 112) & -(__int64)(v4 != 0));
  v6 = (CFrameApplicationPresentation **)((char *)this + 136);
  v7 = *((_QWORD *)this + 17);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v4 = *((_QWORD *)this + 18);
  }
  v8 = *(_DWORD *)(v4 + 552);
  v9 = *(const unsigned __int16 **)(v4 + 544);
  v52 = 0LL;
  v10 = (CFrameApplicationPresentation *)operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  v55 = v10;
  if ( v10 )
  {
    v13 = CFrameApplicationPresentation::CFrameApplicationPresentation(v10);
    v49 = v13;
    v55 = 0LL;
    v12 = CFrameApplicationPresentation::RuntimeClassInitialize(v13, v9, v8, v3, v53, v5);
    if ( v12 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v13 + 8LL))(v13);
      v52 = v13;
      if ( v13 )
      {
        v14 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v13 + 16LL);
        if ( v14 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(
            (__int64)v13,
            v11);
        else
          ((void (__fastcall *)(CFrameApplicationPresentation *))v14)(v13);
      }
      v12 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease((__int64 *)&v49);
      Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v55);
    }
    if ( v12 >= 0 )
    {
      v15 = **(__int64 (__fastcall ***)(__int64, __int64, void **))v52;
      v16 = (void **)((char *)this + 136);
      if ( v15 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::QueryInterface(
                      (__int64)v52,
                      (__int64)&GUID_ab535146_7d9a_4d26_a0a7_404fd8355fb0,
                      v16);
      else
        Interface = v15((__int64)v52, (__int64)&GUID_ab535146_7d9a_4d26_a0a7_404fd8355fb0, v16);
      v12 = Interface;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v55);
    v12 = -2147024882;
  }
  if ( v52 )
  {
    v18 = *(void (**)(void))(*(_QWORD *)v52 + 16LL);
    if ( (char *)v18 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(
        (__int64)v52,
        v11);
    else
      v18();
  }
  if ( v12 >= 0 )
  {
    v54 = 0LL;
    v19 = *v6;
    v20 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)*v6 + 128LL);
    if ( v20 == CFrameApplicationPresentation::GetFrame )
      Frame = CFrameApplicationPresentation::GetFrame(v19, &v54);
    else
      Frame = v20(v19, &v54);
    v12 = Frame;
    if ( Frame >= 0 )
    {
      v22 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, HWND *))(*(_QWORD *)v54 + 24LL);
      v23 = v22 == CApplicationFrameWrapper::GetFrameWindow
          ? CApplicationFrameWrapper::GetFrameWindow(v54, &v48)
          : v22(v54, &v48);
      v12 = v23;
      if ( v23 >= 0 )
      {
        v53 = 0LL;
        v24 = (__int64 (__fastcall ***)(__int64, GUID *, struct IIAMServiceProvider **))*((_QWORD *)this + 18);
        v25 = **v24;
        if ( (char *)v25 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::QueryInterface )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::QueryInterface(
            (__int64)v24,
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            &v53);
        else
          v25((__int64)v24, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v53);
        v26 = v53;
        v27 = *v6;
        v28 = (char *)(*((_QWORD *)this + 18) + 712LL);
        v29 = (CSplashScreen *)*((_QWORD *)this + 29);
        if ( v29 )
        {
          *((_QWORD *)this + 29) = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(v29);
        }
        *((_QWORD *)this + 29) = 0LL;
        v30 = (CSplashScreen *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
        v47 = v30;
        if ( v30 )
        {
          v31 = CSplashScreen::CSplashScreen(v30);
          v50[0] = v31;
          v47 = 0LL;
          v32 = *v28;
          *((_QWORD *)v31 + 18) = v48;
          v33 = (CFrameApplicationPresentation *)*((_QWORD *)v31 + 15);
          if ( v33 != v27 )
          {
            if ( v27 )
            {
              (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v27 + 8LL))(v27);
              v33 = (CFrameApplicationPresentation *)*((_QWORD *)v31 + 15);
            }
            *((_QWORD *)v31 + 15) = v27;
            if ( v33 )
              (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v33 + 16LL))(v33);
          }
          *((_BYTE *)v31 + 168) = v32;
          v51 = *((_QWORD *)v31 + 20);
          v34 = v51;
          *((_QWORD *)v31 + 20) = 0LL;
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          v12 = Microsoft::WRL::AsWeak<IInspectable>(v26, (char *)v31 + 160);
          if ( v12 >= 0 )
          {
            v36 = *((_QWORD *)v31 + 8);
            v37 = 0x7FFFFFFF;
            while ( v36 >= 0 )
            {
              if ( (_DWORD)v36 != 0x7FFFFFFF )
              {
                v38 = v36;
                v36 = _InterlockedCompareExchange64((volatile signed __int64 *)v31 + 8, v36 + 1, v36);
                if ( v38 != v36 )
                  continue;
              }
              goto LABEL_57;
            }
            Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v36 + 16));
LABEL_57:
            *((_QWORD *)this + 29) = v31;
            v39 = *((_QWORD *)v31 + 8);
            while ( v39 >= 0 )
            {
              if ( (_DWORD)v39 == v37 )
                goto LABEL_66;
              v40 = v39 - 1;
              v41 = v39;
              v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v31 + 8, v39 - 1, v39);
              if ( v41 == v39 )
                goto LABEL_63;
            }
            v40 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v39 + 16), v35);
LABEL_63:
            if ( !v40 )
            {
              (*(void (__fastcall **)(CSplashScreen *, __int64))(*(_QWORD *)v31 + 72LL))(v31, 1LL);
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
            }
LABEL_66:
            v12 = 0;
          }
          else
          {
            Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(v50);
            Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v47);
          }
        }
        else
        {
          Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v47);
          v12 = -2147024882;
        }
        v42 = v53;
        if ( v53 )
        {
          v53 = 0LL;
          (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    v43 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v43 + 16LL))(v43);
    }
    if ( v12 >= 0 )
    {
      v44 = *(__int64 (**)(void))(*(_QWORD *)*v6 + 96LL);
      if ( (char *)v44 == (char *)CFrameApplicationPresentation::IsVisible )
        IsVisible = CFrameApplicationPresentation::IsVisible(*v6);
      else
        IsVisible = v44();
      *((_BYTE *)this + 184) = IsVisible;
      CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(this);
    }
  }
  return (unsigned int)v12;
}
