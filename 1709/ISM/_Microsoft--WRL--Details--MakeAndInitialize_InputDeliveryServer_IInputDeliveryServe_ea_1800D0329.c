/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_InputDeliveryServer_IInputDeliveryServer_IInputDeliveryServerHost_____ptr64_&___ptr64_unsigned_short_const_____ptr64_&___ptr64_enum_InputDeliveryServer::TestMode_&___ptr64__::_1_::dtor$1 @ 0x1800D0329
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_InputDeliveryServer_IInputDeliveryServer_IInputDeliveryServerHost_____ptr64_____ptr64_unsigned_short_const_____ptr64_____ptr64_enum_InputDeliveryServer::TestMode_____ptr64__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 64));
}
