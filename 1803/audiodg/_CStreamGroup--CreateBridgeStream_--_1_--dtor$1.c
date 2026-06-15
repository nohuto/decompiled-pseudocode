/*
 * XREFs of _CStreamGroup::CreateBridgeStream_::_1_::dtor$1 @ 0x14004313B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CPipeInstance *__fastcall CStreamGroup::CreateBridgeStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>((CPipeInstance **)(a2 + 112));
}
