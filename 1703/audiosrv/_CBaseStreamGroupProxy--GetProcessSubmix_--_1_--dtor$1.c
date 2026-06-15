/*
 * XREFs of _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$1 @ 0x180059CEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(a2 + 64);
}
