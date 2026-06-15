/*
 * XREFs of _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$2 @ 0x1800CFF08
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return wil::details::out_param_t<wil::com_ptr_t<IStreamGroupProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IStreamGroupProxy,wil::err_returncode_policy>>((__int64 **)(a2 + 48));
}
