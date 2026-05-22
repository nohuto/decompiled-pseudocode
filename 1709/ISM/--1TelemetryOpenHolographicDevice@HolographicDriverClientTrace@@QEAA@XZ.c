/*
 * XREFs of ??1TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x1800AFC70
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::dtor$0 @ 0x1800D1B5E (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B20FC (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BA8D0 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HolographicDriverClientTrace::TelemetryOpenHolographicDevice::~TelemetryOpenHolographicDevice(
        HolographicDriverClientTrace::TelemetryOpenHolographicDevice *this)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  *(_QWORD *)this = &HolographicDriverClientTrace::TelemetryOpenHolographicDevice::`vftable';
  wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = (char *)*((_QWORD *)this + 38);
      if ( v3 )
      {
        wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientTrace,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((HolographicDriverClientTrace::TelemetryOpenHolographicDevice *)((char *)this + 8));
}
