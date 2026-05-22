/*
 * XREFs of ??1OpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x1800BB8D8
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::dtor$2 @ 0x1800E9A89 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800CA090 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall HolographicDriverClientTrace::OpenHolographicDevice::~OpenHolographicDevice(
        HolographicDriverClientTrace::OpenHolographicDevice *this)
{
  *(_QWORD *)this = &HolographicDriverClientTrace::OpenHolographicDevice::`vftable';
  wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
