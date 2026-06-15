/*
 * XREFs of _std::_Ref_count_obj_std::function_void___cdecl(void)___::_Ref_count_obj_std::function_void___cdecl(void)____std::function_void___cdecl(void)__&___ptr64__::_1_::dtor$1 @ 0x1800691C8
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall std::_Ref_count_obj_std::function_void___cdecl_void____::_Ref_count_obj_std::function_void___cdecl_void_____std::function_void___cdecl_void_______ptr64__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 72),
    (const unsigned __int16 *)(*(_QWORD *)(a2 + 64) + 16LL));
}
