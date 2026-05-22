/*
 * XREFs of ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x1800C6824
 * Callers:
 *     ??$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNodeReference@234@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@456@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@456@@Z @ 0x1800CCA58 (--$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNode.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800BF510 (-StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU.c)
 *     ??1?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BFCE0 (--1-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C70E0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C9B2C (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C9F3C (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::RuntimeClassInitialize(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        char a5)
{
  __int64 v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rbx
  void ***v15; // rax
  void ***v16; // rbx
  void **v17; // rax
  void ***v18; // rcx
  int started; // eax
  _QWORD v21[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+50h] [rbp-B0h]
  int *v23; // [rsp+58h] [rbp-A8h]
  int *v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h] BYREF
  char v26; // [rsp+6Ch] [rbp-94h]
  int v27; // [rsp+90h] [rbp-70h] BYREF
  const char *v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  char v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  char v32[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v33; // [rsp+148h] [rbp+48h]
  __int64 v34; // [rsp+150h] [rbp+50h]
  __int64 v35; // [rsp+158h] [rbp+58h]
  __int64 v36; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v9 = *a2;
  v21[1] = 0LL;
  v21[2] = v21;
  v21[3] = 0LL;
  v22 = 0;
  v23 = &v27;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "CreateSpatialGraphNodeReference";
  v29 = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v21[0] = &HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::`vftable';
  HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::StartActivity((__int64)v21, v9 + 12, a3, a4);
  if ( !a4 )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 1669LL;
    goto LABEL_24;
  }
  v13 = a2[1];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a2[1];
  }
  *(_QWORD *)(a1 + 72) = *a2;
  v14 = *(volatile signed __int32 **)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v13;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 120) = a4;
  v15 = (void ***)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( a5 )
  {
    if ( v15 )
    {
      v17 = &Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel::`vftable';
LABEL_14:
      *v16 = v17;
      goto LABEL_16;
    }
  }
  else if ( v15 )
  {
    v17 = &Windows::Internal::Holographic::ConstantVelocityPosePredictionModel::`vftable';
    goto LABEL_14;
  }
  v16 = 0LL;
LABEL_16:
  v18 = *(void ****)(a1 + 112);
  if ( v16 != v18 )
  {
    if ( v18 )
      ((void (__fastcall *)(void ***, __int64))**v18)(v18, 1LL);
    v18 = v16;
    *(_QWORD *)(a1 + 112) = v16;
  }
  if ( v18 )
  {
    started = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking(
                *a2,
                a1 + 88,
                *(unsigned int *)(a1 + 120));
    v10 = started;
    if ( started >= 0 )
    {
      *(_BYTE *)(a1 + 124) = 1;
      wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
      v10 = 0;
      goto LABEL_26;
    }
    v11 = (unsigned int)started;
    v12 = 1685LL;
  }
  else
  {
    v10 = -2147024882;
    v11 = 2147942414LL;
    v12 = 1683LL;
  }
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v11);
LABEL_26:
  v21[0] = &HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::`vftable';
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
  return v10;
}
