/*
 * XREFs of ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F370
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x180044210 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_b1e4bdca0075c456ca4a487c57ae0709___ @ 0x18000B344 (CDelayIAMOperations--AddOperation__lambda_b1e4bdca0075c456ca4a487c57ae0709___.c)
 *     ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180013820 (-QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?SetOperatingMode@CApplicationFrameWrapper@@UEAAJW4FRAME_OPERATING_MODE@@@Z @ 0x180016DD0 (-SetOperatingMode@CApplicationFrameWrapper@@UEAAJW4FRAME_OPERATING_MODE@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?GetPresentationLayer@CImmersiveApp@@UEAAJPEAPEAUIApplicationPresentationLayer@@@Z @ 0x18004C2F0 (-GetPresentationLayer@CImmersiveApp@@UEAAJPEAPEAUIApplicationPresentationLayer@@@Z.c)
 *     ?GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x18004C330 (-GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180082250 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18008A518 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  __int64 (__fastcall *v4)(CImmersiveApp *__hidden, struct IApplicationPresentationLayer **); // rax
  int PresentationLayer; // eax
  int v6; // edi
  __int64 v7; // rdi
  _QWORD *v8; // rsi
  volatile int *v9; // rdx
  _QWORD *v10; // rbx
  struct IAsyncCallback *v11; // r14
  __int64 v12; // rcx
  LPUNKNOWN v13; // rcx
  __int64 (__fastcall *v14)(CFrameApplicationPresentation *, struct IAsyncCallback *); // rax
  int v15; // eax
  volatile int *v16; // rdx
  HANDLE *v17; // rdi
  __int64 v18; // r14
  DWORD TickCount; // esi
  DWORD v20; // ebx
  HRESULT v21; // eax
  DWORD v22; // eax
  unsigned int v23; // eax
  DWORD v24; // ecx
  HCURSOR CursorW; // rax
  unsigned int v26; // eax
  RTL_SRWLOCK *v27; // rbx
  __int64 (__fastcall *v28)(CImmersiveApp *__hidden, struct IApplicationFrameProxy **); // rax
  int FrameInternal; // eax
  __int64 (__fastcall *v30)(__int64); // rax
  int v31; // eax
  CApplicationFrameService *v32; // rcx
  __int64 (__fastcall *v33)(CApplicationFrameService *__hidden, struct IApplicationFrameProxy *); // rax
  struct IApplicationFrameProxy *v34; // rcx
  __int64 v35; // r10
  __int64 v36; // r10
  struct IApplicationPresentationLayer *v37; // rcx
  struct IApplicationFrameProxy *v39; // [rsp+30h] [rbp-69h] BYREF
  __int64 v40; // [rsp+38h] [rbp-61h] BYREF
  struct IApplicationPresentationLayer *v41; // [rsp+40h] [rbp-59h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp-51h] BYREF
  __int64 v43; // [rsp+50h] [rbp-49h] BYREF
  CApplicationManager *v44; // [rsp+58h] [rbp-41h] BYREF
  struct IImmersiveApplicationInternal *v45; // [rsp+60h] [rbp-39h]
  struct tagMSG Msg; // [rsp+68h] [rbp-31h] BYREF
  __int64 v47; // [rsp+98h] [rbp-1h]
  __int64 v48; // [rsp+A0h] [rbp+7h]
  _QWORD *v49; // [rsp+A8h] [rbp+Fh]
  PSRWLOCK v50; // [rsp+B0h] [rbp+17h]
  struct IImmersiveApplicationInternal *v51; // [rsp+B8h] [rbp+1Fh]
  DWORD dwindex; // [rsp+108h] [rbp+6Fh] BYREF
  APTTYPE pAptType; // [rsp+110h] [rbp+77h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+118h] [rbp+7Fh] BYREF

  v47 = -2LL;
  v41 = 0LL;
  v40 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IApplicationPresentationLayer **))(*(_QWORD *)a2 + 504LL);
  if ( v4 == CImmersiveApp::GetPresentationLayer )
    PresentationLayer = CImmersiveApp::GetPresentationLayer(a2, &v41);
  else
    PresentationLayer = v4(a2, &v41);
  v6 = PresentationLayer;
  if ( PresentationLayer >= 0 )
  {
    v6 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v40);
    if ( v6 >= 0 )
    {
      v7 = v40;
      v43 = v40;
      if ( v40 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v40);
      v8 = 0LL;
      v48 = 0LL;
      v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = 0LL;
      if ( v10 )
      {
        v10[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        v10[4] = 0LL;
        ppunkMarshal = 0LL;
        if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
        {
          v12 = v10[4];
          if ( v12 )
          {
            v10[4] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
          ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
            ppunkMarshal,
            &GUID_00000003_0000_0000_c000_000000000046,
            v10 + 4);
        }
        v13 = ppunkMarshal;
        if ( ppunkMarshal )
        {
          ppunkMarshal = 0LL;
          ((void (__fastcall *)(LPUNKNOWN))v13->lpVtbl->Release)(v13);
        }
        *((_DWORD *)v10 + 11) = 1;
        *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
        v10[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v10[6] = 0LL;
        if ( v10 + 6 != &v43 )
        {
          v10[6] = v7;
          v7 = 0LL;
        }
        *v10 = off_18031EB48;
        v10[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        v11 = (struct IAsyncCallback *)v10;
        v8 = v10;
      }
      v49 = v8;
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
          v7,
          v9);
      if ( v11 )
      {
        v14 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IAsyncCallback *))(*(_QWORD *)v41 + 200LL);
        if ( v14 == CFrameApplicationPresentation::QueueAsyncCallback )
          v15 = CFrameApplicationPresentation::QueueAsyncCallback(v41, v11);
        else
          v15 = v14(v41, v11);
        v6 = v15;
      }
      else
      {
        v6 = -2147024882;
      }
      if ( v11 )
        (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 < 0 )
    goto LABEL_84;
  v17 = (HANDLE *)(v40 + 40);
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0
    || pAptType
    || (v18 = 1LL, pAptQualifier != APTTYPEQUALIFIER_APPLICATION_STA) )
  {
    v18 = 0LL;
  }
  TickCount = GetTickCount();
  v20 = 5000;
  while ( 1 )
  {
    if ( !v18 )
    {
      v22 = MsgWaitForMultipleObjectsEx(1u, v17, v20, 0x1CFFu, 0);
      goto LABEL_42;
    }
    v21 = CoWaitForMultipleHandles(0x18u, v20, 1u, v17, &dwindex);
    if ( v21 == -2147417835 )
    {
      v22 = 258;
LABEL_42:
      dwindex = v22;
      goto LABEL_43;
    }
    if ( v21 < 0 )
      dwindex = -1;
LABEL_43:
    v23 = GetTickCount() - TickCount;
    v20 = 0;
    if ( v23 <= 0x1388 )
      v20 = 5000 - v23;
    v24 = dwindex;
    if ( v23 > 0x1388 )
      v24 = 258;
    dwindex = v24;
    if ( v24 != 1 )
      goto LABEL_59;
    if ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
    {
      while ( Msg.message != 18 )
      {
        TranslateMessage(&Msg);
        if ( Msg.message != 32 || LOWORD(Msg.lParam) == 0xFFFE )
        {
          DispatchMessageW(&Msg);
        }
        else
        {
          CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F02);
          SetCursor(CursorW);
        }
        v24 = WaitForMultipleObjectsEx(1u, v17, 0, 0, 0);
        if ( v24 != 258 )
        {
          dwindex = v24;
          goto LABEL_58;
        }
        v26 = GetTickCount() - TickCount;
        if ( v26 > 0x1388 )
          goto LABEL_66;
        v20 = 5000 - v26;
        if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
          goto LABEL_57;
      }
      PostQuitMessage(Msg.wParam);
LABEL_66:
      dwindex = 258;
      goto LABEL_61;
    }
LABEL_57:
    v24 = dwindex;
LABEL_58:
    if ( v24 != 1 )
    {
LABEL_59:
      if ( v24 != 192 )
        break;
    }
  }
  if ( v24 != 258 )
    goto LABEL_62;
LABEL_61:
  WaitForMultipleObjectsEx(1u, v17, 0, 0, 0);
LABEL_62:
  v39 = 0LL;
  v27 = CApplicationManagerUtility::g_pIAMGlobals;
  v50 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v28 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IApplicationFrameProxy **))(*(_QWORD *)a2 + 496LL);
  if ( v28 == CImmersiveApp::GetFrameInternal )
    FrameInternal = CImmersiveApp::GetFrameInternal(a2, &v39);
  else
    FrameInternal = v28(a2, &v39);
  v6 = FrameInternal;
  if ( v27 )
    ReleaseSRWLockShared(v27);
  if ( v6 >= 0 )
  {
    v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 176LL);
    v31 = v30 == CApplicationFrameWrapper::SetOperatingMode
        ? CApplicationFrameWrapper::SetOperatingMode((__int64)v39)
        : ((__int64 (__fastcall *)(struct IApplicationFrameProxy *, __int64))v30)(v39, 1LL);
    v6 = v31;
    if ( v31 >= 0 )
    {
      v32 = (CApplicationFrameService *)*((_QWORD *)this + 75);
      v33 = *(__int64 (__fastcall **)(CApplicationFrameService *__hidden, struct IApplicationFrameProxy *))(*(_QWORD *)v32 + 88LL);
      if ( v33 == CApplicationFrameService::SynchronizeFrameInformation )
        CApplicationFrameService::SynchronizeFrameInformation(v32, v39);
      else
        v33(v32, v39);
    }
  }
  v34 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v34 + 16LL))(v34);
  }
  if ( v6 >= 0 )
  {
    v51 = a2;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
    v44 = this;
    v45 = a2;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
    CDelayIAMOperations::AddOperation__lambda_b1e4bdca0075c456ca4a487c57ae0709___(*((int **)this + 99), &v44);
    if ( v45 )
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v45 + 16LL))(v45);
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 16LL))(a2);
  }
LABEL_84:
  v35 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v35 + 36), v16) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 72LL))(v36, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v37 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(struct IApplicationPresentationLayer *))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return (unsigned int)v6;
}
