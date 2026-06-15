/*
 * XREFs of ??1_Ref_count_base@std@@UEAA@XZ @ 0x180040114
 * Callers:
 *     _std::make_shared_CPdcTimerActivation_CPdcActivationClient_____ptr64_CVADServer_____ptr64_&___ptr64__::_1_::dtor$4 @ 0x180063A2E (_std--make_shared_CPdcTimerActivation_CPdcActivationClient_____ptr64_CVADServer_____ea_180063A2E.c)
 *     _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$5 @ 0x180068015 (_SystemEffectChainDescriptor--MarkAsUnresolved_--_1_--dtor$5.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$102 @ 0x180068D8C (_CAudioResourceManager--DestroyStream_--_1_--dtor$102.c)
 *     _std::_Ref_count_obj_std::function_void___cdecl(void)___::_Ref_count_obj_std::function_void___cdecl(void)____std::function_void___cdecl(void)__&___ptr64__::_1_::dtor$0 @ 0x1800691BC (_std--_Ref_count_obj_std--function_void___cdecl(void)___--_Ref_count_obj_std--function_void___cd.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$130 @ 0x180069389 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$130.c)
 *     _std::make_shared_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____unsigned_short_const_____ptr64__::_1_::dtor$3 @ 0x1800C7C77 (_std--make_shared_std--basic_string_unsigned_short_std--char_traits_unsigned_short__ea_1800C7C77.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor$8 @ 0x1800CA6E0 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_base::~_Ref_count_base(std::_Ref_count_base *this)
{
  *(_QWORD *)this = &std::_Ref_count_base::`vftable';
}
