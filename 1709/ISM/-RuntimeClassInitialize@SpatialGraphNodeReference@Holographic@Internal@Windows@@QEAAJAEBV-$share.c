/*
 * XREFs of ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x1800B6A84
 * Callers:
 *     ??$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNodeReference@234@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@456@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@456@@Z @ 0x1800BB75C (--$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNode.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18008CA88 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B2DD4 (-StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU.c)
 *     ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B362C (--1-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B76EC (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B9DCC (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BA1EC (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     ?_Reset0@?$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@PEAV_Ref_count_base@2@@Z @ 0x1800BC974 (-_Reset0@-$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXP.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  void ***v16; // rax
  void ***v17; // rbx
  void **v18; // rax
  void ***v19; // rcx
  int started; // eax
  void *v21; // rdi
  int v23[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  void **v26; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  int *v29; // [rsp+68h] [rbp-98h]
  int *v30; // [rsp+70h] [rbp-90h]
  int v31; // [rsp+78h] [rbp-88h] BYREF
  char v32; // [rsp+7Ch] [rbp-84h]
  int v33; // [rsp+A0h] [rbp-60h] BYREF
  const char *v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  char v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  _BYTE v38[144]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v39; // [rsp+158h] [rbp+58h]
  __int64 v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  void *Block; // [rsp+170h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v24 = -2LL;
  v9 = *a2;
  v27[0] = 0LL;
  v27[1] = &v26;
  v27[2] = 0LL;
  v28 = 0;
  v29 = &v33;
  v30 = &v31;
  v31 = 0;
  v32 = 0;
  v36 = 0;
  v33 = 0;
  v34 = "CreateSpatialGraphNodeReference";
  v35 = 0LL;
  v37 = 1LL;
  v39 = 0LL;
  v40 = 0LL;
  memset(v38, 0, sizeof(v38));
  v41 = 0LL;
  Block = 0LL;
  v26 = &HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::`vftable';
  HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::StartActivity((__int64)&v26, v9 + 12, a3, a4);
  if ( !a4 )
  {
    v10 = -2147024809;
    v11 = 953LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v10);
    goto LABEL_26;
  }
  *(_OWORD *)v23 = 0LL;
  v12 = a2[1];
  v13 = *a2;
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  std::_Ptr_base<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Reset0(v23, v13);
  v25 = *(_QWORD *)&v23[2];
  *(_QWORD *)&v23[2] = *(_QWORD *)(a1 + 88);
  v14 = *(_QWORD *)&v23[2];
  *(_QWORD *)(a1 + 88) = v25;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)v23;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    {
      v15 = *(_QWORD *)&v23[2];
      (***(void (__fastcall ****)(_QWORD))&v23[2])(*(_QWORD *)&v23[2]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v23[2] + 8LL))(*(_QWORD *)&v23[2]);
    }
  }
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 128) = a4;
  v16 = (void ***)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( a5 )
  {
    if ( v16 )
    {
      v18 = &Windows::Internal::Holographic::ComputeVelocityFallbackPosePredictionModel::`vftable';
LABEL_14:
      *v17 = v18;
      goto LABEL_16;
    }
  }
  else if ( v16 )
  {
    v18 = &Windows::Internal::Holographic::ConstantVelocityPosePredictionModel::`vftable';
    goto LABEL_14;
  }
  v17 = 0LL;
LABEL_16:
  v19 = *(void ****)(a1 + 120);
  if ( v17 != v19 )
  {
    if ( v19 )
      ((void (__fastcall *)(void ***, __int64))**v19)(v19, 1LL);
    *(_QWORD *)(a1 + 120) = v17;
  }
  if ( !*(_QWORD *)(a1 + 120) )
  {
    v10 = -2147024882;
    v11 = 967LL;
    goto LABEL_22;
  }
  started = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking(
              *a2,
              a1 + 96,
              *(unsigned int *)(a1 + 128));
  v10 = started;
  if ( started >= 0 )
  {
    *(_BYTE *)(a1 + 132) = 1;
    wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v26);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3C9,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)started);
  }
LABEL_26:
  v26 = &HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::`vftable';
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v26);
  if ( Block )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 1 )
    {
      v21 = Block;
      if ( Block )
      {
        wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)Block + 8);
        operator delete(v21);
      }
    }
    Block = 0LL;
  }
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>((__int64)&v31);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v27);
  return v10;
}
