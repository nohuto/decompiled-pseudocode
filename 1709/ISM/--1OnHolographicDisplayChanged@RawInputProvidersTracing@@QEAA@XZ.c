/*
 * XREFs of ??1OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAA@XZ @ 0x18008EA58
 * Callers:
 *     _SpatialInputControllerCollection::OnDisplayChanged_::_1_::dtor$2 @ 0x1800D0F47 (_SpatialInputControllerCollection--OnDisplayChanged_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FCAC (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType_ea_18008FCAC.c)
 *     ?Destroy@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180096594 (-Destroy@-$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvider.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall RawInputProvidersTracing::OnHolographicDisplayChanged::~OnHolographicDisplayChanged(
        RawInputProvidersTracing::OnHolographicDisplayChanged *this)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  *(_QWORD *)this = &RawInputProvidersTracing::OnHolographicDisplayChanged::`vftable';
  wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = (char *)*((_QWORD *)this + 38);
      if ( v3 )
      {
        wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((RawInputProvidersTracing::OnHolographicDisplayChanged *)((char *)this + 8));
}
