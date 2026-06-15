/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x180066914
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_short_const_____ptr64_____ptr64__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 104),
    *(const unsigned __int16 **)(a2 + 96));
}
