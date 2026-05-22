/*
 * XREFs of _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$2 @ 0x1800CFA57
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_____ptr64__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 56));
}
