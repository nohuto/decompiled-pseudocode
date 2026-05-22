/*
 * XREFs of ??1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ @ 0x1800B2D58
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphNodeReference::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800D1B52 (_Windows--Internal--Holographic--SpatialGraphNodeReference--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B362C (--1-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B9DCC (-Destroy@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::~CreateSpatialGraphNodeReference(
        HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference *this)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  *(_QWORD *)this = &HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::`vftable';
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = (char *)*((_QWORD *)this + 38);
      if ( v3 )
      {
        wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference *)((char *)this + 8));
}
