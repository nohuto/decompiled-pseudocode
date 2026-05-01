/*
 * XREFs of ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18010D490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B2E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPres.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F9E58 (--1-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180101B90 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801022B8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18010397C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@@012@$$QEA_N@Z @ 0x180109FE4 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV-$ComP.c)
 *     ??$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEAPEAVApplicationViewBackedViewHostItem@@$$QEAPEAVPresentationReadyChangedEventArgs@@@Z @ 0x18010A07C (--$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$As.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAAXIPEBGW4FRAMEWORK_VIEW_TYPE@@_N@Z @ 0x18010C774 (-StartActivity@ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationViewBackedViewHostItem::put_Visibility(ApplicationViewBackedViewHostItem *this, char a2)
{
  const WCHAR *StringRawBuffer; // rbx
  volatile signed __int32 *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  int v12; // eax
  __int64 v13; // rdx
  int ready; // eax
  __int64 v15; // rdx
  volatile signed __int64 *v16; // rcx
  __int64 v17; // rcx
  volatile signed __int64 *v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int64 *v22; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  struct Microsoft::WRL::Details::ModuleBase *v24; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v25; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int64 *v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v28[4]; // [rsp+78h] [rbp-90h] BYREF
  int v29; // [rsp+98h] [rbp-70h]
  int *v30; // [rsp+A0h] [rbp-68h]
  int *v31; // [rsp+A8h] [rbp-60h]
  int v32; // [rsp+B0h] [rbp-58h] BYREF
  char v33; // [rsp+B4h] [rbp-54h]
  int v34; // [rsp+D8h] [rbp-30h] BYREF
  const char *v35; // [rsp+E0h] [rbp-28h]
  __int64 v36; // [rsp+E8h] [rbp-20h]
  char v37; // [rsp+F0h] [rbp-18h]
  __int64 v38; // [rsp+F8h] [rbp-10h]
  _BYTE v39[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v40; // [rsp+190h] [rbp+88h]
  __int64 v41; // [rsp+198h] [rbp+90h]
  __int64 v42; // [rsp+1A0h] [rbp+98h]
  __int64 v43; // [rsp+1A8h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v27[1] = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 17), 0LL);
  v28[1] = 0LL;
  v28[2] = v28;
  v28[3] = 0LL;
  v29 = 0;
  v30 = &v34;
  v31 = &v32;
  v32 = 0;
  v33 = 0;
  v37 = 0;
  v34 = 0;
  v35 = "ApplicationViewBackedViewHostItem_put_Visibility";
  v36 = 0LL;
  v38 = 1LL;
  v40 = 0LL;
  v41 = 0LL;
  memset(v39, 0, sizeof(v39));
  v42 = 0LL;
  v43 = 0LL;
  v28[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::`vftable';
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::StartActivity(
    (__int64)v28,
    *((_DWORD *)this + 36),
    StringRawBuffer,
    *((_DWORD *)this + 44),
    a2 != 0);
  if ( a2 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v25);
    v5 = v25;
    if ( !v25 )
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)0x8007000ELL);
LABEL_6:
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd(v5 + 13, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v25 + 216LL))(v25, 1LL);
          v8 = Microsoft::WRL::Details::ModuleBase::module_;
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            goto LABEL_30;
        }
      }
      goto LABEL_39;
    }
    *((_DWORD *)v25 + 24) = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 *))(**((_QWORD **)this + 14) + 296LL))(
           *((_QWORD *)this + 14),
           v5);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x8F,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_6;
    }
    if ( _InterlockedExchangeAdd(v5 + 13, 0xFFFFFFFF) != 1
      || ((*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v25 + 216LL))(v25, 1LL),
          (v9 = Microsoft::WRL::Details::ModuleBase::module_) == 0LL) )
    {
LABEL_38:
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v28);
      v6 = 0;
      goto LABEL_39;
    }
LABEL_37:
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_38;
  }
  v24 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v24);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_28;
  }
  v23 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, GUID *, GUID *, __int64 *))(*(_QWORD *)v24 + 24LL))(
          v24,
          &IID_IImmersiveApplicationManager,
          &GUID_9886efb0_afb3_4a35_b381_329935b32d5a,
          &v23);
  v6 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v23 + 24LL))(
            v23,
            *((_QWORD *)this + 15),
            0LL,
            2050LL);
    v6 = v12;
    if ( v12 >= 0 )
    {
      v22 = 0LL;
      LOBYTE(v21) = 0;
      ready = Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool>(
                &v22,
                &v21);
      v6 = ready;
      if ( ready >= 0 )
      {
        v26 = v22;
        v27[0] = (__int64)this;
        ready = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem *,PresentationReadyChangedEventArgs *>(
                  (RTL_SRWLOCK *)this + 32,
                  v27,
                  (__int64 *)&v26);
        v6 = ready;
        if ( ready >= 0 )
        {
          v18 = v22;
          if ( v22 )
          {
            v22 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release(v18);
          }
          v19 = v23;
          if ( v23 )
          {
            v23 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v9 = v24;
          if ( !v24 )
            goto LABEL_38;
          v24 = 0LL;
          goto LABEL_37;
        }
        v15 = 163LL;
      }
      else
      {
        v15 = 162LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      v16 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release(v16);
      }
      goto LABEL_26;
    }
    v13 = 154LL;
  }
  else
  {
    v13 = 153LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v12);
LABEL_26:
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_28:
  v8 = v24;
  if ( v24 )
  {
    v24 = 0LL;
LABEL_30:
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_39:
  v28[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
  return v6;
}
