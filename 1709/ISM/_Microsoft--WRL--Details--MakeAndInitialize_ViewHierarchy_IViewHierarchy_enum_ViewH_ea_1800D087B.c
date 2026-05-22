/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_ViewHierarchy_IViewHierarchy_enum_ViewHierarchy::TestMode__::_1_::dtor$1 @ 0x1800D087B
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_ViewHierarchy_IViewHierarchy_enum_ViewHierarchy::TestMode__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 104));
}
