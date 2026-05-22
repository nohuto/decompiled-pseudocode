/*
 * XREFs of ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800C6564
 * Callers:
 *     ??_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z @ 0x1800C67F0 (--_GSpatialGraphNodeReference@Holographic@Internal@Windows@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x1800BFAB8 (-StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEB.c)
 *     ??1?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BFCE0 (--1-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C74E0 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C9B2C (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C9F3C (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::~SpatialGraphNodeReference(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this)
{
  __int64 v2; // rax
  GUID *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  volatile signed __int32 *v6; // rdi
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+50h] [rbp-B0h]
  int *v13; // [rsp+58h] [rbp-A8h]
  int *v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+68h] [rbp-98h] BYREF
  char v16; // [rsp+6Ch] [rbp-94h]
  int v17; // [rsp+90h] [rbp-70h] BYREF
  const char *v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  char v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  _BYTE v22[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+148h] [rbp+48h]
  __int64 v24; // [rsp+150h] [rbp+50h]
  __int64 v25; // [rsp+158h] [rbp+58h]
  __int64 v26; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReference,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = *((_QWORD *)this + 9);
  v3 = (GUID *)(v2 + 12);
  if ( !v2 )
    v3 = &GUID_00000000_0000_0000_0000_000000000000;
  v11[1] = 0LL;
  v11[2] = v11;
  v11[3] = 0LL;
  v12 = 0;
  v13 = &v17;
  v14 = &v15;
  v15 = 0;
  v16 = 0;
  v20 = 0;
  v17 = 0;
  v18 = "DestroySpatialGraphNodeReference";
  v19 = 0LL;
  v21 = 1LL;
  v23 = 0LL;
  memset_0(v22, 0, sizeof(v22));
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v11[0] = &HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::`vftable';
  HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::StartActivity(
    (HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference *)v11,
    v3,
    (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 88));
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 124) )
    {
      *((_BYTE *)this + 124) = 0;
      v5 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking(
             v4,
             (char *)this + 88,
             *((unsigned int *)this + 30));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x673,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v5);
    }
    *((_QWORD *)this + 9) = 0LL;
    v6 = (volatile signed __int32 *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    if ( v6 )
    {
      if ( !_InterlockedDecrement(v6 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( !_InterlockedDecrement(v6 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
  }
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
  v11[0] = &HolographicDriverClientContinuousTrace::DestroySpatialGraphNodeReference::`vftable';
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 14);
  if ( v7 )
    (**v7)(v7, 1LL);
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 10);
  if ( v8 )
  {
    if ( !_InterlockedDecrement(v8 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( !_InterlockedDecrement(v8 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = *((_QWORD *)this + 8);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)(2 * v9));
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
